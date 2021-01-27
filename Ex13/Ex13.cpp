//N copii stau în cerc. Începând cu copilul k, se numară din m în m şi se elimină respectivul copil.
//   Să se afişeze numele copiilor care părăsesc jocul pe rând precum şi copilul câstigator(ultimul rămas). [Se va folosi o listă circulară]
#include <iostream>
#include <cstring>

using namespace std;

struct Node{
    string name;
    Node*  next;
};

struct LCI {
    //current, last, temporary
    Node *c, *l, *temp;

    LCI(){
        l = NULL;
    }

    bool isEmpty(){
        if(l == NULL){
            return true;
        }
        return false;
    }
    void childBirth(string name){
        temp = new Node;
        temp -> name = name;
        if (isEmpty())
        {
            l = temp;
            temp->next = l;
        }
        else
        {
            temp->next = l->next;
            l->next = temp;
            l = temp;
        }
    }

    void killChild(LCI lci, string name){
        c = l -> next;
        while (c != l) {
            if (c -> name == name) {
                temp = c;
                c = l;
            }
            if (c -> next == temp) {
                c -> next = temp -> next;
                delete temp;
                break;
            }
            c = c->next;
        }
    }

    void view(){
        c = new Node;
        if (isEmpty())
        {
            cout<<"List de copii este goala."<<endl;
            return;
        }
        c = l -> next;
        cout << "Lista de copii: " << endl;
        while (c != l)
        {
            cout << c -> name << " ";
            c = c->next;
        }
        cout << c -> name << endl;
    }

    int size(){
        int nr = 0;
        if(!isEmpty()){
            c = l;
            nr++;
            while(c -> next != l){
                nr++;
                c = c-> next;
            }
        }
        else
            return 0;
        return nr;
    }

};

void joculetDeProgenituri(LCI lci, Node* c, Node *l, Node *temp){
    int k, m;
    cin >> k >> m;
    int nr = 0;
    int mr = 1;
    c = l;
    while(c -> next != l){
        if(nr == k){
            cout << "acesta este al k-lea copil " << c -> name << endl;
            while(lci.size() > 1){
                if(mr == m){
                    cout << "acest copil va fi eliminat " << c -> name << endl;
                    temp = c;
                    c = c -> next;
                    lci.killChild(lci, temp -> name);
                    lci.view();
                    mr = 1;
                }
                mr++;
                c = c -> next;
            }
            break;
        }
        nr++;
        c = c -> next;
    }
    cout << "utlimul copil";
    lci.view();

}

int main() {
    int n;
    cin >> n;
    LCI lci;
    string name;
    cout << "Introduceti numele copiilor: " << endl;
    for(int i = 0; i < n; i++){
        cin >> name;
        lci.childBirth(name);
    }
    lci.view();
    cout << endl;

    joculetDeProgenituri(lci, lci.c, lci.l, lci.temp);
    return 0;
}
