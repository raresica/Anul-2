//implementarea lucrului cu liste simplu inlantuite LSI
#include <iostream>

using namespace std;

struct Node{
    int info;
    Node*  next;
};

struct LSI{
    //first, current, last, temporary
    Node *f, *c, *l, *temp;

    LSI(){
        f = NULL;
    }

    bool isEmpty();
    void insertFirst(int value);
    void insertPos(int position, int value);
    void insertBefore(int before, int value);
    void insertAfter(int after, int value);
    void insertLast(int value);
    void removeFirst();
    void removePos(int position);
    void removeBefore(int before);
    void removeAfter(int after);
    void removeValue(int value);
    void removeLast();
    void removeAll();
    void view();
    void viewRev(Node* f);
    void searchPos(int position);
    void searchValue(int value);
    bool contains(int value);
    int size();

};

bool LSI::isEmpty() {
    if(f == NULL)
        return true;
    return false;
}

void LSI::insertFirst(int value) {
    c = new Node;
    c -> info = value;
    c -> next = f;
    f = c;

}

void LSI::insertPos(int position, int value) {
    if (isEmpty()) {
        //cout << "Lista este vida, elementul " << value << " va fi primul din lista.";
        insertFirst(value);
    } else {
        if (position < 5) {
            int nr = 0;
            c = new Node;
            c = f;
            while (c != NULL) {
                nr++;
                if (nr == position - 1) {
                    temp = new Node;
                    temp -> info = value;
                    temp -> next = c -> next;
                    c -> next = temp;
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

void LSI::insertBefore(int before, int value) {
    if (isEmpty()) {
        cout << "Lista este vida, elementul " << value << " va fi primul din lista.";
        insertFirst(value);
    } else {
        if (before < 10 ) {
            int nr = 0;
            c = new Node;
            c = f;
            while (c != NULL) {
                nr++;
                if (nr == before - 1) {
                    Node *temp = new Node;
                    temp -> info = value;
                    temp -> next = c -> next;
                    c -> next = temp;
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

void LSI::insertAfter(int after, int value) {
    if (isEmpty()) {
        cout << "Lista este vida, elementul " << value << " va fi primul din lista.";
        insertFirst(value);
    } else {
        if (after < 10) {
            int nr = 0;
            c = new Node;
            c = f;
            while (c != NULL) {
                nr++;
                if (nr == after) {
                    Node *temp = new Node;
                    temp -> info = value;
                    temp -> next = c -> next;
                    c -> next = temp;
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

void LSI::insertLast(int value) {
    c = new Node;
    c = f;
    while(c != NULL) {
        if (c->next == NULL) {
            l = new Node;
            l -> info = value;
            l -> next = NULL;
            c -> next = l;
            break;
        }
        c = c->next;
    }
}

void LSI::removeFirst() {
    temp = f;
    f = f -> next;
    delete temp;
}

void LSI::removePos(int position) {
    c = new Node;
    c = f;
    int nr = 0;
    while (c != NULL) {
        nr++;
        if(nr == position - 1){
            temp = c;
        }
        if (nr == position) {
            temp -> next = c -> next;
            delete c;
            break;
        }
        c = c -> next;
    }
}

void LSI::removeBefore(int before) {
    c = f;
    int nr = 0;
    while(c != NULL){
        nr++;
        if(nr == before - 2){
            temp = c;
        }
        if (nr == before - 1) {
            temp -> next = c -> next;
            delete c;
            break;
        }
        c = c -> next;
    }
}

void LSI::removeAfter(int after) {
    c = f;
    int nr = 0;
    while(c != NULL){
        nr++;
        if(nr == after){
            temp = c;
            c = c -> next;
            temp -> next = c -> next;
            delete c;
            break;
        }
        c = c -> next;
    }
}

void LSI::removeValue(int value) {
    c = f;
    while(c -> next != NULL){
        if(c -> next -> info == value){
            temp = c;
            c = c -> next;
            temp -> next = c -> next;
            delete c;
            break;
        }
        c = c -> next;
    }
}

void LSI::removeLast() {
    c = new Node;
    c = f;
    while(c -> next != NULL){
        if(c -> next -> next == NULL){
            temp = new Node;
            temp = c -> next;
            c -> next = NULL;
            delete temp;
            break;
        }
        c = c -> next;
    }

}

void LSI::removeAll() {
    c = new Node;
    temp = new Node;
    c = f;
    while(c != NULL){
        temp = c;
        c = c -> next;
        delete temp;
    }
}

void LSI::view() {
    for(Node* i = f; i != NULL; i = i -> next)
        cout << i -> info << " ";
}

void LSI::viewRev(Node* f) {
    if(f != NULL){
        viewRev(f -> next);
        cout << f -> info << " ";
    }
}

void LSI::searchPos(int position) {
    c = f;
    int nr = 0;
    while(c != NULL){
        nr++;
        if(nr == position){
            cout << "Pe pozitia " << position << " se afla numarul " << c -> info;
        }
        c = c -> next;
    }
}

void LSI::searchValue(int value) {
    c = f;
    int nr = 0;
    while(c != NULL){
        nr++;
        if(c -> info == value)
            cout << "Numarul se afla pe pozitia: " << nr;
        c = c -> next;
    }
}

bool LSI::contains(int value) {
    c = new Node;
    c = f;
    while(c != NULL){
        if(c -> info == value) {
            return true;
            cout << "Elementul " << c -> info << " se afla in lista.";
        }
        c = c -> next;
    }
    return false;
}

int LSI::size() {
    if(!isEmpty()) {
        c = new Node;
        c = f;
        int number = 0;
        while (c != NULL) {
            number++;
            c = c -> next;
        }
        return number;
    }
    else{
        return 0;
    }
}

int main(){
    LSI lista;
    int left, right;
    cin >> left >> right;
    int x;
    //insert elements to the left
    for(int i = 0; i < left; i++){
        cin >> x;
        lista.insertFirst(x);
    }
    //insert elements to the right
    for(int i = 0; i < right; i++){
        cin >> x;
        lista.insertLast(x);
    }

    cout << endl;
    cout << lista.size();

    cout << endl;
    lista.view();
    cout << endl;
    lista.viewRev(lista.f);

    lista.insertPos(3, 9);
    cout << endl;
    lista.view();
    cout << endl;
    lista.viewRev(lista.f);

    lista.insertBefore(4, 8);
    cout << endl;
    lista.view();
    cout << endl;
    lista.viewRev(lista.f);

    lista.insertAfter(2, 6);
    cout << endl;
    lista.view();
    cout << endl;
    lista.viewRev(lista.f);

    cout << endl;
    cout << lista.size();

    cout << endl;
    lista.removeFirst();
    lista.view();

    cout << endl;
    lista.removeLast();
    lista.view();

    cout << endl;
    lista.removePos(3);
    lista.view();

    cout << endl;
    lista.removeBefore(4);
    lista.view();

    cout << endl;
    lista.removeAfter(2);
    lista.view();

    for(int i = 0; i < left; i++){
        cin >> x;
        lista.insertFirst(x);
    }
    lista.view();

    cout << endl;
    lista.contains(6);
    lista.view();


    cout << endl;
    lista.removeValue(6);
    lista.view();

    cout << endl;
    lista.searchPos(3);

    cout << endl;
    lista.searchValue(4);

    cout << endl;
    lista.removeAll();
    lista.view();
    return 0;
}


