#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	// Enteros
	int a = 10;
	int b = 20;
	int c;
	/* 
	izquierda = variables
		"a"	= constantes "10"
		"d"	= variables "a"
			= expresion "a+b"
	*/

	// Flotantes
	float x = 15.5;
	float y = 5.2;
		float z;

	// adición
	c = a + b;
	z = x + y;


	cout << "Operación adición de enteros: "
		<< c << endl;

	cout << "Operación adición de decimales: "
		<< z << endl;


	//1. Adición
	int Ad;
	float ad;
	Ad = a + a; // 20
	ad = x + y; // 20.8

	cout << "Operación adición: "
		<< Ad << endl;
	cout << "Operación adición: "
		<< ad << endl;

	//2. Substracción
	int Sb;
	float sb;
	Sb = b - a; //10
	sb = x - y; //10.2
	cout << "Operación substracción: "
		<< Sb << endl;
	cout << "Operación substracción: "
		<< sb << endl;

	//3. Multiplicación
	int Mt;
	float mt;
	Mt = a * a;
	mt = x * y;
	cout << "Operación Multiplicación: "
		<< Mt << endl;
	cout << "Operación Multiplicación: "
		<< mt << endl;

	//4. División
	int Dv;
	float dv;
	Dv = b / a;
	dv = x / y;
	cout << "Operación División: "
		<< Dv << endl;
	cout << "Operación División: "
		<< dv << endl;

	//5. Modulos (Residuo de la división)
	Dv = b % a;

	//6. Operaciones mixtas
	z = a + x;
	cout <<  z<< endl;
	z = b - y;
	z = a * y;
	z = b / x;
	z = (a + b) * x / y;

	//7. Más ejemplos con flotantes
	z = x + 10.3;
	z = y * 2.5;
	z = x / 2.0;
	z = y - 3.2;

	//8. Combinación de números enteros y flotantes
	z = a + x - b / 2.0 + y * 1.5;

	//9. Combinaciones más complejas
	z = (a + x) * (b - y) / (a * y);

	//10. Operaciones aritmeticas de ti
	double d = 7.4;
	z = a + d;
	z = b - d;
	z = d * y;
	z = d / x;

	//11. Números negativos
	int negInt = -25;
	float negFloat = -12.5;
	c = a + negInt;
	c = b + negFloat;
	z = negFloat - y;
	z = negInt * b;

	cout << fixed;
	cout << setprecision(5);
	double W = ((1.0 / 3) * 3);
	cout << W << endl; 
	//no egresa el resultado porque toma los valores como enteros
	
	//12. Operaciones unitarias
	a++;
	cout << "Suma unitaria: " << a << endl;
	b--;
	cout << "Resta unitaria "<< b << endl;
	x += 2.5; // Operaciones con un solo operando
	cout << x<< endl;
	y -= 1.2;
	cout << y << endl;

	return 0;
}
