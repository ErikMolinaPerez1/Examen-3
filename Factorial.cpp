// Factorial.cpp
#include <iostream>
using namespace std;

int saldo = 20000; Saldo inicial

Función recursiva para calcular el factorial de un número
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

Función para mostrar el saldo actual
void consultarSaldo() {
    cout << "Tu saldo actual es: " << saldo << " pesos" << endl;
}

Función para retirar efectivo
void retirarEfectivo() {
    int retiro;
    cout << "Introduce la cantidad a retirar: ";
    cin >> retiro;

    if (retiro > saldo) {
        cout << "Saldo insuficiente." << endl;
    } else {
        saldo -= retiro;
        cout << "Has retirado: " << retiro << " pesos." << endl;
        cout << "Tu saldo restante es: " << saldo << " pesos." << endl;
    }
}

Menú del cajero automático
void cajeroAutomatico() {
    int opcion;
    do {
        cout << "\n--- Menú Cajero Automático ---\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Retirar efectivo\n";
        cout << "3. Salir\n";
        cout << "Selecciona una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                consultarSaldo();
                break;
            case 2:
                retirarEfectivo();
                break;
            case 3:
                cout << "Gracias por usar el cajero automático." << endl;
                break;
            default:
                cout << "Opción inválida. Inténtalo de nuevo." << endl;
        }
    } while (opcion != 3);
}

Menú principal para seleccionar entre factorial y cajero
int main() {
    int opcion;
    do {
        cout << "\n--- Menú Principal ---\n";
        cout << "1. Calcular Factorial\n";
        cout << "2. Usar Cajero Automático\n";
        cout << "3. Salir\n";
        cout << "Selecciona una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int num;
                cout << "Introduce un número: ";
                cin >> num;
                cout << "El factorial de " << num << " es: " << factorial(num) << endl;
                break;
            }
            case 2:
                cajeroAutomatico();
                break;
            case 3:
                cout << "Saliendo del programa. ¡Adiós!" << endl;
                break;
            default:
                cout << "Opción inválida. Inténtalo de nuevo." << endl;
        }
    } while (opcion != 3);

    return 0;
}
