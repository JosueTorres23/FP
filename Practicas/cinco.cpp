#include <iostream>
#include <string>
using namespace std;
int main()
{
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
	int numero1, numero2, total;
	char opcion;


	do
	{
		//Menu de salida
		cout << "Seleccione una operacion:" << endl;
		cout << " (+) Suma" << endl;
		cout << " (-) Resta" << endl;
		cout << " (*) Multiplicacion" << endl;
		cout << " (/) Division" << endl;
		cout << " (%) Residuo" << endl;
		cout << " (s) Salir" << endl;
		cout << "Ingrese una opcion: ";
		cin >> opcion;

		//Valores para operación
		if (opcion != 's') {
			cout << "Ingrese el primer numero: ";
			cin >> numero1;
			cout << "Ingrese el segundo numero: ";
			cin >> numero2;
		}

		//switch de posibles opciones
		switch (opcion)
		{
		case '+':
			total = numero1 + numero2;
			cout << "Resultado de la suma " << total << "\n""\n";
			break;

		case '-':
			total = numero1 - numero2;
			cout << "Resultado de la resta " << total << "\n""\n";
			break;

		case '*':
			total = numero1 * numero2;
			cout << "Resultado de la multiplicacion " << total << "\n""\n";
			break;

		case '/':
			total = numero1 / numero2;
			cout << "Resultado de la division " << total << "\n""\n";
			break;

		case '%':
			total = numero1 % numero2;
			cout << "Residuo de la divison " << total << "\n""\n";
			break;


		default:
			break;
		}

		//reinicio de variables
		numero1 = 0;
		numero2 = 0;
		total = 0;

	} while (opcion != 's');
	cout << "\n""\n";


	/*1.23 Cajero*/
	string PIN;
	float montRet;
	float saldo = 3450;
	char selecion;

	//Solicitud y verificación de PIN
	do
	{
		cout << "Ingrese su PIN: ";
		cin >> PIN;

		if (PIN !="1234")
		{
			cout << "PIN incorrecto, intentelo nuevamente" << "\n""\n";
		}
	} while (PIN != "1234");

	//Despliegue de menu y operaciones de banco
	do
	{
		cout << "Selecciones una opcion" << "\n";
		cout << "a) Consulta de saldo" << "\n";
		cout << "b) Retiro de dinero" << "\n";
		cout << "c) Cancelar operacion" << "\n";
		cout << "Opcion: ";
		cin >> selecion;

		switch (selecion)
		{
		case 'a':
			cout << "\n""\n";
			cout << "Su saldo es de " << saldo << " pesos" << "\n""\n";
			break;

		case 'b':
			cout << "\n""\n";
			cout << "Ingrese la cantidad que desea retirar: ";
			cin >> montRet;
			if (montRet>saldo)
			{
				cout << "Saldo insuficiente" << "\n""\n";
			}
			else
			{
				total = saldo - montRet;
				cout << "Retiro exitoso" << "\n";
				cout << "Su saldo es de " << saldo << "\n""\n";
			}
			break;
			
		case 'c':
			cout << "\n""\n";
			cout << "Operación cancelada" << "\n""\n";
			break;
			
		default:
			cout << "Opcción no valida. Intentelo nuevamente" << "\n""\n";
			break;
		}
	} while (selecion !='c');

	/*1.24 temple run*/
	srand(time(NULL)); //Seed
	int castigo, premio;
	int vida = 12;
	cout << "Vida inicial 12" << "\n""\n";
	while (vida > 0)
	{
		//consumo
		vida--;
		cout << "consumo de 1 vida " << vida << "\n""\n";

		castigo = rand() % 2;
		if (castigo == 1);
		{
			vida = vida - 3;
			cout << "Castigo " << vida << "\n""\n";
		}
		premio = rand() % 2;
		if (premio == 1)
		{
			vida = vida + 3;
			cout << "Premio " << vida << "\n""\n";
		}
		cout << "Fin ciclo " << vida << "\n""\n";
		cout << "=================" << "\n""\n";
	}
}
