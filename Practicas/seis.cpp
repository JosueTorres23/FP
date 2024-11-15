#include <iostream>
#include <string>
using namespace std;
int main() {
	//Arreglos de una dimensión
	/*Ejercicio G - 1*/
	cout << "Ejercicio 1 - G" << "\n""\n";
	int i=0;
	string nombreMes[12]{ "Ene","Feb","Mar","Abr","May","Jun","Jul","Ago","Sep","Oct","Nov","Dic" };

	for ( i = 0; i < 12; i++)
	{
		cout << nombreMes[i] << "\n""\n";
	}

	/*Ejercicio G - 2*/
	cout << "Ejercicio 2 - G" << "\n""\n";
	int j = 0;
	string nombrePlaneta[12]{ "Mercurio","Venus","Tierra","Marte","Jupiter","Saturno","Urano","Neptuno"};

	for (j = 0; j < 12; j++)
	{
		cout << nombrePlaneta[j] << "\n""\n";
	}


	//Arreglos de dos dimensiones
	int matriz1[2][2]{ {1,2},{3,4} };
	for (int k=0; k <= 1; k++) 
	{
		for (int l=0; l<=1; l++)
		{
			cout << matriz1[k][l] << " , ";
		}
	}
	cout << "\n""\n";
}
