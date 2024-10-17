#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	/* 1.1 Ejecución de operaciones */
	//Ejercicio 1.
	cout << (3 + 5 * 2 / 2 - 1) << endl;
	cout << endl;

	//Ejercicio 2.
	cout << (3 + 10 / 2 - 1) << endl;
	cout << endl;

	//Ejercicio 3.
	cout << (3 + 5 - 1) << endl;
	cout << endl;

	//Ejercicio 4.
	cout << (8 - 1) << endl;
	cout << endl;

	//Ejercicio 5.
	cout << (8 - 1) << endl;
	cout << endl;

	//Ejercicio 6.
	cout << (1 / 3 * 3) << endl;
	cout << endl;

	/* 1.2 El cuadrado de número */
	int cuadNum;
	cout << "Escriba un numero del que quiera obtener el cuadrado ";
	cin >> cuadNum;
	cout << endl;

	cout << "El cuadrado del numero es " << cuadNum * cuadNum << endl;
	cout << endl;

	/* 1.3 Conversión de yardas a metros */
	const double yardas = 0.9144;
	double numYard;
	cout << "Introduzca el numero de yardas que quiera convertir a metros ";
	cin >> numYard;
	cout << endl;
	cout << fixed << setprecision(4);
	cout << numYard << " Es igual a " << numYard * yardas << "m" << endl;
	cout << endl;

	/* 1.4 Depreciación del valor de un auto */
	const double valAut = 200000; // Valor del auto
	const double depAut = 0.8; // Porcentaje de depreciación
	int cantTiemp = 5; // Tiempo que va a transcurrir

	double valDep = valAut * depAut; // Cálculo de la depreciación total
	double depAnual = valDep / cantTiemp; // Cálculo de la depreciación anual

	cout << fixed << setprecision(4);
	cout << "A1: Deduccion por depreciacion = " << depAnual << " pesos" << endl;

	cout << "A2: Deduccion por depreciacion = " << depAnual * 2 << " pesos" << endl;

	cout << "A3: Deduccion por depreciacion = " << depAnual * 3 << " pesos" << endl;

	cout << "A4: Deduccion por depreciacion = " << depAnual * 4 << " pesos" << endl;

	cout << "A5: Deduccion por depreciacion = " << depAnual * 5 << " pesos" << endl;
	cout << endl;

	/* 1.5 Calculo de deducción de impuestos */
	const double salMens = 25000;
	int impFij = 900;
	const double impPor = 0.015;
	double salImpuno = salMens - impFij;
	double salImpdos = salImpuno * impPor;

	cout << fixed << setprecision(2);
	cout << "El sueldo sujeto a impuesto: " << salImpuno << endl;
	cout << "Impuesto variable de acuerdo al sueldo: " << salImpdos << endl;
	cout << "El impuesto total es de: " << (salImpdos + impFij) << endl; 
	cout << "El sueldo neto es de: " << (salMens - (salImpdos + impFij)) << endl; 

	/* 1.6 Resultados de operaciones declaradas en variables */
	int opUno = 3 * 4;
	int opDos = 12 / 3;
	int opTres = 12 % 3;
	int opCuat = 12 % 7;
	double opCinc (3 + 3.0);
	double opSeis = (10 / 100);
	double opSiet= pow(3, 2);

	cout << fixed << setprecision(2);
	cout << "Resultado operacion 1: " << opUno << endl;
	cout << "Resultado operacion 2: " << opDos << endl;
	cout << "Resultado operacion 3: " << opTres << endl;
	cout << "Resultado operacion 4: " << opCuat << endl;
	cout << "Resultado operacion 5: " << opCinc << endl;
	cout << "Resultado operacion 6: " << opSeis << endl;
	cout << "Resultado operacion 7: " << opSiet << endl;

	/* 1.7 Comparación de resultados*/
	int a = 10;
	int b = 20;
	cout << boolalpha;
	cout << "(a > b) " << (a > b) << endl;
	cout << "(a < b) " << (a < b) << endl;
	cout << "(a == b) " << (a == b) << endl;
	cout << "(a == b) " << (a == b) << endl;
	cout << "(a+b) > 100 " << ((a + b) > 100) << endl;
	cout << "(a-b) == 0 " << ((a - b) == 0) << endl;
	cout << "(a*b) > 500 " << ((a * b) > 500) << endl;
	cout << "(a*b) < 100 " << ((a * b) < 100) << endl;
	cout << "(a-b) < 0 " << ((a - b) < 0) << endl;
	cout << "a < 20 " << (a < 20) << endl;

	return 0;
}
