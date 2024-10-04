/*Las librerías están acomodadas de acuerdo a su uso*/

#include <iostream>
#include <limits> //Funciona para encontrar el min() y max() del tipo de datos
#include <iomanip> //Manipulación de las entradas y salidas (Se maneja la precisión de datos y la  función string)
#include <locale> //Esta librería toma las preferencia de windows ( . Decimales/ , miles / $ peso )
using namespace std; //Siempre se coloca después de las librerías
//include <Aquí es dónde se agregan las funciones de las librearias>

int main () //Es una dunción de ipo entero, y todo lo que esté dentro de las llaves en en dónde debe ir nuestro código

/*
int main() <--- Esto es obligatorio
{Todo el código}
*/

{
    locale loc(""); //Con esta función haremos el manejo del punto decimal y separador de unidades (librería "locale")
    cout.imbue(loc); //
    // 1. Entero (int)
    cout << "1" << endl;
    int numeroEntero = 42;
    cout << "Entero: " << numeroEntero << endl;
    cout << "Rango int : " << numeric_limits<int>::min() << " a " << numeric_limits<int>::max() << endl;
    //Aqui le estamos pidiendo que nos de como salida el valor min y el valor máx
    cout << " " << endl;

    // 2. Entero corto (short int)
    short int numeroCorto = 32000;
    cout << "2" << endl;
    cout << "Entero corto: " << numeroCorto << endl;
    cout << "Rango short int : " << numeric_limits<short int>::min() << " a " << numeric_limits<short int>::max() << endl;
    cout << " " << endl;

    // 3. Entero largo (long)
    long numeroLargo = 1234567890L;
    cout << "3" << endl;
    cout << "Entero largo: " << numeroLargo << endl;
    cout << "Rango long : " << numeric_limits<long>::min() << " a " << numeric_limits<long>::max() << endl;
    cout << " " << endl;

    // 4. Entero sin signo (unsigned int)
    unsigned int numeroSinSigno = 4000000000U;
    cout << "4" << endl;
    cout << "Entero sin signo: " << numeroSinSigno << endl;
    cout << "Rango unsigned int : " << numeric_limits<unsigned int>::min() << " a " << numeric_limits<unsigned int>::max() << endl;
    cout << " " << endl;

    // 5. Entero corto sin signo (unsigned short int)
    unsigned short int numeroCortoSinSigno = 65000;
    cout << "5" << endl;
    cout << "Entero corto sin signo: " << numeroCortoSinSigno << endl;
    cout << "Rango unsigned short int : " << numeric_limits<unsigned short int>::min() << " a " << numeric_limits<unsigned short int>::max() << endl;
    cout << " " << endl;

    // 6. Entero largo sin signo (unsigned long long)
    unsigned long long numeroLargoSinSigno = 4000000000UL;
    cout << "6" << endl;
    cout << "Entero largo sin signo: " << numeroLargoSinSigno << endl;
    cout << "Rango unsigned long long : " << numeric_limits<unsigned short int>::min() << " a " << numeric_limits<unsigned long long>::max() << endl;
    cout << " " << endl;

    // 7. Entero con signo explícito (signed int)
    signed int numeroConSigno = -42;
    cout << "7" << endl;
    cout << "Entero con signo: " << numeroConSigno << endl;
    cout << "Rango signed int : " << numeric_limits<signed int>::min() << " a " << numeric_limits<signed int>::max() << endl;
    cout << " " << endl;

    // 8. Entero corto con signo explícito (signed short int)
    signed short int numeroCortoConSigno = -32000;
    cout << "8" << endl;
    cout << "Entero corto con signo: " << numeroCortoConSigno << endl;
    cout << "Rango signed short int : " << numeric_limits<signed short int>::min() << " a " << numeric_limits<signed short int>::max() << endl;
    cout << " " << endl;

    // 9. Entero largo con signo explícito (signed long long)
    signed long long numeroLargoConSigno = -1234567890L;
    cout << "9" << endl;
    cout << "Entero largo con signo: " << numeroLargoConSigno << endl;
    cout << "Rango signed long long : " << numeric_limits<signed long long>::min() << " a " << numeric_limits<signed long long>::max() << endl;
    cout << " " << endl;

    // 10. Entero largo largo (long long int)
    long long numeroLargoLargo = 123456789012345LL;
    cout << "10" << endl;
    cout << "Entero largo largo: " << numeroLargoLargo << endl;
    cout << "Rango long long : " << numeric_limits<long long>::min() << " a " << numeric_limits<long long>::max() << endl;
    cout << " " << endl;

    int edad;

    cout << "Por favor ingresa tu edad : ";
    cin >> edad; //Guardando un valor de edad
    /* "cin" es una función que se usa para leer un conjunto de caracteres desde la consola
    
    NOTA: considera que por default, la consola acepta cualquier valor de entrada, es decir una cadena de caracteres
    */
    cout << endl; //es un salto de pagina más eficiente que loa anteriores
    cout << "Tu edad es : " << edad << endl;
    cout << endl;

    const float pi = 3.141632; //Decimal de 7 digitos de precisión
    //Pusimos const para declarar que pi es un valor constante y no se puede editar
    double PI = 3.141632; //Decimal de 15 digitos de precisión
    cout << fixed; //Aquí le decimos que el púnto debe ser fijo
    cout << setprecision(2); //Aquí le decimos cuanto digitos vamos a manejar de nuestro número
    cout << "El valor de pi es " << pi << endl;
    /* estas fueron impresión de valores para el usuario */

    //Preguntamnos por estatura
    
    float estatura;
    cout << "Por favor, ingresa tu estatura: ";
    cin >> estatura;
    cout << endl;
    cout << "Tu estatura es: "
            << estatura << endl;

    /* investiga más sobre setprecisión y fixed*/

    /* delaración de constantes*/

    const float veldeLuz = 300000000;
    cout << veldeLuz;

    return 0;
}
