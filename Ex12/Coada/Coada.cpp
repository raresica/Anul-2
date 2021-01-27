#include <iostream>
using namespace std;

struct Coada{
    int* data;
    int sizeMax, first, last;

    Coada(int sizeMax){
        data = new int[sizeMax];
        this->sizeMax = sizeMax;
        first = last = -1;
    }

    bool isEmpty();
    bool isFull();
    void Enqueue(int x);
    void afisare();
    int peekFirst();
    int peekLast();
    void Dequeue();
};

bool Coada :: isEmpty() {
    if(last == -1)
        return true;
    return false;
}

bool Coada ::isFull() {
    if((last == (sizeMax - 1)) && (first == 0))
        return true;
    return false;
}

void Coada :: Enqueue(int value) {
    if (isFull()) {
        cout << "Coada este plina.";
    } else {
        if(last == -1) {
            first = last = 0;
            data[last] = value;
        }
        else{
            last++;
            data[last] = value;
        }
    }
}
void Coada :: Dequeue(){
    if(!isEmpty()){
         if(first >= last){
             first = last = -1;
         }
         else
             first++;
     }
}

int Coada :: peekFirst(){

    return data[first];
}

int Coada :: peekLast(){

    return data[last];
}

void Coada :: afisare(){
    cout << "Coada este: " << endl;
    for(int i = first; i < last + 1;i++)
        cout << data[i] << " ";
}

void sort(Coada coada){
    int l = coada.sizeMax;
    Coada coadaAux(l);
    bool eSortat;
    do{
        coadaAux.Enqueue(coada.peekFirst());
        coada.Dequeue();
        for(int i = 0; i < l; i++){
            eSortat = true;
            if(coadaAux.peekFirst() <= coada.peekFirst()){
                coadaAux.Enqueue(coada.peekFirst());
                eSortat = false;
            }
            else{
                coada.Enqueue(coada.peekFirst());
                eSortat = false;
            }
            coada.Dequeue();
        }
        if(coada.isEmpty()){
            eSortat = true;
        }
        while(!coadaAux.isEmpty()){
            coada.Enqueue(coadaAux.peekFirst());
            coadaAux.Dequeue();
        }
    }while(!eSortat);
    coada.afisare();
}

int main() {
    int numarDeElemente, element;
    cout << "Introduceti numarul de elemente: ";
    cin >> numarDeElemente;
    cout << endl;
    Coada coada(numarDeElemente);
    for(int i = 0 ; i < numarDeElemente; i++){
        cout << "Introduceti elementul " << (i + 1) << ": ";
        cin >> element;
        coada.Enqueue(element);
        cout << endl;
    }

    cout << " --- " << endl;
    coada.afisare();
    cout << endl << " --- " << endl;
    /*
    cout << "Primul element din coada este: " << coada.peekFirst();
    cout << endl << " --- " << endl;
    cout << "Ultimul element din coada este: " << coada.peekLast();

    while(!coada.isEmpty()){
        cout << endl << " --- " << endl;
        cout << "Elementul " << coada.peekFirst() << " va fi sters.";
        coada.Dequeue();
        cout << endl << " --- " << endl;
        if(coada.isEmpty())
            cout << "Coada este vida.";
        else
            coada.afisare();
    }
    cout << endl << " --- " << endl;
    */

    //sortare
    cout << endl << " --- " << endl;
    sort(coada);
    cout << endl << " --- " << endl;
    return 0;
}
