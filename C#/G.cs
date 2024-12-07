using System;

class Program
{
    static void Main()
    {
        // Arreglos de una dimensión
        /* Ejercicio G - 1 */
        Console.WriteLine("Ejercicio 1 - G\n");

        string[] nombreMes = { "Ene", "Feb", "Mar", "Abr", "May", "Jun", "Jul", "Ago", "Sep", "Oct", "Nov", "Dic" };

        for (int i = 0; i < 12; i++)
        {
            Console.WriteLine(nombreMes[i]);
        }
        Console.WriteLine("\n");

        /* Ejercicio G - 2 */
        Console.WriteLine("Ejercicio 2 - G\n");

        string[] nombrePlaneta = { "Mercurio", "Venus", "Tierra", "Marte", "Jupiter", "Saturno", "Urano", "Neptuno" };

        for (int j = 0; j < 8; j++) // Aquí cambiamos el tamaño del bucle para adaptarse a los 8 planetas
        {
            Console.WriteLine(nombrePlaneta[j]);
        }
    }
}
