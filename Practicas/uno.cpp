#include<iostream>
#include <string>

using namespace std;

int main()
{
    //1.1 Num de materias
    int numMat = 5;
    cout << "El numero de materias que esta cursando es: " << numMat << endl;

    //1.2 Cuatrimestre cucursado
    int cuatCurs = 5;
    cout << "El cuatrimestre que cursas actualmente es el: " << cuatCurs << endl;

    //1.3 Mat curs con string

    string fund = "Fundamentos de ";
    string prog = "programacion";
    cout << "Estas cursando la materia de: " << fund + prog << endl;

    //1.4 Num de cuenta con string
    string numCuent = "335015602";
    cout << "Tu numero de cuenta es el siguiente: " << numCuent << endl;

    //1.5 - 1.6 - 1.7 Nombres con string
    string primNom = "Kevin";
    string segNom = "Josue";
    string apePat = "Barreto";
    string apeMat = "Torres";

    cout << "Tu primer nombre es " << primNom << ", y tu apellido paterno es " << apePat << endl;
    cout << "Tu nombre completo es: " << primNom << " " << segNom << " " << apePat << " " << apeMat << endl;

    //1.8 Num cel long long
    long long numCel = 5538818931;
    cout << "Tu numero de celular es: " << numCel << endl;

    //1.9 Num Casa long
    long numCas = 12;
    cout << "El numero de tu casa es: " << numCas << endl;

    //1.10 Correo con string
    string corUs = "kevin.barreto35@my.unitec.edu.mx";
    cout << "El correo que usas es el siguiente: " << corUs << endl;

    //1.11 Carrera con string
    string carrera = "Ing. en Telecomunicaciones y electronica";
    cout << "Estas cursando la carrera de: " << carrera << endl;

    /* Correxion de sintaxis */ 

    //1. El nombre de una variable no puede comenzar por un numero

    //2. El simbolo @ es un caracter que no es valido para usarse en un variable

    //3. Usar double dos veces para declarar una variable no es correcto, 
    //    ya es tomado como el nombre de la variable y es una palabra reservada 

    //4. Char solo puede contener un caracter entre comillas

    //5.bool no puede contener true entre comillas, debe ir sin ellas

    //6. int no puede almacenar numeros con decimales

    //7. El texto de la variable en string debe ir entre comillas dobles
    //    no entre comillas simples

    return 0;
}
