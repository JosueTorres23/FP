using System;

class Program
{
    static void Main()
    {
        /* Practica C */

        //1.1 cuadrado de un numero
        int cuadNum;
        Console.Write("Escriba un numero del que quiera obtener el cuadrado: ");
        cuadNum = int.Parse(Console.ReadLine());
        Console.WriteLine();

        Console.WriteLine("El cuadrado de " + cuadNum + " es " + cuadNum * cuadNum);
        Console.WriteLine();

        //1.2 Valor de X
        int val;
        Console.Write("Escriba el valor de x para x, 2x, 3x, 4x, 5x: ");
        val = int.Parse(Console.ReadLine());
        Console.WriteLine();
        Console.WriteLine(val + " -- " + 2 * val + " -- " + 3 * val + " -- " + 4 * val + " -- " + 5 * val);
        Console.WriteLine();

        //1.3 Conversión de peso
        int pesUs;
        const double lib = 2.2;
        Console.Write("Introduzca su peso para hacer la conversion a libras: ");
        pesUs = int.Parse(Console.ReadLine());
        Console.WriteLine();
        Console.WriteLine("Su peso en libras es de " + pesUs * lib);
        Console.WriteLine();

        //1.4 Promedio de tres números
        int n1, n2, n3;
        Console.WriteLine("Introduzca 3 numeros de los que quiera obtener el promedio");
        Console.WriteLine();
        Console.Write("Primer numero: ");
        n1 = int.Parse(Console.ReadLine());
        Console.Write("Segundo numero: ");
        n2 = int.Parse(Console.ReadLine());
        Console.Write("Tercer numero: ");
        n3 = int.Parse(Console.ReadLine());
        Console.WriteLine();

        int tot = n1 + n2 + n3;
        float prom = tot / 3.0f;

        Console.WriteLine("El total de los 3 numeros es de " + tot + ", y el promedio es de " + prom.ToString("F2"));
        Console.WriteLine();

        //1.5 Total de propina
        int totCuent;
        float propina;
        char respUs = ' ';
        float porProp;
        Console.Write("Ingrese el total de su cuenta, por favor: ");
        totCuent = int.Parse(Console.ReadLine());
        Console.WriteLine();
        Console.WriteLine("Desea agregar propina. S -- N");
        Console.Write("Respuesta: ");
        respUs = char.Parse(Console.ReadLine());
        Console.WriteLine();
        if (respUs == 'S' || respUs == 's')
        {
            Console.Write("Introduza el porcentaje que quiera dar como propina: ");
            porProp = float.Parse(Console.ReadLine());
            Console.WriteLine();

            float totProp = (totCuent * (porProp * 0.01f));
            Console.WriteLine("La propina seria de " + totProp);
            Console.WriteLine("El total de su cuenta seria de " + (totCuent + totProp));
            Console.WriteLine("Gracias por su compra");
        }
        if (respUs == 'N' || respUs == 'n')
        {
            Console.WriteLine("Gracias por su compra");
        }
        if (respUs != 'S' && respUs != 's' && respUs != 'N' && respUs != 'n')
        {
            Console.WriteLine("Respuesta invalida");
        }
        Console.WriteLine();

        //1.6 Comparación de un numero mayor o menor de 100
        int num;
        Console.Write("Introduzca un numero: ");
        num = int.Parse(Console.ReadLine());
        if (num > 100)
        {
            Console.WriteLine("El numero es mayor a 100");
        }
        else
        {
            Console.WriteLine("El numero es menor o igual a 100");
        }
        Console.WriteLine();

        //1.7 
        float num2;
        Console.Write("Introduzca un numero, puede ser negativo: ");
        num2 = float.Parse(Console.ReadLine());
        Console.WriteLine();

        if (num2 > 0)
        {
            Console.WriteLine("El numero es mayor a 0");
        }
        if (num2 < 0)
        {
            Console.WriteLine("El numero es menor a 0");
        }
        else
        {
            Console.WriteLine("Ingresaste el numero 0");
        }
        Console.WriteLine();

        //1.8 Validación de contraseña
        string Miemail;
        string Password_Ingresado;
        const string Password_Correcto = "12345";

        Console.Write("Por favor, ingrese su correo electronico: ");
        Miemail = Console.ReadLine();
        Console.WriteLine();

        Console.Write("Por favor, ingrese su contrasena: ");
        Password_Ingresado = Console.ReadLine();
        Console.WriteLine();

        if (Password_Ingresado == Password_Correcto)
        {
            Console.WriteLine("Felicidades, tu password es correcto.");
        }
        else
        {
            Console.WriteLine("Su password es incorrecto.");
        }
        Console.WriteLine();

        //1.9 Conversión de grados farenheit a celsius
        int gradFaren;
        Console.Write("Ingrese grados Farenheit para su conversion a Celsius: ");
        gradFaren = int.Parse(Console.ReadLine());
        Console.WriteLine();

        float convCels = (gradFaren - 32) * (5 / 9.0f);
        if (convCels == 32)
        {
            Console.WriteLine("0 grados");
        }
        else
        {
            Console.WriteLine("La cantidad que ingreso es igual a " + convCels);
        }
        Console.WriteLine();

        //1.10 ICM del usuario
        double peso;
        double estatura;
        double imc;

        Console.Write("Ingrese su peso en kilogramos: ");
        peso = double.Parse(Console.ReadLine());

        if (peso <= 0)
        {
            Console.WriteLine("El peso debe ser un número positivo.");
        }

        Console.Write("Ingrese su estatura en metros: ");
        estatura = double.Parse(Console.ReadLine());

        if (estatura <= 0)
        {
            Console.WriteLine("La estatura debe ser un número positivo.");
        }

        imc = peso / (estatura * estatura);

        Console.WriteLine("Su IMC es: " + imc.ToString("F2"));

        if (imc < 18.5)
        {
            Console.WriteLine("Abajo del peso normal");
        }
        else if (imc >= 18.5 && imc < 25)
        {
            Console.WriteLine("Peso Normal");
        }
        else if (imc >= 25 && imc < 30)
        {
            Console.WriteLine("Sobrepeso");
        }
        else if (imc >= 30 && imc < 35)
        {
            Console.WriteLine("Obeso Clase 1");
        }
        else if (imc >= 35 && imc < 40)
        {
            Console.WriteLine("Obeso Clase 2");
        }
        else // imc >= 40
        {
            Console.WriteLine("Obeso Clase 3");
        }
    }
}
