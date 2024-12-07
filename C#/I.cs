using System;

class Program
{
    static void Main()
    {
        /* Practica I*/
        // Declaración de la matriz 9x9 para Sudoku, con 0 en las casillas vacías
        int[,] sudoku = new int[9, 9]
        {
            {0, 3, 0, 0, 0, 0, 0, 0, 0},
            {0, 2, 0, 9, 0, 6, 3, 0, 0},
            {0, 0, 0, 0, 7, 0, 8, 0, 0},
            {0, 0, 0, 3, 0, 0, 0, 0, 4},
            {5, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 6, 0, 0, 0, 0, 9, 0},
            {0, 0, 8, 0, 0, 0, 0, 0, 0},
            {4, 9, 0, 0, 0, 0, 0, 0, 5},
            {0, 0, 0, 4, 9, 0, 7, 8, 0}
        };

        // Imprimir la matriz Sudoku
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                Console.Write(sudoku[i, j] + " ");
            }
            Console.WriteLine();
        }
    }
}
