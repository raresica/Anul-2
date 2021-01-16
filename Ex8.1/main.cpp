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

void reunine(int* mult1, int* mult2, int nrElemMult1, int nrElemMult2){
    int* reunine = new int[200], nrElemReunine = 0;
    for(int i = 0; i < nrElemMult1; i++){
        reunine[nrElemReunine++] = mult1[i];
    }
    for(int i = 0; i < nrElemMult2; i++){
        reunine[nrElemReunine++] = mult2[i];
    }
    std :: cout << "Reuniunea multimilor este: ";
    for(int i = 0; i < nrElemReunine; i++)
        std :: cout << *(reunine + i) << " ";
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



    reunine(multime1, multime2, nrElemMult1, nrElemMult2);
    std::cout << std::endl;
}