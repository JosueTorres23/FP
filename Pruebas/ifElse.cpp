/* Apartado para librerías*/
#include <iostream> 
//la librearía iostream nos sirve para poder administrar entradas y salidas en la consola
//De ahí que la librearía se llame iostream (i/o stream) (flujo de entrada/salida)
#include <string>


/* otros apartados de funciones*/
using namespace std;
//Usamos la "using name space std", por que con esto evitamos tener que usar "std::", para funciones como "cout" o "cin"
//Si no usaramos esta función se volvería repetitivo tener que usar "std::"

//Otra alternativa que tenemos para no usar using namespace es usar std::"función a usar" en este apartado. Pero tendríamos que hacer para cada función que necesite llevar std::


/*Código*/
int main()
{
    /*Declaración de variables*/
    int respUser; //Recuerda que siempre debes declarar la variable que uses en la función cin
    int posResp;
    
    /*Saludo al usuario y presentación*/
    cout << "Hola, el día de hoy te estare acompañando para hacerte una seríe de preguntas" << endl;
    cout << "Así que cuentame, ¿Cómo te encuentras el día de hoy?"<< endl;
    cout << "A - Bien" << endl;
    cout << "B - Mal" << endl;
    char respUser;

    if (respUser == 'B')
    {
        cout << "Es una pena oir eso" << endl;
        cout << "Sería recomendable que hagas una de las iguientes opciones"<< endl;
        cout << endl;
        cout << "- Toma una seción de relajación que te permita preguntarte por qué estás mal" << endl;
        cout << "- Quizás el ambiente en el que te encuentras está afectando"<<endl;
        cout << "- DEJA DE PROGRAMAR EN JAVA *_*"<< endl;
        
    }
    else if (respUser == 'A')
    {
        cout << "Me parece excelente" << endl;
    }    else {
            cout << "La respuesta que diste no es valida, por favor intentalo de nuevo" << endl;

            }
    
    
    



    return 0;
}
