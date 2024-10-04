#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>
#include <string> //esta es la librería de string, en este caso nos va a da la función "getline"
    using namespace std;

    int main() 
    {
        // Manejo de punto decimal y separador de miles
        locale loc("");
        cout.imbue(loc);

        //si no tenemos "using namespace", no nos va a funcionar el código
        //string es una cadena de caracteres y puede contenr número y caracteres especiales (A diferencia de otro tipo ade variables)
        /*Declarar e imprimir texto, una variable string*/
        
        string texto0 = "Hola mundo";

        cout << texto0 << endl;


        /*Cómo unir dos variables tipo sting*/
        //para hacr sto utiliza un operador, en st caso usa "+" (No es una suma, es una UNION)

        string tipoa = "Hello";
        string tipob = "World";
        string saludo = tipoa + tipob;
        cout << saludo << endl;


        //vamos a preguntar al usasuaio nuevamnte usand la variable cin
        /*Inroducir un valo n una variabl tipo string*/

        string nombre; 
        cout << "Por favor, introduce tu nombre";
        cin >> nombre; // En esta parte solo poemos usa una sola palabra, en cuanto pongamos un spacio va a comenzar a ignorar todo lo que siga despué de ese espacio
        cout << "Hola" << nombre << "¿Cómo estás?" << endl;

        /*Cómo introducir una línea*/

        cin.ignore();
        string nombreCompleto;
        cout << "Dame tú nombre completo, por favor";
        getline(cin, nombreCompleto); 
        // A diferencia del cin anterior, con esta línea declaramos que el texto que solicitamos tome en cuenta una línea comleta de teto, no solo una palabra
        cout << "Tú nombre completo es:" << nombreCompleto << " ¿Cierto?" << endl;

        /* acceso a un caracter especifico*/

        cout << " La primera letra de tu nombre es " << nombre[0] << endl; //Le estamo pidiendo que impima el caracter de nuestra variable "nombre", en st caso es la posición "0"

        return 0;
    }
