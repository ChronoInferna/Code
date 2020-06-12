using System;

namespace csBook1_4
{
    class Program
    {
        static void Main(string[] args)
        {
            // Variables that (help) contain the numbers
            int i;
            int[] count = new int[10];

            // Output variables
            int sum = 0;
            double average;

            // For loop that asks for numbers
            for (i = 0; i < 10; i++)
            {
                // Asks for number
                Console.WriteLine("Enter Number " + (i + 1) + ":");

                // Adds number from input
                count[i] = Convert.ToInt32(Console.ReadLine());
            }

            for (i = 0; i < 10; i++)
            {
                // Add numbers to sum
                sum += count[i];
            }

            // Display sum
            Console.WriteLine("The sum of the numbers is " + sum);

            // Set average, then display
            average = sum / 10.0;
            Console.WriteLine("The average of the numbers is " + average);
        }
    }
}
