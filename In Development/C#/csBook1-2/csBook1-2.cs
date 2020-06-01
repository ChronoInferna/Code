using System;
using NCalc;

namespace csBook1_2
{
    class Program
    {
        static void Main(string[] args)
        {
            // The first expression
            int one = -1 + 4 * 6;
            Console.WriteLine(one);

            // The second expression
            int two = (35 + 5) % 7;
            Console.WriteLine(two);

            // The third expression
            int three = 14 + -4 * 6 / 11;
            Console.WriteLine(three);

            // The fourth expression
            int four = 2 + 15 / 6 * 1 - 7 % 2;
            Console.WriteLine(four);
        }
    }
}
