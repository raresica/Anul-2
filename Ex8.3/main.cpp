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

void diferenta(int* multime1, int* multime2, int nrElemMult1, int nrElemMult2){
    int* dif = new int[100], nrElemDif = 0;
    bool ok = true;
    for(int i = 0; i < nrElemMult1; i++) {
        ok = true;
        for (int j = 0; j < nrElemMult2; j++)
            if (multime1[i] == multime2[j])
                ok = false;
        if (ok)
            dif[nrElemDif++] = multime1[i];
    }
    if(nrElemDif == 0)
        std :: cout << "Diferenta multimilor este multimea vida.";
    else
        for(int i = 0; i < nrElemDif; i++)
            std :: cout << *(dif + i) << " ";
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

    std::cout << std::endl;
    std::cout << "Diferenta A / B este: ";
    diferenta(multime1, multime2, nrElemMult1, nrElemMult2);
    std::cout << std::endl;
    std::cout << "Diferenta B / A este: ";
    diferenta(multime2, multime1, nrElemMult2, nrElemMult1);
    std::cout << std::endl;

}