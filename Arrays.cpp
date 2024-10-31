#include <iostream>
using namespace std;

int main() {
    int numeros[10];

    for(int i = 0; i < 10; i++) {
        numeros[i] = i + 1;
    }

    cout << "Números hacia adelante:" << endl;
    for(int i = 0; i < 10; i++) {
        cout << numeros[i] << " ";
    }

    cout << "\nNúmeros hacia atrás:" << endl;
    for(int i = 9; i >= 0; i--) {
        cout << numeros[i] << " ";
    }

    return 0;
}