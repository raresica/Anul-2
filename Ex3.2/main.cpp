#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;
int nrBaza10;

void inBaza10(int bazaB, char *nrBazaB){
    int c;
    if(strlen(nrBazaB) != 0) {
        if (isdigit(nrBazaB[0]))
            c = nrBazaB[0] - '0';
        else
            c = 10 + nrBazaB[0] - 'A';
        nrBaza10 += c * pow(bazaB, (strlen(nrBazaB) - 1));
        cout << nrBaza10;
        for (int i = 1; i < strlen(nrBazaB); i++)
            nrBazaB[i] = nrBazaB[i + 1];
        inBaza10(bazaB, nrBazaB);
    }
}

void inBazaB(long nrBaza10, int bazaB){
    if(nrBaza10){
        inBazaB(nrBaza10 / bazaB, bazaB);
        int rest = nrBaza10 % bazaB;
        if(rest > 9)
            cout << char('A' + rest - 10);
        else
            cout << char('0' + rest);
    }
}

int main() {
    inBazaB(19007, 16);
    inBaza10(16, "4A3F");
    return 0;
}
