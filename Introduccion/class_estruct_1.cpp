#include <iostream>
#include <string>

using namespace std;
/* Variables globales */


/* Estructuras - Clases */
struct Alumno
{
	string nombre;
	int cuenta;
};

int main()
{
	/* Clase - class / Estructura - struct
	* se compone de atriubutos / propiedades / variables
	* funciones
	* 
	* Es la estructura o mapa que contiene un objeto
	* 
	* Objeto: Instancia de una clase
	*/

	Alumno jose;
	//"Alumno" es el objeto y "jose" el objeto
	jose.nombre = "Jose";
	jose.cuenta = 12345;
	//El "." es un operador de accesO
	//El ":" y "::" son operadores de referencia

	cout << "Nombre: " << jose.nombre << "\n" << "Cuenta: " << jose.cuenta << "\n""\n";

	//La estructura sirve para guardar información

	Alumno kevin;
	kevin.nombre = "Kevin";
	kevin.cuenta = 23456;
	cout << "Nombre: " << kevin.nombre << "\n" << "Cuenta: " << kevin.cuenta << "\n""\n";
}
