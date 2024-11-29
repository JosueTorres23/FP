#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
/*Variables globales*/
int n1, n2;

/*Funciones prototipo*/
void menuCalculadora();
void suma(); //Función sin retorno y con parámetros
int suma2(int n1, int n2); //Función con retorno y con parámetros
//Los datos que entran a la función son los parámetros
void perdirNumeros();
int resta(int n1, int n2);
int multiplcación(int n1, int n2);
int division(int n1, int n2);

/*Funciones generales*/


/*Estructuras*/


/*Clases*/

int main()

{
	// 
	perdirNumeros();
	menuCalculadora();
}

//Definiciones de función
int division(int n1, int n2)
{

}

int multiplcación(int n1, int n2)
{
	return n1 * n2;
}

int resta(int n1, int n2)
{
	return n1 - n2;
}

void perdirNumeros()
{
	cout << "Ingresa el numero 1 : ";
	cin >> n1;
	cout << "Ingresa el numero 2 : ";
	cin >> n2;
}

int suma2(int n1, int n2)
{
	return n1 + n2;
}

void suma() 
{
	cout << "Ingresa el numero 1 : ";
	cin >> n1;
	cout << "Ingresa el numero 2 : ";
	cin >> n2;
	cout << "La suma es : " << (n1 + n2) << endl;
}

void menuCalculadora()
{
	string respuesta;
	cout << "Ingrese la operación que desea realizar" << "\n""\n";
	cout << "1. Suma" << "\n" << "2. Resta" << "\n" << "3. Multiplicación" << "\n" << "4. División" << "\n";
	cin >> respuesta;


		while ()
		{
			cout << "No se encontró la selección ingresada" << "\n" << "Intenterlo nuevamente: ";
			cin >> respuesta;
			if (respuesta<=4 && respuesta >0)
			{
				break;
			}
		}
		if (respuesta == 1)
		{
			cout << "Suma: " << suma2(n1, n2) << "\n""\n";
		}

		if (respuesta == 2)
		{
			cout << "Resta: " << resta(n1, n2) << "\n""\n";
		}

		if (respuesta == 3)
		{

		}
}
