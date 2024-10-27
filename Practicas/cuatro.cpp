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

    if (A==B && A==C)
    {
        cout << "Todos los numeros ingresados son iguales" << "\n""\n";
    }
    
	if (A>B && A>C) 
    {
        cout << "El numero A es el mas grande " << A << "\n""\n";
	}
	if (B>A && B>C) 
    {
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

    if (a==b && a==c)
    {
	cout << "Todos los numeros ingresados son iguales" << "\n""\n";
    }
    else 
    {

		if (a>b && a>c) 
        {
			cout << "El valor maximo es a " << "\n\n";
		}		
        else if (b>a && b>c) 
        {
			cout << "El valor maximo es b " << "\n\n";
		}
			else {
			cout << "El valor maximo es c " << "\n\n";
		}

		if (a < b && a < c) 
        {
			cout << "El valor minimo es a " << "\n\n";
		}		
        else if (b < a && b < c) 
        {
		    cout << "El valor minimo es b " << "\n\n";
		}				
        else 
        {
			cout << "El valor minimo es c " << "\n\n";
		}
    }

	//1.18 Ingresar la hora
		int hh, mm, ss;
	cout << "Ingrese la hora de este momento, cada parte sera por separando y posteriormente se le sumara 1 segundo " << "\n";
	cout << "Horas: ";
	cin >> hh;
	cout << "\n";
	cout << "Minutos: ";
	cin >> mm;
	cout << "\n";
	cout << "Segundos: ";
	cin >> ss;
	cout << "\n";

	if (hh>24 || mm>60 || ss>60) 
	{
		cout << "El formato de horas no admite el valor ingresado, revise los datos ingresados" << "\n""\n";
	}
	else
    {
        //suma de 1 segundo
        ss= ss+1;

        //condicionamiento para mantener formato de hora
        if (ss>=60)
        {
            ss=0;
            mm= mm+1;

            if (mm>=60)
            {
                mm=0;
                hh=hh+1;

                if (hh>=24)
                {
                    hh=0;
                }  
            } 
        }
        

    //Agregado de 0 si es necesario a la salida
    cout << "La hora es: ";
    
    if (hh < 10) {
        cout << "0";
    }
    cout << hh << ":";

    if (mm < 10) {
        cout << "0";
    }
    cout << mm << ":";

    if (ss < 10) {
        cout << "0";
    }
    cout << ss << endl;
    }

    //1.19 Determinar el precio del boleto de un avión
    float distVuel, diaEst, costVuel, costDescuen;
    const float descuento=0.7;

    cout << "Ingrese la distancia en Km del viaje: ";
    cin >> distVuel;
    cout << "\n""\n";

    cout << "Ingrese en cuantos dias tomara el vuelo de regreso: ";
    cin >> diaEst;
    cout << "\n""\n";

    costVuel= 2.5*distVuel;
    
    if (diaEst>=7 && distVuel>=800)
    {
        costDescuen= costVuel*descuento;
        cout << "El precio de su boleto seria de: "<< fixed << setprecision(2)<<costDescuen<<"\n""\n";
    }
    else
    {
        cout << "El precio de su boleto seria de: "<< fixed << setprecision(2)<<costVuel<<"\n""\n";
    }

    //1.20 Situaciones varias
    /* Situación a*/
    float angulo;
    cout << "Ingrese el angulo para comprobar si es recto: ";
    cin >> angulo;
    cout << "\n""\n";

    if (angulo==90)
    {
        cout << "El angulo, es un angulo recto"<<"\n""\n";
    }
    else
    {
        cout << "El angulo, no es un angulo recto"<<"\n""\n";
    }

    /* Sitacuion b*/
    float tempAgua;
    cout << "Ingrese la temperatura a la que se encuentrael agua en este momento: ";
    cin >> tempAgua;

    if (tempAgua>100)
    {
        cout << "Por encima del punto de ebullicion del agua"<<"\n""\n";
    }
    else
    {
        cout << "Por debajo del punto de ebullicion del agua"<<"\n""\n";
    }

    /* Situacion c*/
    float num, numPos, numNeg;

    cout << "Introduzca un numero: ";
    cin >> num;
    cout << "\n""\n";

    if (num>0)
    {
        numPos += num;
    }
    if (num<0)
    {
        numNeg += num;
    }

    cout << "Total de numeros positivos " <<fixed << setprecision(2)<<numPos<<"\n""\n";
    cout << "Total de numeros negativos " <<fixed << setprecision(2)<<numNeg<<"\n""\n";

    /* Situacion d*/ 
    float x,y,z;
    cout << "Introduzca los valores para X, Y, Z"<<"\n""\n";
    cout <<"X: ";
    cin >> x;
    cout<< "\n""\n";
    cout <<"Y: ";
    cin >> y;
    cout<< "\n""\n";
    cout <<"Z: ";
    cin >> z;
    cout<< "\n""\n";

    if ( x>y && z>y)
    {
       cout <<"X"<<"\n""\n";
    }

    /* Situacion e*/
    int dist, tiemp;
    cout <<"Introduzca la distancia: ";
    cin >> dist;
    cout<< "\n""\n";

    if (dist >20 && dist >35)
    {
        cout << "Introduzca el tiempo: ";
        cin >> tiemp;
        cout<< "\n""\n";
    }
    else
    {
        cout << "La distancia no está en el rango especificado"<<"\n""\n";
    }

    return 0;
}
