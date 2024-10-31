#include <iostream>

using namespace std;

int main() {
    int numero = 10;
    int* puntero = &numero;

    cout << "Valor de numero: " << numero << endl;
    cout << "Dirección de numero: " << &numero << endl;
    cout << "Valor de puntero: " << puntero << endl;
    cout << "Valor apuntado por puntero: " << *puntero << endl;

    int* arregloDinamico = new int[5];
    for(int i = 0; i < 5; i++) {
        arregloDinamico[i] = i * 2;
    }

    cout << "\nValores del arreglo dinámico:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << arregloDinamico[i] << " ";
    }

    delete[] arregloDinamico;

    return 0;
}