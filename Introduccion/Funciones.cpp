#include <iostream>
#include <string>

using namespace std;
/*Variables globales*/

/*Funciones prototipo*/
void hola(); //Cuando no queremos retornar un resultado usamos como tipo de dato "void"
//Una función prototipo termina con ";"
/*Funciones generales*/
void hola2()
{
	string nombre; //La variable solo existe en esta función, si se trata de usar fuera de ella no funcionará
	//la variable es local
	cout << "Dame tu nombre: ";
	cin >> nombre;
	cout << "Hola "<< nombre << "\n""\n";
}
/*Estructuras*/


//Clases

int main()
//int es el tipo de dato
//main es el nombre de la función
//Los parentesís es la función y puede llevar parámetros

{
	//Llamada a función hola
	hola();
	hola2();
}

//Definiciones de función
void hola()
{
	cout << "Hola mundo" << "\n""\n";
}
