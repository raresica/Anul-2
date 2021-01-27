#include <iostream>

using namespace std;

class Localitate{
public:
    char *denumire;
    int cod;
    long nr_locuitori;

public:
    Localitate(char* denumire, int cod, long nr_locuitori){
        this->denumire = denumire;
        this->cod = cod;
        this->nr_locuitori = nr_locuitori;
    }
    virtual void display(){
        cout << denumire << " " << cod << " " << nr_locuitori;
    };

};

class  Oras :public Localitate{
protected :
    int nrBlocuri;
public:
    Oras(char *denumire, int cod, long nr_locuitori, int nrBlocuri)
            : Localitate(denumire, cod, nr_locuitori) {
        this->denumire = denumire;
        this->cod = cod;
        this->nr_locuitori = nr_locuitori;
        this->nrBlocuri = nrBlocuri;
    }
     void display(){
        cout << denumire << " " << cod << " " << nr_locuitori <<  " " << nrBlocuri;
    }
};



class Capitala :public Oras{
protected:
    char *numePrefect;
public:
    void display(){
        cout << denumire << " " << cod << " " << nr_locuitori <<  " " << nrBlocuri << " " << numePrefect;
    }

    Capitala(char *denumire, int cod, long nr_locuitori, int nrBlocuri, char *numePrefect) : Oras(denumire, cod, nr_locuitori, nrBlocuri) {
        this->denumire = denumire;
        this->cod = cod;
        this->nr_locuitori = nr_locuitori;
        this->nrBlocuri = nrBlocuri;
        this->numePrefect = numePrefect;
    }
};

class Judet{
protected:
    Localitate* p;
    int nr_localitati;
    char* denumire;
public:
    Judet(Localitate* p, int nr_localitati, char* denumire){
        this->p = p;
        this->nr_localitati = nr_localitati;
        this->denumire = denumire;
    }
    void display(){
        cout << denumire << " " <<  p->denumire << " " << p->cod << " " << p->nr_locuitori << " " << " " << nr_localitati;
    }

};

int main() {
    Localitate localitate1("Cristian", 1, 9000);
    Oras oras("Brasov", 2, 500000, 2500);
    Capitala capitala("Bucuresti", 3, 2000000, 25000, "Firea");
    localitate1.display();
    cout << endl;
    oras.display();
    cout << endl;
    capitala.display();
    cout << endl;
    Judet judet(&localitate1, 100, "Brasov");
    judet.display();
    return 0;
}
