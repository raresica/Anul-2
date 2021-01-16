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

void incluziune(int* multime1, int* multime2, int nrElemMult1, int nrElemMult2){
    int nr = 0;
    if(nrElemMult1 < nrElemMult2) {
        for (int i = 0; i < nrElemMult1; i++)
            for (int j = 0; j < nrElemMult2; j++)
                if (multime1[i] == multime2[j])
                    nr++;
        if(nr == nrElemMult1)
            std :: cout << "Multimea1 este inclusa in Multimea2.";
        else
            std :: cout << "Multimea2 nu este inclusa in Multimea1.";
    }
    else
        std :: cout << "Multimea1 si Multimea 2 nu sunt incluse una in alta";

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



    incluziune(multime1, multime2, nrElemMult1, nrElemMult2);
    std :: cout << std :: endl;

    incluziune(multime2, multime1, nrElemMult2, nrElemMult1);
    std :: cout << std :: endl;

    return 0;
}