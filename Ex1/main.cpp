#include <iostream>

int min(int a, int b){
    if(a < b) return a;
    return b;
}

int main() {

    int numarLinii, numarColoane;
    std :: cout << "Introduceti numarul de linii: ";
    std :: cin >> numarLinii;
    std :: cout << "Introduceti numarul de coloane: ";
    std :: cin >> numarColoane;
    int** a = new int* [numarLinii];
    for(int i = 0; i < numarLinii; i++)
        a[i] = new int[numarColoane];

    std :: cout << "Intoduceti elementele: " << std :: endl;
    for(int i = 0; i < numarLinii; i++)
        for(int j = 0; j < numarColoane; j++)
            std :: cin >> a[i][j];

    for(int i = 0; i < numarLinii; i++){
        for(int j = 0; j < numarColoane; j++)
            std :: cout << *(*(a + i) + j) << " ";
        std :: cout << std :: endl;
    }

    std :: cout << std :: endl << "Parcugere matrice in spirala: " << std :: endl;
    for(int k = 0; k <= (min(numarLinii, numarColoane))/2; k++){

        for(int j = k; j < numarColoane - k; j++) {
            std::cout << *(*(a + k) + j) << " ";
        }
        for(int i = k + 1 ; i < numarLinii - k; i++) {
            std::cout << *(*(a + i) + (numarColoane - k - 1)) << " ";
        }
        for(int j = numarColoane - k - 2; j > k - 1; j--) {
            std::cout << *(*(a + numarLinii - k - 1) + j) << " ";
        }
        for(int i = numarLinii - k - 2; i > k ; i--) {
            std::cout << *(*(a + i) + k) << " ";
        }
    }
    return 0;
}

