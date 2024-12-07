using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hola mundo");
        }
    }
}


using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Mi nombre es: ");
            Console.WriteLine("Kevin");
            Console.WriteLine  ("Ing. electrónica");

            int edad;
            Console.Write("Dame tu edad ");
            edad = int.Parse(Console.ReadLine());
            Console.WriteLine();
            Console.WriteLine("Tienes " + edad + " años");
            Console.WriteLine();

            string nombre;
            Console.Write("Dame tu nombre: ");
            nombre = Console.ReadLine();
            Console.WriteLine("Tu nombre es: "+ nombre);

            double estatura;
            Console.Write("Dame tu estatura: ");
            estatura = double.Parse(Console.ReadLine());
            Console.WriteLine("Tu estatura es: "+  estatura);

            double peso;
            Console.Write("Cuál es tu peso: ");
            peso = double.Parse(Console.ReadLine());

            double mc;
            mc = peso/Math.Pow(estatura,2);
            Console.WriteLine("Masa corporal: " + mc);

            if(mc<18.5)
            {
                Console.WriteLine("Peso bajo");
            }

            for (int i=0; i<=9;i++)
            {
                Console.Write(i + " , ");
            }
            int[] numeros = new int[10] { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; //Construcción formal el arreglo
            Console.WriteLine();

            for (int i = 0; i <= 9; i++)
            {
                Console.Write(numeros[i] + " , ");
            }
            Console.WriteLine();

            string [] trimestre = { "Ene", "Feb", "Mar" };

            foreach (string elemento in trimestre)
            {
                Console.WriteLine(elemento);
            }
            

            int[,] sudoku = new int[9, 9];
        }
}

