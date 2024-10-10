// ConsoleApplication16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
    //1. Declarar e imprimir un texto

    string texto0 = "Hola, mundo!";
    cout << texto0 << endl;

    //2. Unir dos textos en uno

    string textoa = "Hola, ";
    string textob = "mundo!";
    string saludo = textoa + textob;
    cout << saludo << endl;


    //3. Introducir un valor en una variable de texto (string)
    // usando el teclado

    string nombre;
    cout << "Introduce tu nombre: ";
    cin >> nombre;
    cout << "Hola, " << nombre << "!" << endl;


    //4. Introducir una linea completa de texto (string)
    cin.ignore();
    string nombreCompleto;
    cout << "Introduce tu nombre completo: ";
    getline(cin, nombreCompleto);
    cout << "tu nombre completo : " << nombreCompleto << endl;

    //5. Longitud de un texto
    cout << "La longitud de tu nombre es: " << nombreCompleto.length() << endl;

    //6. como acceder a un caracter
    //especifico de un texto (string)
    cout << "El primer caracter de tu nombre es: " << nombreCompleto[0] << endl; //entre el corchete tenemos el caracter que va a arrojar

    //7. Cambiar un caracter,en una posicion especifica.
    string cambio = "Texto";
    cambio[0] = 't';
    cout << cambio << endl;

    //8. Convertir un string a mayúsculas
    string texto8 = "Hola mundo";
    transform(texto8.begin(),
        texto8.end(),
        texto8.begin(),
        ::tolower);
    cout << texto8 << endl;

        //9. Convertir un string a minúsculas
        string texto9 = "HOLA MUNDO";
    transform(texto9.begin(),
        texto9.end(),
        texto9.begin(),
        ::toupper);
    cout << texto9 << endl;

    //10.Insertar un texto dentro de otro 
    string texto10 = "Giovanna";
    texto10.insert(8, "Kevin");
    cout << texto10 << endl;

    //11. Convertir un número entero a string
    int numero1 = 123;
    string texto11 = to_string(numero1);
    cout << texto11 + " texto" << endl;

    //12. Convertir un string a numero
    string texto12 = "123";
    int numero2 = stoi(texto12);
    cout << "String como numero: "
        << numero2 << endl;


}
