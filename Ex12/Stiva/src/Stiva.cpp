#include <iostream>

struct Nod{
    int info;
    Nod* next;
};
struct Stiva{
    Nod* varf;

    Stiva(){
        varf = NULL;
    }

    bool isEmpty(){
        if(varf == NULL)
            return true;
        return false;
    }

    void push(int info){
        Nod* nodNou = new Nod;
        nodNou -> info = info;
        nodNou -> next = varf;
        varf = nodNou;
    }

    void pop(){
        Nod* p = varf;
        varf = varf -> next;
        delete p;
    }

    int top(){
        if(!isEmpty())
            return varf -> info;
        return NULL;
    }

    void afisare(){
        if(isEmpty())
            std :: cout << "Stiva este vida.";
        else{
            Nod* p = varf;
            while(p != NULL){
                std :: cout << p -> info << " ";
                p = p -> next;
            }
        }
    }
};

void sort(Stiva stiva){
    Stiva stivaAux,  rez;
    bool eSortat = false;
    do{
        stivaAux.push(stiva.top());
        stiva.pop();
        while(!stiva.isEmpty()){
            if(stivaAux.top() <= stiva.top())
                stivaAux.push(stiva.top());
            else
                rez.push(stiva.top());
            stiva.pop();
        }
        if(rez.isEmpty())
            eSortat = true;
        while(!stivaAux.isEmpty()){
            stiva.push(stivaAux.top());
            stivaAux.pop();
        }
        while(!rez.isEmpty()){
            stiva.push(rez.top());
            rez.pop();
        }
    }while(!eSortat);
    stiva.afisare();
}

int main() {
    int numarDeElemente, element;
    Stiva stiva;
    /*
    std :: cout << "Introduceti numarul de elemente: ";
    std :: cin >> numarDeElemente;
    std :: cout << std :: endl;

    //introducere elemente + afisare
    for(int i = 0; i < numarDeElemente; i++){
        std :: cout << "Introduceti elemntul " << (i + 1) << ": ";
        std :: cin >> element;
        stiva.push(element);
        std :: cout << std :: endl;
    }

    std :: cout << "Stiva este: " << std :: endl;
    stiva.afisare();
    std :: cout << std :: endl;

    // stergere elemente
    while(!stiva.isEmpty()){
        std :: cout << "Elemntul " << stiva.top() << " va fi sters." << std :: endl;
        stiva.pop();
        std :: cout << "Stiva este: " << std :: endl;
        stiva.afisare();
        std :: cout << std :: endl;
    }
    */

    //sortare
    std :: cout << "Introduceti numarul de elemente: ";
    std :: cin >> numarDeElemente;
    std :: cout << std :: endl;

    for(int i = 0; i < numarDeElemente; i++){
        std :: cout << "Introduceti elemntul " << (i + 1) << ": ";
        std :: cin >> element;
        stiva.push(element);
        std :: cout << std :: endl;
    }

    std :: cout << "Stiva este: " << std :: endl;
    stiva.afisare();
    std :: cout << std :: endl;

    std :: cout << "Stiva sortata este: " << std :: endl;
    sort(stiva);
    return 0;
}
