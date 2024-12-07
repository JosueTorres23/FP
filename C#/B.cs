using System;

class Program
{
    static void Main()
    {
        /* 1.1 Ejecución de operaciones */
        //Ejercicio 1.
        Console.WriteLine(3 + 5 * 2 / 2 - 1);
        Console.WriteLine();

        //Ejercicio 2.
        Console.WriteLine(3 + 10 / 2 - 1);
        Console.WriteLine();

        //Ejercicio 3.
        Console.WriteLine(3 + 5 - 1);
        Console.WriteLine();

        //Ejercicio 4.
        Console.WriteLine(8 - 1);
        Console.WriteLine();

        //Ejercicio 5.
        Console.WriteLine(8 - 1);
        Console.WriteLine();

        //Ejercicio 6.
        Console.WriteLine(1 / 3 * 3);
        Console.WriteLine();

        /* 1.2 El cuadrado de número */
        int cuadNum;
        Console.Write("Escriba un numero del que quiera obtener el cuadrado: ");
        cuadNum = int.Parse(Console.ReadLine());
        Console.WriteLine();

        Console.WriteLine("El cuadrado del numero es " + cuadNum * cuadNum);
        Console.WriteLine();

        /* 1.3 Conversión de yardas a metros */
        const double yardas = 0.9144;
        double numYard;
        Console.Write("Introduzca el numero de yardas que quiera convertir a metros: ");
        numYard = double.Parse(Console.ReadLine());
        Console.WriteLine();
        Console.WriteLine(numYard + " Es igual a " + (numYard * yardas).ToString("F4"));
        Console.WriteLine();

        /* 1.4 Depreciación del valor de un auto */
        const double valAut = 200000; // Valor del auto
        const double depAut = 0.8; // Porcentaje de depreciación
        int cantTiemp = 5; // Tiempo que va a transcurrir

        double valDep = valAut * depAut; // Cálculo de la depreciación total
        double depAnual = valDep / cantTiemp; // Cálculo de la depreciación anual

        Console.WriteLine(depAnual.ToString("F4"));
        Console.WriteLine((depAnual * 2).ToString("F4"));
        Console.WriteLine((depAnual * 3).ToString("F4"));
        Console.WriteLine((depAnual * 4).ToString("F4"));
        Console.WriteLine((depAnual * 5).ToString("F4"));
        Console.WriteLine();

        /* 1.5 Calculo de deducción de impuestos */
        const double salMens = 25000;
        int impFij = 900;
        const double impPor = 0.015;
        double salImpuno = salMens - impFij;
        double salImpdos = salImpuno * impPor;

        Console.WriteLine("El sueldo sujeto a impuesto: " + salImpuno.ToString("F2"));
        Console.WriteLine("Impuesto variable de acuerdo al sueldo: " + salImpdos.ToString("F2"));
        Console.WriteLine("El impuesto total es de: " + (salImpdos + impFij).ToString("F2"));
        Console.WriteLine("El sueldo neto es de: " + (salMens - (salImpdos + impFij)).ToString("F2"));

        /* 1.6 Resultados de operaciones declaradas en variables */
        int opUno = 3 * 4;
        int opDos = 12 / 3;
        int opTres = 12 % 3;
        int opCuat = 12 % 7;
        double opCinc = 3 + 3.0;
        double opSeis = 10 / 100.0;
        double opSiet = Math.Pow(3, 2);

        Console.WriteLine("Resultado operacion 1: " + opUno);
        Console.WriteLine("Resultado operacion 2: " + opDos);
        Console.WriteLine("Resultado operacion 3: " + opTres);
        Console.WriteLine("Resultado operacion 4: " + opCuat);
        Console.WriteLine("Resultado operacion 5: " + opCinc);
        Console.WriteLine("Resultado operacion 6: " + opSeis.ToString("F2"));
        Console.WriteLine("Resultado operacion 7: " + opSiet);
        Console.WriteLine();

        /* 1.7 Comparación de resultados*/
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
