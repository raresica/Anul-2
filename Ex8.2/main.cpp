#include <iostream>

int* multime(int nrElemente){
    int* multime = new int[100];
    std :: cout << "Introduceti elementele multimii: " << std :: endl;
    for(int i = 0; i < nrElemente; i++)
        std :: cin >> multime[i];
    return multime;
}

void afisare(int* multime, int nrElemente){
    for(int i = 0; i < nrElemente; i++)
        std :: cout << *(multime + i) << " ";
}

void intersectie(int* mult1, int* mult2, int nrElemMult1, int nrElemMult2){
    int* intersectie = new int[200], nrElemInters = 0;
    for(int i = 0; i < nrElemMult1; i++)
        for(int j = 0; j < nrElemMult2; j++)
            if(mult1[i] == mult2[j])
                intersectie[nrElemInters++] = mult1[i];
    std :: cout << "Intersectia multimilor este: ";
    for(int i = 0; i < nrElemInters; i++)
        std :: cout << *(intersectie + i) << " ";
}


int main() {
    int nrElemMult1;
    std::cout << "Prima multime are: ";
    std::cin >> nrElemMult1;
    std::cout << " elemente " << std::endl;
    int *multime1 = multime(nrElemMult1);
    std::cout << "Prima multime este: ";
    afisare(multime1, nrElemMult1);
    std::cout << std::endl;

    int nrElemMult2;
    std::cout << "A doua multime are: " << std::endl;
    std::cin >> nrElemMult2;
    int *multime2 = multime(nrElemMult2);
    std::cout << "A doua multime este: ";
    afisare(multime2, nrElemMult2);
    std::cout << std::endl;

    intersectie(multime1, multime2, nrElemMult1, nrElemMult2);
    std :: cout << std :: endl;


}