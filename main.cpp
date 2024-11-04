#include <iostream>
using namespace std;
int varGlobal = 100;
const double PI = 3.14159;
#define TAMANIO_MAXIMO 100
    //Funciones y prototipos
int suma(int a, int b);
void imprimirMensaje(string msg);
int factorial(int n);
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

enum Dias {DOMINGO, LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO};

int main() {
      //Declaración de Variables:
    string nombre;
    int edad;
    double altura;
    char calificacion;
    bool esEstudiante;

    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese su altura en metros: ";
    cin >> altura;
    cout << "Ingrese su calificación (A-F): ";
    cin >> calificacion;
    cout << "¿Es estudiante? (1 para sí, 0 para no): ";
    cin >> esEstudiante;

    cout << "\nInformación ingresada:" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Altura: " << altura << " metros" << endl;
    cout << "Calificación: " << calificacion << endl;
    cout << "Estado estudiantil: " << (esEstudiante ? "Estudiante" : "No estudiante") << endl;
    cout << "Valor de variable global: \n" << varGlobal << endl;


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
    cout << "\nValor de PI: " << PI << endl;
    cout << "Tamaño máximo: " << TAMANIO_MAXIMO << endl;

    Dias hoy = MIERCOLES;
    cout << "Hoy es el día número: " << hoy << endl;

    typedef unsigned long enteroLargo;
    enteroLargo numeroGrande = 1234567890;
    cout << "Número grande: " << numeroGrande << endl;

        //Funciones y prototipos:
    cout << "Suma de 5 y 3: " << suma(5, 3) << endl;
    imprimirMensaje("¡Hola desde la función!");
    cout << "Factorial de 5: " << factorial(5) << endl;

        //Bucles:
    int numero;
    cout << "\nIngrese un número para la tabla de multiplicar: ";
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
        //Punteros
    int numero1 = 10;
    int* puntero = &numero;

    cout << "Valor de numero: " << numero1 << endl;
    cout << "Dirección de numero: " << &numero1 << endl;
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

            //Instrucciones pruebas y operadores:
    int num1, num2;

    cout << "Ingrese dos números: ";
    cin >> num1 >> num2;

    cout << "\nOperaciones Aritméticas:" << endl;
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << num1 << " / " << num2 << " = " << (float)num1 / num2 << endl;
    cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;

    cout << "\nResultados de Comparación:" << endl;
    cout << num1 << " == " << num2 << ": " << (num1 == num2) << endl;
    cout << num1 << " != " << num2 << ": " << (num1 != num2) << endl;
    cout << num1 << " < " << num2 << ": " << (num1 < num2) << endl;
    cout << num1 << " > " << num2 << ": " << (num1 > num2) << endl;
    return 0;
}
