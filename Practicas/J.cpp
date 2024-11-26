#include <iostream>
#include <vector>
using namespace std;
int main() {
	/*Practica J*/

	//Ejercicio 1 
	vector <int> v;
	int n = -1;

	while (n != 0)
	{
		cout << "Dame un numero ";
		cin >> n;

		if (n == 0)
		{
			break;
		}
		v.push_back(n * 10);
	}
	for (int elemento : v)
	{
		cout << elemento << ", " << "\n""\n";
	}

	//Ejercicio 1
	vector <int> search;


	//Ejercicio 6
	vector <int> pares;
	vector <int> impares;
	int nums[10]{ 34, 23, 94, 53, 16, 27, 5, 25, 42, 82 };
	int par=0, impar=0;

	for (int i = 0; i <= 9; i++)
	{
		if (i % 2 == 0)
		{
			par++;
			pares.push_back(nums[i]);
		}
		else
		{
			impar++;
			impares.push_back(nums[i]);
		}
	}
	for (int elemento : pares)
	{
		cout << elemento << ", ";
	}
	cout << "\n""\n";
	for (int elemento : impares)
	{
		cout << elemento << ", ";
	}
	cout << "\n""\n";

	//Ejercicio 8
	int primero, segundo, tercero, temporal = 0;
	//arreglo
	int nums2[10]{ 34, 23, 94, 53, 16, 27, 5, 25, 42, 82 };

	cout << "Numeros a revisar 34, 23, 94, 53, 16, 27, 5, 25, 42, 82" << "\n""\n";
	//asiganos una posición del arreglo en las variables
	primero = nums2[0];
	segundo = nums2[1];
	tercero = nums2[2];

	cout << "Fase inicial: " << primero << ", " << segundo << ", " << tercero << "\n""\n";
	//Logica para ordenar 
	if (primero < segundo)
	{
		//hacemos un swap (quiere decir que lo vamos a cambiar)
		temporal = primero;
	}
	if (tercero < segundo)
	{
		temporal = primero;
		primero = tercero;
		tercero = temporal;
	}
	if (segundo < tercero)
	{
		temporal = segundo;
		segundo = tercero;
		tercero = temporal;
	}
	cout<< "Fase 1: " << primero << ", " << segundo << ", " << tercero <<"\n""\n";
	for (int i=3 ; i>=9 ; i++)
	{
		if (nums2[i] > primero) 
		{
			tercero = segundo;
			segundo = primero;
			primero = nums2[i];
		}
		else if (nums2[i]>segundo)
		{
			tercero = segundo;
			segundo = nums2[i];
		}
		else if (nums2[i] > tercero)
		{
			tercero = nums2[i];
		}
	}
	cout << "Fase 2: " << primero << ", " << segundo << ", " << tercero << endl;


	//Ejercicio 10
	int arreglo[10]{ srand(NULL) };

}
