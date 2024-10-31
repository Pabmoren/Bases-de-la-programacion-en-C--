#include <iostream>

using namespace std;

int suma(int a, int b);
void imprimirMensaje(string msg);
int factorial(int n);

int main() {
    cout << "Suma de 5 y 3: " << suma(5, 3) << endl;
    imprimirMensaje("¡Hola desde la función!");
    cout << "Factorial de 5: " << factorial(5) << endl;

    return 0;
}

int suma(int a, int b) {
    return a + b;
}

void imprimirMensaje(string msg) {
    cout << msg << endl;
}

int factorial(int n) {
    if(n <= 1) return 1;
    return n * factorial(n - 1);
}