using System;

class Program
{
    static void Main()
    {
        // 1. Contar de 9 a 0 de manera regresiva
        Console.WriteLine("Contar de 9 a 0 de manera regresiva");
        for (int i = 9; i >= 0; i--)
        {
            Console.Write(i + " ");
        }
        Console.WriteLine("\n");

        // 2. Contar de 1 a 99
        Console.WriteLine("Contar de 1 a 99");
        for (int i = 1; i <= 99; i++)
        {
            Console.Write(i + " ");
        }
        Console.WriteLine("\n");

        // 3. Contar los números pares de 1 a 100
        Console.WriteLine("Contar los números pares de 1 a 100");
        for (int i = 1; i <= 100; i++)
        {
            if (i % 2 == 0)
            {
                Console.Write(i + " ");
            }
        }
        Console.WriteLine("\n");

        // 4. Contar secuencialmente entre un rango mínimo y máximo
        int min, max;
        Console.WriteLine("Introduce un rango mínimo y máximo para contar secuencialmente de uno en uno");
        Console.Write("Introduce el rango mínimo: ");
        min = int.Parse(Console.ReadLine());
        Console.Write("Introduce el rango máximo: ");
        max = int.Parse(Console.ReadLine());
        for (int i = min; i <= max; i++)
        {
            Console.Write(i + " ");
        }
        Console.WriteLine("\n");

        // 5. Contar regresivamente entre un rango máximo y mínimo
        Console.WriteLine("Introduce un rango máximo y mínimo para contar regresivamente de uno en uno");
        Console.Write("Introduce el rango mínimo: ");
        min = int.Parse(Console.ReadLine());
        Console.Write("Introduce el rango máximo: ");
        max = int.Parse(Console.ReadLine());
        for (int i = max; i >= min; i--)
        {
            Console.Write(i + " ");
        }
        Console.WriteLine("\n");
    }
}
