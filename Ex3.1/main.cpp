#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

void inBaza10(int bazaB, char nrBazaB[10]){
    int l = strlen(nrBazaB);
    int c;
    double nrBaza10 = 0;
    for(int i = 0; i < l; i++){
        if(isdigit((nrBazaB[i])))
            c = nrBazaB[i] - '0';
        else
            c = 10 + nrBazaB[i] - 'A';
        nrBaza10 += c * pow(bazaB, l - i - 1);
    }
    cout << nrBaza10;
}

void transformareInBazaB(long nrBaza10, int bazaB){
    char a[33] = {0};
    int n = 0;
    while(nrBaza10){
        int rest = nrBaza10 % bazaB;
        if((rest ) > 9)
            a[n++] = 'A' + rest - 10;
        else
            a[n++] = '0'+nrBaza10 % bazaB;
        nrBaza10 /= bazaB;
    }
    for(int i = n - 1; i >= 0; i--)
        cout << a[i];
}

int main(){
    int bazaB;
    cout << "introdu baza(2,8,16)";
    cin >> bazaB;
    char nrInBazaB[10];
    cout << "Introduceti numarul in baza " << bazaB << " :";
    cin >> nrInBazaB;
    inBaza10(bazaB, nrInBazaB);
    cout << endl << endl;
    long nrBaza10;
    cout << "Introduceti numarul in baza 10: ";
    cin >> nrBaza10;
    int bazaB2;
    cout << "Introduceti baza in care transformam(2,8,16): ";
    cin >> bazaB2;
    transformareInBazaB(nrBaza10, bazaB);
    return 0;
}
