#include <iostream>

int main() {
    int x, y, z;
    std::cin >> x >> y >> z;
    std::cout << "Introduceti dimensinea ";

    int*** a = new int**[x];
    for(int i = 0; i < x; i++){
        a[i] = new int* [y];
        for(int j = 0; i < y; j++){
            a[i][j] = new int[z];
        }
    }

    int sumaMarg= 0;


    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int l = 0; l < z; l++)
                std::cout << a[i][j][l] << " ";
            std::cout << std::endl;
        }
    }
    std::cout << std::endl << std::endl;

    for (int j = 0; j < y; j++)
        for (int l = 0; l < z; l++)
            sumaMarg += a[0][j][l];

    for (int i = 0; i < x; i++)
        for (int l = 0; l < z; l++)
            sumaMarg += a[i][0][l];

    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            sumaMarg += a[i][j][0];

    for (int j = 0; j < y; j++)
        for (int l = 0; l < z; l++)
            sumaMarg += a[x - 1][j][l];

    for (int i = 0; i < x; i++)
        for (int l = 0; l < z; l++)
            sumaMarg += a[i][y - 1][l];

    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            sumaMarg += a[i][j][z - 1];


    std::cout << "Suma elementelor e: " << sumaMarg;
    return 0;
}