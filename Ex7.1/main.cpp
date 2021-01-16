#include <iostream>

int nrBiti = 0, a[33] = {0};
void inBaza2(int nrB10){

    while (nrB10){
        a[nrBiti++] = nrB10 % 2;
        nrB10 /= 2;
    }
}
void inBaza10(int *nrB2, int o){
    int nrTrasnformat = 0;
    for(int i = o - 1; i >= 0; i--)
        nrTrasnformat += nrB2[i] * 2 ^ i;
    std :: cout << "Numarul nou este: " << nrTrasnformat;
}
int main() {
    int nr;
    std :: cout << "Introduceti numarul: ";
    std :: cin >> nr;
    inBaza2(nr);

    int b[33] = {0}, m = 0, c[33] = {0}, o = 0;
    for(int i = nrBiti - 1 ; i >= 0; i--){
        b[m++] = a[i];

    }

    std :: cout << "Numarul in baza 2 este: ";
    for(int i = 0 ; i < m; i++)
        std :: cout << b[i] << " ";

    std :: cout << std :: endl;

    int p, k, contor = 0;
    std :: cout << "Introduceti numarul de biti si bitul k: ";
    std :: cin >> p >> k;
    if(p < nrBiti && k < nrBiti) {
        for(int i = m - 1 - k; i >= 0 && contor < p; i--){
            c[o++] = b[i];
            contor++;
        }
    }

    std :: cout << "Noul numar in baza 2: ";
    for(int i = 0 ; i < o; i++)
        std :: cout << c[i] << " ";

    std :: cout << std :: endl;

    inBaza10(c, o);
    return 0;
}
