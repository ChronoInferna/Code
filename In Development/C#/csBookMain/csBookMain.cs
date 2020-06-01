using System;

namespace C_Learn
{
    class Program
    {
        static void Main(string[] args)
        {
            // Bool to check if we continue
            bool done = false;

            // While loop to check the done variable
            while(done == false)
            {
                // Name variable
                string myName = GetName();

                // If name is blank, don't display, otherwise display
                if (myName.Length == 0)
                {
                    Console.WriteLine("You did not enter your name!");
                }
                else if (myName == "Exit")
                {
                    Console.WriteLine("Thanks and goodbye!");
                    done = true;
                }
                else
                {
                    // Print
                    Console.WriteLine("Hello World! My name is " + myName);
                    Console.WriteLine("Thank you for entering your name");
                }
            }
        }

        public static string GetName()
        {
            // Input variable
            string input;

            // Name input
            Console.WriteLine("Please Enter Your Name:");
            name = Console.ReadLine();

            return name;
        }
    }
}
