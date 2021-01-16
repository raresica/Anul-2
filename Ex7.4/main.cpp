#include <iostream>
#include <cmath>

int main() {
    int x, poz, n = 0, a[33] = {0}, b[33] = {0}, m = 0;
    std :: cout << "Introduceti numarul si pozitia bitului caruia sa-i schimb valoarea: ";
    std :: cin >> x >> poz;

    while(x){
        a[n++] = x % 2;
        x /= 2;
    }

    for(int i =  n - 1; i >= 0; i--)
        b[m++] = a[i];
    for(int i = 0; i < m; i++)
        std :: cout << b[i];

    if(b[poz] == 1)
        b[poz] = 0;
    else
        b[poz] = 1;

    std :: cout << std :: endl;

    for(int i = 0; i < m; i++)
        std :: cout << b[i];

    int nrNou = 0;

    for(int i = m - 1; i >= 0; i--) {
        nrNou += b[i] * pow(2, i);
    }

    std :: cout << "Numarul este: " << nrNou;
    return 0;
}
