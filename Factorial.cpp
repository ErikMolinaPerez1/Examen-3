// Factorial.cpp
#include <iostream>
using namespace std;

// Funcion recursiva para calcular el factorial de un número
int factorial(int n) {
     if (n <= 1) return 1;
     return n * factorial(n - 1);
}


int main () {
    int num;
    cout << "Introduce un número: ";
    cin >> num;
    cout << "El factorial de " << num << "es: " << factorial(num) << endl;
    return 0;
}