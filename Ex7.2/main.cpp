#include <iostream>
int a[33] = {0}, n = 0;

void Baza2(int nrBaza10){
    while(nrBaza10){
        if((nrBaza10 & 0x3FF) & 0x3FF != 1)
            a[n++] = 1;
        else
            a[n++] = 0;
        nrBaza10 >>= 1;
    }

    long nrBaza2 = 0;
    for(int i = n - 1; i >= 0; i--) {
        nrBaza2 = nrBaza2 * 10 + a[i];
    }

    std :: cout << std :: endl << nrBaza2;
}

int main() {
    int nr;
    std :: cout << "Introduceti numarul: ";
    std :: cin >> nr;
    std :: cout << "Numarul in baza 2 este: ";
    Baza2(nr);
    return 0;
}
