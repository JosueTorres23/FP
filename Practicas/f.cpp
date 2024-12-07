#include <iostream>
using namespace std;

int main() {
    /* Practica F */

    /* 1.  Generar el código necesario en C++ para contar los números 
    naturales de manera regresiva de nueve a cero. Tip : en lugar de 
    sumar ++, necesitas restar -- */

    cout << "Contar de 9 a 0 de manera regresiva" << "\n";
    for (int i = 9; i >= 0; i--) {
        cout << i << " ";
    }
    cout << "\n""\n";

    /*2. Generar el código necesario en C++ para contar los números de 
    cero a 99. Tip : Necesitas inicializar el contador en uno y cambiar
    el limite a 99 */
    cout << " Contar de 1 a 99" << "\n";
    for (int i = 1; i <= 99; i++) {
        cout << i << " ";
    }
    cout << "\n""\n";

    /*3. Generar el código necesario en C++ para contar los números del
    uno al cien pero solo imprimir los números pares.Tip : usa un “if”
    y usa la operación residuo “ % ” para determinar que sea número par,
    y si es par, entonces imprime el número.Tip : revisa la solución del
    examen o las clases, cuando un número era múltiplo de 3 o de 2 */

    cout << "Contar los numeros pares de 1 a 100" << endl;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl << "\n""\n";

    /*4. Generar el código necesario en C++ solicitando el rango uno mínimo
    y uno máximo para generar la impresión de los números de manera secuencial
    de uno en uno, si ingresa 1 como mínimo y 10 como máximo, deberá imprimir 
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10 Tip: Declara dos variables enteras(int) e 
    insertalas en la instrucción for */

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

    /*5.  Generar el código necesario en C++ solicitando el rango uno máximo y uno mínimo para generar
    la impresión de los números de manera secuencial regresiva de uno en uno, si ingresa 1 como mínimo
    y 10 como máximo, deberá imprimir 10,9,8,7,6,5,4,3,2,1 Tip: Declara dos variables enteras (int) e
    insertalas en la instrucción for.*/
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
