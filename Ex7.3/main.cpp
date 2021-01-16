#include <iostream>

int suma(){
    int a, b;
    int S = 0;
    std :: cout << "Introduceti numerele: ";
    std :: cin >> a >> b;

    while(a >= 1){
        if(a % 2 != 0)
            S += b;
        a >>= 1;
        b <<= 1;
    }

    std :: cout << "Suma, este: ";

    return S;
}

int main() {
    std :: cout <<  suma();
    std :: cout << std :: endl;
    return 0;
}
