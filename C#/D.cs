using System;

class Program
{
    static void Main()
    {
        /* Practica D */
        // 1.16 Elegir el numero más grande
        int A, B, C;
        Console.WriteLine("Introduzca tres numeros para comparar cual es el mayor");
        Console.Write("Numero A: ");
        A = int.Parse(Console.ReadLine());
        Console.WriteLine();
        Console.Write("Numero B: ");
        B = int.Parse(Console.ReadLine());
        Console.WriteLine();
        Console.Write("Numero C: ");
        C = int.Parse(Console.ReadLine());
        Console.WriteLine();

        if (A == B && A == C)
        {
            Console.WriteLine("Todos los numeros ingresados son iguales");
        }

        if (A > B && A > C)
        {
            Console.WriteLine("El numero A es el mas grande " + A);
        }
        if (B > A && B > C)
        {
            Console.WriteLine("El numero B es el mas grande " + B);
        }
        if (C > A && C > B)
        {
            Console.WriteLine("El numero C es el mas grande " + C);
        }

        // 1.17 Valor máximo y mínimo de tres números
        int a, b, c;
        Console.WriteLine("Ingresa tres numeros diferentes");
        Console.Write("Numero a: ");
        a = int.Parse(Console.ReadLine());
        Console.WriteLine();
        Console.Write("Numero b: ");
        b = int.Parse(Console.ReadLine());
        Console.WriteLine();
        Console.Write("Numero c: ");
        c = int.Parse(Console.ReadLine());
        Console.WriteLine();

        if (a == b && a == c)
        {
            Console.WriteLine("Todos los numeros ingresados son iguales");
        }
        else
        {
            if (a > b && a > c)
            {
                Console.WriteLine("El valor maximo es a");
            }
            else if (b > a && b > c)
            {
                Console.WriteLine("El valor maximo es b");
            }
            else
            {
                Console.WriteLine("El valor maximo es c");
            }

            if (a < b && a < c)
            {
                Console.WriteLine("El valor minimo es a");
            }
            else if (b < a && b < c)
            {
                Console.WriteLine("El valor minimo es b");
            }
            else
            {
                Console.WriteLine("El valor minimo es c");
            }
        }

        // 1.18 Ingresar la hora
        int hh, mm, ss;
        Console.WriteLine("Ingrese la hora de este momento, cada parte sera por separando y posteriormente se le sumara 1 segundo");
        Console.Write("Horas: ");
        hh = int.Parse(Console.ReadLine());
        Console.Write("Minutos: ");
        mm = int.Parse(Console.ReadLine());
        Console.Write("Segundos: ");
        ss = int.Parse(Console.ReadLine());
        Console.WriteLine();

        if (hh > 24 || mm > 60 || ss > 60)
        {
            Console.WriteLine("El formato de horas no admite el valor ingresado, revise los datos ingresados");
        }
        else
        {
            // Suma de 1 segundo
            ss = ss + 1;

            // Condicionamiento para mantener formato de hora
            if (ss >= 60)
            {
                ss = 0;
                mm = mm + 1;

                if (mm >= 60)
                {
                    mm = 0;
                    hh = hh + 1;

                    if (hh >= 24)
                    {
                        hh = 0;
                    }
                }
            }

            // Agregado de 0 si es necesario a la salida
            Console.Write("La hora es: ");
            if (hh < 10) Console.Write("0");
            Console.Write(hh + ":");

            if (mm < 10) Console.Write("0");
            Console.Write(mm + ":");

            if (ss < 10) Console.Write("0");
            Console.WriteLine(ss);
        }

        // 1.19 Determinar el precio del boleto de un avión
        float distVuel, diaEst, costVuel, costDescuen;
        const float descuento = 0.7f;

        Console.Write("Ingrese la distancia en Km del viaje: ");
        distVuel = float.Parse(Console.ReadLine());
        Console.WriteLine();

        Console.Write("Ingrese en cuantos dias tomara el vuelo de regreso: ");
        diaEst = float.Parse(Console.ReadLine());
        Console.WriteLine();

        costVuel = 2.5f * distVuel;

        if (diaEst >= 7 && distVuel >= 800)
        {
            costDescuen = costVuel * descuento;
            Console.WriteLine("El precio de su boleto seria de: " + costDescuen.ToString("F2"));
        }
        else
        {
            Console.WriteLine("El precio de su boleto seria de: " + costVuel.ToString("F2"));
        }

        // 1.20 Situaciones varias
        /* Situación a*/
        float angulo;
        Console.Write("Ingrese el angulo para comprobar si es recto: ");
        angulo = float.Parse(Console.ReadLine());
        Console.WriteLine();

        if (angulo == 90)
        {
            Console.WriteLine("El angulo, es un angulo recto");
        }
        else
        {
            Console.WriteLine("El angulo, no es un angulo recto");
        }

        /* Situacion b*/
        float tempAgua;
        Console.Write("Ingrese la temperatura a la que se encuentra el agua en este momento: ");
        tempAgua = float.Parse(Console.ReadLine());

        if (tempAgua > 100)
        {
            Console.WriteLine("Por encima del punto de ebullicion del agua");
        }
        else
        {
            Console.WriteLine("Por debajo del punto de ebullicion del agua");
        }

        /* Situacion c*/
        float num, numPos = 0, numNeg = 0;
        Console.Write("Introduzca un numero: ");
        num = float.Parse(Console.ReadLine());
        Console.WriteLine();

        if (num > 0)
        {
            numPos += num;
        }
        if (num < 0)
        {
            numNeg += num;
        }

        Console.WriteLine("Total de numeros positivos: " + numPos.ToString("F2"));
        Console.WriteLine("Total de numeros negativos: " + numNeg.ToString("F2"));

        /* Situacion d*/
        float x, y, z;
        Console.WriteLine("Introduzca los valores para X, Y, Z");
        Console.Write("X: ");
        x = float.Parse(Console.ReadLine());
        Console.WriteLine();
        Console.Write("Y: ");
        y = float.Parse(Console.ReadLine());
        Console.WriteLine();
        Console.Write("Z: ");
        z = float.Parse(Console.ReadLine());
        Console.WriteLine();

        if (x > y && z > y)
        {
            Console.WriteLine("X");
        }

        /* Situacion e*/
        int dist, tiemp;
        Console.Write("Introduzca la distancia: ");
        dist = int.Parse(Console.ReadLine());
        Console.WriteLine();

        if (dist > 20 && dist > 35)
        {
            Console.Write("Introduzca el tiempo: ");
            tiemp = int.Parse(Console.ReadLine());
            Console.WriteLine();
        }
        else
        {
            Console.WriteLine("La distancia no está en el rango especificado");
        }
    }
}
