#include <iostream>
using namespace std;

int main() {
    /* Practica F */

    //1. Contar de 9 a 0 de manera regresiva
    cout << "Contar de 9 a 0 de manera regresiva" << "\n";
    for (int i = 9; i >= 0; i--) {
        cout << i << " ";
    }
    cout << "\n""\n";

    // 2. Contar de 1 a 99
    cout << " Contar de 1 a 99" << "\n";
    for (int i = 1; i <= 99; i++) {
        cout << i << " ";
    }
    cout << "\n""\n";

    // 3. Contar los números pares de 1 a 100
    cout << "Contar los numeros pares de 1 a 100" << endl;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl << "\n""\n";

    // 4. Contar secuencialmente entre un rango mínimo y máximo
    int min, max;
    cout << "Introduce un rango minimo y maximo para contar secuencialmente de uno en uno" << endl;
    cout << "Introduce el rango minimo: ";
    cin >> min;
    cout << "Introduce el rango maximo: ";
    cin >> max;
    for (int i = min; i <= max; i++) {
        cout << i << " ";
    }
    cout << endl << "\n""\n";

    // 5. Contar regresivamente entre un rango máximo y mínimo
    cout << "Introduce un rango maximo y minimo para contar regresivamente de uno en uno" << endl;
    cout << "Introduce el rango minimo: ";
    cin >> min;
    cout << "Introduce el rango maximo: ";
    cin >> max;
    for (int i = max; i >= min; i--) {
        cout << i << " ";
    }
    cout << "\n""\n";
}
