#include <iostream>

using namespace std;

void modificarValor(int& x);

int main() {
    int numero = 100;
    cout << "Valor original: " << numero << endl;

    modificarValor(numero);
    cout << "Valor modificado: " << numero << endl;

    return 0;
}

void modificarValor(int& x) {
    x *= 2;
}