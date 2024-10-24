#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {

	/* Practica 3 */

		//1.1 cuadrado de un numero
	int cuadNum;
	cout << "Escriba un numero del que quiera obtener el cuadrado ";
	cin >> cuadNum;
	cout << endl; //Para evitar el uso de endl constantemente, se puede reducir con un "\n", puede terminar linea y "\n\n" terminar linea y dejar un espacio en blanco

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
	cout << "Introduzca su peso para hacer la conversion a libras: ";
	cin >> pesUs;
	cout << endl;
	cout << "Su peso en libras es de " << pesUs * lib << endl;
	cout << endl;

	//1.4 Promedio de tres números
	int n1, n2, n3;
	cout << "Introduzca 3 numeros de los que quiera obtener el promedio" << endl;
	cout << endl;
	cout << "Primer numero ";
	cin >> n1;
	cout << "Segundo numero ";
	cin >> n2;
	cout << "Tercer numero ";
	cin >> n3;
	cout << endl;

	int tot = n1 + n2 + n3;
	float prom = tot / 3.0;

	cout << fixed << setprecision(2);
	cout << "El total de los 3 numeros es de " << tot << ", y el promedio es de " << prom << endl;
	cout << endl;

	//1.5 Total de propina
	int totCuent;
	float propina;
	char respUs = ' ';
	float porProp;
	cout << "Ingrese el total de su cuenta, por favor: ";
	cin >> totCuent;
	cout << endl;
	cout << "Desea agregar propina. S -- N" << endl;
	cout << "Respuesta ";
	cin >> respUs; //Si agregas un "cout << endl;" antes de cin, no funciona
	cout << endl;
		if (respUs == 'S' || respUs == 's')
		{
		cout << "Introduza el porcentaje que quiera dar como propina ";
		cin >> porProp;
		cout << endl;

		float totProp = (totCuent * (porProp * 0.01));
		cout << "La propina seria de " << totProp << endl;
		cout << "El total de su cuenta seria de " << totCuent + totProp << endl;
		cout << "Gracias por su compra" << endl;

		}
		if (respUs == 'N' || respUs == 'n')
		{
		cout << "Gracias por su compra" << endl;
		}
		if (respUs != 'S' && respUs != 's' && respUs != 'N' && respUs != 'n')
		{
		cout << "Respuesta invalida" << endl;
		}
	cout << endl;

	//1.6 Comparación de un numero mayor o menor de 100
	int num;
	cout << "Introduzca un numero ";
	cin >> num;
		if (num > 100)
		{
		cout << "El numero es mayor a 100" << endl;
		}
		else
		{
		cout << "El numero es menor o igual a 100" << endl;
		}
	cout << endl;

	//1.7 
	float num2;
	cout << "Introduzca un numero, puede ser negativo ";
	cin >> num2;
	cout << endl;

		if (num2 > 0)
		{
		cout << "El numero es mayor a 0" << endl;
		}
		if (num2 < 0)
		{
		cout << "El numero es menor a 0" << endl;
		}
		else
		{
		cout << "Ingresaste el numero 0" << endl;
		}
	cout << endl;

	//1.8 Validación de contraseña
	string Miemail;
	string Password_Ingresado;
	const string Password_Correcto = "12345";

	cout << "Por favor, ingrese su correo electronico: ";
	getline(cin, Miemail);
	cout << endl;

	cout << "Por favor, ingrese su contrasena: ";
	getline(cin, Password_Ingresado);
	cout << endl;

		if (Password_Ingresado == Password_Correcto) {
		cout << "Felicidades, tu password es correcto." << endl;
		}
		else {
		cout << "Su password es incorrecto." << endl;
		}
		cout << endl;

	//1.9  Conversión de grados farenheit a celsius
	int gradFaren;
	cout << "Ingrese grados Farenheit para su conversion a Celsius: ";
	cin >> gradFaren;
	cout << endl;

	float convCels = (gradFaren - 32) * (5 / 9);
		if (convCels == 32)
		{
		cout << "0 grados" << endl;
		}
		else
		{
			cout << "La cantidad que ingreso es igual a " << convCels << endl;
		}
		cout << endl;

	//1.10 ICM del usuario
		double peso;
		double estatura;
		double imc;

		cout << "Ingrese su peso en kilogramos: ";
		cin >> peso;

		if (peso <= 0) {
			cout << "El peso debe ser un número positivo." << endl;
		}

		cout << "Ingrese su estatura en metros: ";
		cin >> estatura;

		if (estatura <= 0) {
			cout << "La estatura debe ser un número positivo." << endl;
		}

		imc = peso / (estatura * estatura);

		cout << fixed << setprecision(2);
		cout << "Su IMC es: " << imc << endl;
		
		if (imc < 18.5) 
		{
			cout << "Abajo del peso normal" << endl;
		}
		else if (imc >= 18.5 && imc < 25) 
		{
			cout << "Peso Normal" << endl;
		}
		else if (imc >= 25 && imc < 30)
		{
			cout << "Sobrepeso" << endl;
		}
		else if (imc >= 30 && imc < 35)
		{
			cout << "Obeso Clase 1" << endl;
		}
		else if (imc >= 35 && imc < 40) 
		{
			cout << "Obeso Clase 2" << endl;
		}
		else { // imc >= 40
			cout << "Obeso Clase 3" << endl;
		}

	return 0;
}
