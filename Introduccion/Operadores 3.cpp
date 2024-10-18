#include <iostream>
using namespace std;
int main() {
	/*Operadores lógicos*/

	cout <<boolalpha;

	bool p = true, q = false; //La coma nos ayuda a separar las dos variable y así poder declarar más de una a la vez

	cout << "p = true, q = false" << endl;

	//1. logico AND
	cout << "(p and q): " << (p and q) << endl;

	//2. logico OR
	cout << "(p or q): " << (p or q) << endl;

	//3. logito NOT
	cout << "(!p): " << (not (p)) << endl;

	//4. Combinacion AND y NOT
	cout << "(p and not(q)): " << (p and not(q)) << endl;

	//5. doble negacion
	cout << "not (not(q)): " << not(not(q)) << endl;

	//6. Opreaciones mixtas
	cout << "not(p and q) or (p or not(q)): " << (not(p and q) or (p or not(q))) << endl;

	//7. Asignacion de variables con operadores logicos
	bool a = p and q;
	cout << "Valor asignado a variable: " << a << endl;

	//8. Operaciones logicas con numeros enteros
	int x = 5, y = 0;
	cout << "(x and y): " << (x and y) << endl;

	//9. Operaciones logicas con numeros reales
	float m = 3.5, n = 0.0;
	cout << "(m or n): " << (m or n) << endl;

	//10. Expresiones complejas
	cout << "((x and not(y)) and (m or not(q))): " << ((x and not(y)) and (m or not(q))) << endl;

	//11. Uso de operadores lógicos con con comparación de cadenas de texto (string)
	string str1 = "Hola";
	string str2 = "Mundo";
	cout << (str1 == str2) << endl;
	cout << (str1 != str2) << endl;
	cout << ((str1 != "") and (str2!="")) << endl;
	

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
}
