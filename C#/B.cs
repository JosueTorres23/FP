using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Pract_b_i
{
    internal class Program
    {
        static void Main()
        {
            /*Practica B*/

            // Ejercicio 1
            Console.WriteLine(3 + 5 * 2 / 2 - 2);
            Console.WriteLine();

            // Ejercicio 2
            Console.WriteLine(3 + 10 / 2 - 1);
            Console.WriteLine();

            // Ejercicio 3
            Console.WriteLine(3 + 5 - 1);
            Console.WriteLine();

            // Ejercicio 4
            Console.WriteLine(8 - 1);
            Console.WriteLine();

            // Ejercicio 5
            Console.WriteLine(1.0 / 3 * 3);
            Console.WriteLine();

            //1.2 Cuadrado de un número
            float numCuad;
            Console.Write("Escriba el número del que quiera obtener el cuadrado: ");
            numCuad = float.Parse(Console.ReadLine());
            Console.WriteLine();
            Console.WriteLine("El cuadrado del número es " + (numCuad * numCuad));
            Console.WriteLine();

            //1.3 Conversión de yardas a metros
            const double yardas = 0.9144;
            double numYard;
            Console.Write("Introduzca el número de yardas: ");
            numYard = double.Parse(Console.ReadLine());
            Console.WriteLine("Es igual a " + yardas * numYard + "m");
            Console.WriteLine();

            //1.4 depreciación auto
            const double valAut = 200000, depAut = 0.8;
            int cantTiemp = 5;
            double valDep = valAut * depAut;
            double depAnual = valDep / cantTiemp;

            Console.WriteLine("A1: Deduccion por depreciacion = " + depAnual + " pesos");
            Console.WriteLine("A2: Deduccion por depreciacion = " + depAnual * 2 + " pesos");
            Console.WriteLine("A3: Deduccion por depreciacion = " + depAnual * 3 + " pesos");
            Console.WriteLine("A4: Deduccion por depreciacion = " + depAnual * 4 + " pesos");
            Console.WriteLine("A5: Deduccion por depreciacion = " + depAnual * 5 + " pesos");
            Console.WriteLine();

            //1.5 Deducción de impuestos
            const double salMens = 25000;
            int impFij = 900;
            const double impPor = 0.015;
            double salImpuno = salMens - impFij;
            double salImpdos = salImpuno * impPor;

            Console.WriteLine("El sueldo sujeto a impuesto: " + salImpuno);
            Console.WriteLine("Impuesto variable de acuerdo al sueldo: " + salImpdos);
            Console.WriteLine("El impuesto total es de: " + (salImpdos + impFij));
            Console.WriteLine("El sueldo neto es de: " + (salMens - (salImpdos + impFij)));
            Console.WriteLine();

            // 1.6 Resultados de operaciones declaradas en variables
            int opUno = 3 * 4;
            int opDos = 12 / 3;
            int opTres = 12 % 3;
            int opCuat = 12 % 7;
            double opCinc = (3 + 3.0);
            double opSeis = 10 / 100;
            double opSiet = Math.Pow(3, 2);

            Console.WriteLine("Resultado operacion 1: " + opUno);
            Console.WriteLine("Resultado operacion 2: " + opDos);
            Console.WriteLine("Resultado operacion 3" + opTres);
            Console.WriteLine("Resultado operacion 4: " + opCuat);
            Console.WriteLine("Resultado operacion 5: " + opCinc);
            Console.WriteLine("Resultado operacion 6: " + opSeis);
            Console.WriteLine("Resultado operacion 7: " + opSiet);
            Console.WriteLine();

            ///* 1.7 Comparación de resultados*/
            int a = 10;
            int b = 20;

            Console.WriteLine("(a > b) " + (a > b));
            Console.WriteLine("(a < b) " + (a < b));
            Console.WriteLine("(a == b) " + (a == b));
            Console.WriteLine("(a == b) " + (a == b));
            Console.WriteLine("(a+b) > 100 " + ((a + b) > 100));
            Console.WriteLine("(a-b) == 0 " + ((a - b) == 0));
            Console.WriteLine("(a*b) > 500 " + ((a * b) > 500));
            Console.WriteLine("(a*b) < 100 " + ((a * b) < 100));
            Console.WriteLine("(a-b) < 0 " + ((a - b) < 0));
            Console.WriteLine("a < 20 " + (a < 20));
        }
    }
}
