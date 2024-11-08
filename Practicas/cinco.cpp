#include <iostream>
#include <string>
using namespace std;
int main() {
	/*1.21 Pregunta para salir del código*/
	string respuesta;
	do
	{
		cout << "Quieres salir del ciclo? (SI/NO) " << "\n""\n";
		cin >> respuesta;

		if (respuesta == "SI")
		{
			cout << "\n""\n";
			break;
		}
	} while (true);


	/*1.22 Menu de opciones de operaciones*/
	int numero1, numero2;



	/*1.23 Cajero*/
	float saldo=3450, retiro;
	string contraseña,seleccion;

	do
	{
		cout << "Introduzca su PIN: ";
		cin >> contraseña;
		if (contraseña=="1234")
		{
			break;
		}
		else
		{
			cout << "PIN incorrecto" << "\n""\n";
		}
	} while (true);

	do
	{
		//salida de menu
		cout << "Menu de operaciones" << "\n""\n";
		cout << "a) Consulta de saldo" << "\n";
		cout << "b) Retiro de dinero" << "\n";
		cout << "c) Cancelar operacion" << "\n""\n";

		//cin y switch

		cin >> seleccion;

		do
		{
			
		} while (true);

	} while (seleccion=="c");


	/*1.24 temple run*/
	srand(time(NULL)); //Seed
	int castigo, premio;
	int vida = 12;
	cout << "Vida inicial 12" << "\n""\n";
	while (vida > 0)
	{
		//consumo
		vida--;
		cout << "consumo de 1 vida " <<vida<< "\n""\n";

		castigo = rand()%2;
		if (castigo == 1);
		{
			vida = vida - 3;
			cout << "Castigo " <<vida<< "\n""\n";
		}
		premio = rand() % 2;
		if (premio==1)
		{
			vida == vida + 3;
			cout << "Premio "<<vida << "\n""\n";
		}
		cout << "Fin ciclo "<<vida << "\n""\n";
		cout <<"================="<< "\n""\n";
	}
}
