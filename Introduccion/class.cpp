#include <iostream>
#include <string>

using namespace std;
/* Variables globales */


/* Estructuras - Clases */
class Alumno
{
	//Atributos de la estructura
	string nombre;
	int cuenta;

	//funciones de la estructura
public:
	static void altaAlumno()
	{
		//Nombre del alumno
		Alumno alumno;
		cout << "Nombre: ";
		cin >> alumno.nombre;
		cout << "\n";

		//Cuenta del alumno
		Alumno cuenta;
		cout << "Cuenta: ";
		cin >> alumno.cuenta;
		cout << "\n""\n";

		imprimeDatos(alumno);
	}
	static void imprimeDatos(Alumno alumno)
	{
		cout << "Nombre: " << alumno.nombre << "\n";
		cout << "Cuenta: " << alumno.cuenta << "\n""\n";

	}
};

int main()
{
	Alumno::altaAlumno();
}

//Los datos de una clase son privados, solo la clase puede usarlos
