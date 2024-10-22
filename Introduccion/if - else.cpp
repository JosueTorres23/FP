#include <iostream>
using namespace std;
int main() {

	/* if else */
	//1. Encontrar si un número es impar
	int num = 0;
	cout << "Ingresa un número: ";
	cin >> num;
	if (num % 2 == 0)
	{
		cout << "Es par" << endl;
	}
	else
	{
		cout << "Es impar" << endl;
	}


	//2. Encontrar el mayor de dos números
	int n1, n2;
	cout << "n1: ";
	cin >> n1;
	cout << endl;
	cout << "n2: ";
	cin >> n2;
	cout << endl;

	if (n1 > n2)
	{
		cout << "n1 mayor" << endl;

	}
	else
	{
		cout << "n2 mayor" << endl;
	}
	cout << endl;

	//3. Solicitar edad de una persona y decir si es mayor de edad
	int edUs;
	cout << "Ingresa tu edad: ";
	cin >> edUs;
	cout << endl;
	if (edUs > 18)
	{
		cout << "Mayor de edad" << endl;
	}
	else
	{
		cout << "Menor de edad" << endl;
	}
	cout << endl;

	//4. Solicitar temperatura
	int temAmb;
	cout << "Cual es la temperatura ambiente: ";
	cin >> temAmb;
	cout << endl;
	if (temAmb<10)
	{
		cout << "Hace mucho frío" << endl;
	}
	if (temAmb >= 10 && temAmb < 17)
	{
		cout << "Hace frío" << endl;
	}
		else
		{
			cout << "El clima es templado" << endl;
		}
	cout << endl;


	//5. Pregunta de voto
	char votUs = ' ';
	cout << "Estas a favor de la paz?" << endl;
	cout << "Si = S, N = No" << endl;
	cin >> votUs;
	cout << endl;
	if (votUs == 'S' || votUs == 'N') //Aqui usamos la función or, puedes poner "or" o "||"
	{
		cout << "Voto valido" << endl;
	}
		else
		{
		cout << "Voto invalido" << endl;
		}
}
