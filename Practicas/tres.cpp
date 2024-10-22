#include <iostream>
#include <iomanip>
using namespace std;
int main() {

	/* Practica 3 */

		//1.1 cuadrado de un numero
	int cuadNum;
	cout << "Escriba un numero del que quiera obtener el cuadrado ";
	cin >> cuadNum;
	cout << endl;

	cout << "El cuadrado de " << cuadNum << " es " << cuadNum * cuadNum << endl;
	cout << endl;

	//1.2 Valor de X
	int val;
	cout << "Escriba el valor de x para x, 2x, 3x, 4x, 5x: ";
	cin >> val;
	cout << endl;
	cout << val << " -- " << 2 * val << " -- " << 3 * val << " -- " << 4 * val << " -- " << 5 * val << endl;
	cout << endl;

	//1.3 Conversión de peso
	int pesUs;
	const double lib = 2.2;
	cout << "Introduzca su peso para hacer la conversión a libras: ";
	cin >> pesUs;
	cout << endl;
	cout << "Su peso en libras es de "<< pesUs*lib;
	cout << endl;

	//1.4 Promedio de tres números
	int n1, n2, n3;
	int tot = n1 + n2 + n3;
	int prom;

}
