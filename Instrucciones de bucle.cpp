#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número para la tabla de multiplicar: ";
    cin >> numero;

    cout << "\nUsando bucle for:" << endl;
    for(int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    cout << "\nUsando bucle while:" << endl;
    int j = 1;
    while(j <= 10) {
        cout << numero << " x " << j << " = " << numero * j << endl;
        j++;
    }

    cout << "\nUsando bucle do-while:" << endl;
    int k = 1;
    do {
        cout << numero << " x " << k << " = " << numero * k << endl;
        k++;
    } while(k <= 10);

    return 0;
}