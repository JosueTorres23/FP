#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	//1.16 Elegir el numero más grande
	int A, B, C;
	cout << "Introduzca tres numeros para comparar cual es el mayor" << endl;
	cout << "Numero A: ";
	cin >> A;
	cout << "\n""\n";
	cout << "Numero B: ";
	cin >> B;
	cout << "\n""\n";
	cout << "Numero C: ";
	cin >> C;
	cout << "\n""\n";

		if (A>B && A>C) {
		cout << "El numero A es el mas grande " << A << "\n""\n";
		}
		if (B>A && B>C) {
		cout << "El numero B es el mas grande " << B << "\n""\n";
		}
		if (C>A && C>B)
		{
		cout << "El numero C es el mas grande " << C << "\n""\n";
		}
	
	//1.17 Valor máximo y mínimo de tres números
	int a, b, c;
	cout << "Ingresa tres numeros diferentes " << "\n";
	cout << "Numero a: ";
	cin >> a;
	cout << "\n""\n";
	cout << "Numero b: ";
	cin >> b;
	cout << "\n""\n";
	cout << "Numero c: ";
	cin >> c;
	cout << "\n""\n";

		if (a>b && a>c) {
			cout << "El valor máximo es a " << "\n\n";
		}		else if (b>a && b>c) {
					cout << "El valor maximo es b " << "\n\n";
		}
			else {
				cout << "El valor maximo es c " << "\n\n";
		}

		if (a < b && a < c) {
			cout << "El valor minimo es a " << "\n\n";
		}		else if (b > a && b > c) {
					cout << "El valor minimo es b " << "\n\n";
		}				else {
							cout << "El valor minimo es c " << "\n\n";
		}

	//1.18 Ingresar la hora
		int hh, mm, ss, suma;
	cout << "Ingrese la hora de este momento, cada parte será por separando " << "\n";
	cout << "Horas: ";
	cin >> hh;
	cout << "\n";
	cout << "Minutos: ";
	cin >> mm;
	cout << "\n";
	cout << "Segundos: ";
	cin >> ss;
	cout << "\n";

		if (a>24 || b>60 || c>60) 
		{
			cout << "El formato de horas no admite el valor ingresado, revise los datos ingresados" << "\n""\n";
		}
		else 
		{
			
			if ((ss+1) == 60) 
			{
			
				if (mm==60)
				{
					suma = hh + 1;
					if (hh>24)
					{
						cout << "00:00:00" << "\n""\n";
					}
				}
			}
		}	

}
