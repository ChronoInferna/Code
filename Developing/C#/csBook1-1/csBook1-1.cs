using System;

namespace C_Excercise
{
    class Program
    {
        static void Main(string[] args)
        {
            // Input variables
            int first;
            int second;

            // Temporary variable so you can switch the two main variables
            int temp;

            // Input numbers
            first = Convert.ToInt32(Console.ReadLine());
            second = Convert.ToInt32(Console.ReadLine());

            // Switch numbers
            temp = first;
            first = second;
            second = temp;

            // Display
            Console.WriteLine(first);
            Console.WriteLine(second);
        }
    }
}
