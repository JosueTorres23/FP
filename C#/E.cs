using System;

class Program
{
    static void Main()
    {
        // 1.21 Pregunta para salir del código
        string respuesta;
        do
        {
            Console.WriteLine("Quieres salir del ciclo? (SI/NO) ");
            respuesta = Console.ReadLine();

            if (respuesta == "SI")
            {
                Console.WriteLine();
                break;
            }
        } while (true);

        // 1.22 Menu de opciones de operaciones
        int numero1, numero2, total;
        char opcion;

        do
        {
            // Menu de salida
            Console.WriteLine("Seleccione una operacion:");
            Console.WriteLine(" (+) Suma");
            Console.WriteLine(" (-) Resta");
            Console.WriteLine(" (*) Multiplicacion");
            Console.WriteLine(" (/) Division");
            Console.WriteLine(" (%) Residuo");
            Console.WriteLine(" (s) Salir");
            Console.Write("Ingrese una opcion: ");
            opcion = char.Parse(Console.ReadLine());

            if (opcion != 's')  // Solo pedir los números si la opción no es salir
            {
                // Valores para operación
                Console.Write("Ingrese el primer numero: ");
                numero1 = int.Parse(Console.ReadLine());
                Console.Write("Ingrese el segundo numero: ");
                numero2 = int.Parse(Console.ReadLine());
            }

            // switch de posibles opciones
            switch (opcion)
            {
                case '+':
                    total = numero1 + numero2;
                    Console.WriteLine($"Resultado de la suma: {total}\n");
                    break;

                case '-':
                    total = numero1 - numero2;
                    Console.WriteLine($"Resultado de la resta: {total}\n");
                    break;

                case '*':
                    total = numero1 * numero2;
                    Console.WriteLine($"Resultado de la multiplicación: {total}\n");
                    break;

                case '/':
                    if (numero2 != 0)  // Validación de división por cero
                    {
                        total = numero1 / numero2;
                        Console.WriteLine($"Resultado de la división: {total}\n");
                    }
                    else
                    {
                        Console.WriteLine("Error: No se puede dividir por cero.\n");
                    }
                    break;

                case '%':
                    if (numero2 != 0)  // Validación de residuo con división por cero
                    {
                        total = numero1 % numero2;
                        Console.WriteLine($"Residuo de la división: {total}\n");
                    }
                    else
                    {
                        Console.WriteLine("Error: No se puede calcular el residuo con división por cero.\n");
                    }
                    break;

                case 's':
                    Console.WriteLine("Saliendo del programa...\n");
                    break;

                default:
                    Console.WriteLine("Opción no válida. Por favor ingrese una opción válida.\n");
                    break;
            }

        } while (opcion != 's');  // Termina el ciclo si se elige salir

    // 1.23 Cajero
    string PIN;
        float montRet;
        float saldo = 3450;
        char selecion;

        // Solicitud y verificación de PIN
        do
        {
            Console.Write("Ingrese su PIN: ");
            PIN = Console.ReadLine();

            if (PIN != "1234")
            {
                Console.WriteLine("PIN incorrecto, intentelo nuevamente");
                Console.WriteLine();
            }
        } while (PIN != "1234");

        // Despliegue de menu y operaciones de banco
        do
        {
            Console.WriteLine("Seleccione una opcion");
            Console.WriteLine("a) Consulta de saldo");
            Console.WriteLine("b) Retiro de dinero");
            Console.WriteLine("c) Cancelar operacion");
            Console.Write("Opcion: ");
            selecion = char.Parse(Console.ReadLine());

            switch (selecion)
            {
                case 'a':
                    Console.WriteLine();
                    Console.WriteLine($"Su saldo es de {saldo} pesos");
                    break;

                case 'b':
                    Console.WriteLine();
                    Console.Write("Ingrese la cantidad que desea retirar: ");
                    montRet = float.Parse(Console.ReadLine());
                    if (montRet > saldo)
                    {
                        Console.WriteLine("Saldo insuficiente");
                        Console.WriteLine();
                    }
                    else
                    {
                        saldo -= montRet;
                        Console.WriteLine("Retiro exitoso");
                        Console.WriteLine($"Su saldo es de {saldo}");
                        Console.WriteLine();
                    }
                    break;

                case 'c':
                    Console.WriteLine();
                    Console.WriteLine("Operación cancelada");
                    Console.WriteLine();
                    break;

                default:
                    Console.WriteLine("Opción no válida. Intentelo nuevamente");
                    Console.WriteLine();
                    break;
            }
        } while (selecion != 'c');

        // 1.24 temple run
        Random rand = new Random();
        int castigo, premio;
        int vida = 12;
        Console.WriteLine("Vida inicial 12");
        Console.WriteLine();

        while (vida > 0)
        {
            // consumo
            vida--;
            Console.WriteLine($"Consumo de 1 vida {vida}");
            Console.WriteLine();

            castigo = rand.Next(2);
            if (castigo == 1)
            {
                vida -= 3;
                Console.WriteLine($"Castigo {vida}");
                Console.WriteLine();
            }

            premio = rand.Next(2);
            if (premio == 1)
            {
                vida += 3;
                Console.WriteLine($"Premio {vida}");
                Console.WriteLine();
            }

            Console.WriteLine($"Fin ciclo {vida}");
            Console.WriteLine("=================");
            Console.WriteLine();
        }
    }
}
