//Sa se implementeze functiile pentru lista dublu inlantuita LDI
#include <iostream>

using namespace std;

struct Node{
    int info;
    Node *pre, *next;
};
struct LDI{
    //first, current, last, temp
    Node *f, *c, *l, *temp;

    LDI(){
        f = NULL;
    }

    bool isEmpty(){
        if(f == NULL)
            return true;
        return false;
    }

    void insertFirst(int value){
        c = new Node;
        c -> info = value;
        if(!isEmpty()){
            temp = new Node;
            temp = f;
            c -> next = f;
            f = c;
            c = temp;
            c -> pre = f;
        }else{
            c -> next = f;
            f = c;
        }
    }

    void insertPos(int position, int value){
        c = new Node;
        temp = new Node;
        int nr = 0;
        c = f;
        while(c != NULL){
            nr++;
            if(nr == position - 1){
                temp -> info = value;
                temp -> next = c -> next;
                c -> next = temp;
                temp -> pre = c;
                temp -> next -> pre = temp;
                break;
            }
            c = c -> next;
        }
    }

    void insertBefore(int before, int value){
        if (isEmpty()) {
            cout << "Lista este vida, elementul " << value << " va fi primul din lista.";
            insertFirst(value);
        } else {
            if (before < 10 ) {
                int nr = 0;
                c = new Node;
                temp = new Node;
                c = f;
                while (c != NULL) {
                    nr++;
                    if (nr == before - 1) {
                        temp -> info = value;
                        temp -> next = c -> next;
                        c -> next = temp;
                        temp -> pre = c;
                        temp -> next -> pre = temp;
                        break;
                    }
                    c = c -> next;
                }
            } else {
                //adaugam elementul la sfarsitul listei
                insertLast(value);
            }
        }
    }

    void insertAfter(int after, int value){
        if (isEmpty()) {
            cout << "Lista este vida, elementul " << value << " va fi primul din lista.";
            insertFirst(value);
        } else {
            if (after < 10) {
                int nr = 0;
                c = new Node;
                temp = new Node;
                c = f;
                while (c != NULL) {
                    nr++;
                    if (nr == after) {
                        temp -> info = value;
                        temp -> next = c -> next;
                        c -> next = temp;
                        temp -> pre = c;
                        temp -> next -> pre = temp;
                        break;
                    }
                    c = c -> next;
                }
            } else {
                //adaugam elementul la sfarsitul listei
                insertLast(value);
            }
        }
    }

    void insertLast(int value){
        c = new Node;
        c = f;
        while(c != NULL){
            if (c->next == NULL) {
                l = new Node;
                l -> info = value;
                l -> next = NULL;
                c -> next = l;
                l -> pre = c;
                break;
            }
            c = c -> next;
        }
    }

    void removeFirst(){
        c = new Node;
        c = f;
        f = c -> next;
        f -> pre = NULL;
        delete c;
    }

    void removePos(int position){
        c = new Node;
        c = f;
        int nr = 0;
        while(c != NULL){
            nr++;
            if(nr == position){
                c -> pre -> next = c -> next;
                c -> next -> pre = c -> pre;
                delete c;
                break;
            }
            c = c -> next;
        }
    }

    void removeBefore(int before){
        c = new Node;
        int nr = 0;
        c = f;
        while(c != NULL){
            nr++;
            if(nr == before - 1){
                c -> pre -> next = c -> next;
                c -> next -> pre = c -> pre;
                delete c;
                break;
            }
            c = c -> next;
        }
    }

    void removeAfter(int after){
        c = new Node;
        int nr = 0;
        c = f;
        while(c != NULL){
            nr++;
            if(nr == after + 1){
                c -> pre -> next = c -> next;
                c -> next -> pre = c -> pre;
                delete c;
                break;
            }
            c = c -> next;
        }
    }

    void removeValue(int value){
        c = new Node;
        c = f;
        while(c != NULL){
            if(c -> info == value){
                c -> pre -> next = c -> next;
                c -> next -> pre = c -> pre;
                delete c;
                break;
            }
            c = c -> next;
        }
    }

    void removeAll(){
        c = new Node;
        temp = new Node;
        c = f;
        while(c != NULL){
            temp = c;
            c = c -> next;
            delete temp;
        }
    }

    void removeLast(){
        c = new Node;
        c = l;
        l = c -> pre;
        l -> next = NULL;
        delete c;
    }

    void searchValue(int value){
        c = new Node;
        c = f;
        int nr = 0;
        while(c != NULL){
            nr++;
            if(c -> info == value){
                cout << "Elementul " << c -> info << " se afla la pozitia " << nr;
            }
            c = c -> next;
        }
    }

    void searchPos(int position){
        c = new Node;
        c = f;
        int nr = 0;
        while(c != NULL){
            nr++;
            if(nr == position){
                cout << "Pe pozitia " << nr << " se afla elementul " << c -> info;
            }
            c = c -> next;
        }
    }

     bool contains(int value){
        c = new Node;
        c = f;
        int nr = 0;
        while(c != NULL){
            nr++;
            if(c -> info == value){
                return true;
            }
            c = c -> next;
        }
        return false;
    }

    void view() {
        if(isEmpty())
            cout << "Lista este vida.";
        else
            for(Node *i = f; i != NULL; i = i -> next)
                cout << i -> info << " ";
    }

    void viewRev(Node* f){
        /*for(Node *i = l; i != NULL; i = i -> pre)
            cout << i -> info << " ";*/  //nuj dc nu merge
        //adica afiseaza lista invers, dar programul dupa nu mai merge, se inchide cu cv error code

        if(f != NULL){
            viewRev(f -> next);
            cout << f -> info << " ";
        }
    }
};
int main() {
    LDI lista;

    for(int i = 0; i <= 2; i++)
        lista.insertFirst(i);
    for(int i = 3; i <= 5; i++)
        lista.insertLast(i);

    lista.view();
    cout << endl;
    lista.viewRev(lista.f);
    cout << endl << endl;

    lista.insertPos(3, 6);
    lista.view();
    cout << endl;

    lista.insertBefore(2, 8);
    lista.view();
    cout << endl;

    lista.insertAfter(5, 9);
    lista.view();
    cout << endl;

    lista.removeFirst();
    lista.view();
    cout << endl;

    lista.removePos(4);
    lista.view();
    cout << endl;

    lista.removeBefore(3);
    lista.view();
    cout << endl;

    lista.removeAfter(4);
    lista.view();
    cout << endl;

    lista.removeValue(6);
    lista.view();
    cout << endl;

    lista.removeLast();
    lista.view();
    cout << endl;

    lista.searchValue(8);
    cout << endl;

    lista.searchPos(3);
    cout << endl;

    return 0;
}
