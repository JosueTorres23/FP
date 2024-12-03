#include <iostream>
#include <string>
#include <vector>

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
	static void altaAlumno(vector <Alumno> & V)
		//Parámetros por referencia "&"
		//Un parámetro por referencia envía la dirección de memoria donde está el argumento
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
	vector <Alumno> vectAlumno;

}

//Los datos de una clase son privados, solo la clase puede usarlos
