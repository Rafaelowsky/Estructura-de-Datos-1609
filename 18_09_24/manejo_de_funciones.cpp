/******************************************************************************

    Programa que muestra el manejo de funciones
    RZS
    18-09-2024

*******************************************************************************/

#include <iostream>
using namespace std;

// Declaración de funciones
int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
double dividir(int a, int b);

// Definición de funciones
int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

double dividir(int a, int b) {
    return static_cast<double>(a) / b;
}

int main() {
    int num1, num2;
    char opcion;

    cout << "Ingresa el primer número: ";
    cin >> num1;

    cout << "Ingresa el segundo número: ";
    cin >> num2;

    cout << "Elige una operación (+, -, *, /): ";
    cin >> opcion;

    switch (opcion) {
        case '+':
            cout << "Resultado: " << sumar(num1, num2) << endl;
            break;
        case '-':
            cout << "Resultado: " << restar(num1, num2) << endl;
            break;
        case '*':
            cout << "Resultado: " << multiplicar(num1, num2) << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Resultado: " << dividir(num1, num2) << endl;
            } else {
                cout << "Error: División por cero no permitida." << endl;
            }
            break;
        default:
            cout << "Operación no válida." << endl;
            break;
    }

    return 0;
}


