using System;

namespace csBook1_4
{
    class Program
    {
        static void Main(string[] args)
        {
            // Output variables
            double sum;
            double avg;

            double test;

            // Asks for input
            Console.WriteLine("Please input 10 numbers.");

            // Loop that asks you for input then adds the input to the output variables
            for (int i = 10; i > 0; i--)
            {
                input = Convert.ToDouble(Console.ReadLine());
            }

            // Sets avg to sum, then divides by 10 to set to average
            avg = sum / 10;

            // Display
            Console.WriteLine("The sum of the numbers is: " + sum);
            Console.WriteLine("The average of the numbers is: " + avg);
        }
    }
}
