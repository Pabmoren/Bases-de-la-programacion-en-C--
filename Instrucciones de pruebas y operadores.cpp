#include <iostream>

using namespace std;

int main() {
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