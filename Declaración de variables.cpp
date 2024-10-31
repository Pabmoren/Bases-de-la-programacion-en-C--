#include <iostream>
#include <string>

using namespace std;

int varGlobal = 100;

int main() {
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
    cout << "Valor de variable global: " << varGlobal << endl;

    return 0;
}