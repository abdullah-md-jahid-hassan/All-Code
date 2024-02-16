using System;

namespace l02_03
{
    class Program
    {
        static void Main(string[] args)
        {
            string str1, str2;
            Console.Write("Enter a string: ");
            str1 = Console.ReadLine();
            Console.Write("Enter another string : ");
            str2 = Console.ReadLine();
            if (str1 == str2)
                Console.WriteLine("\n\"" + str1 + "\" and \"" + str2 + "\" are equal");
            else 
                Console.WriteLine("\n\""+str1+ "\" and \"" + str2 + "\" are not equal");
            
            Console .WriteLine("\nBy ignoring case:");
            if(str1.ToUpper()== str2.ToUpper())
                Console.WriteLine("\"" + str1 + "\" and \"" + str2 + "\" are equal");
            else
                Console.WriteLine("\"" + str1 + "\" and \"" + str2 + "\" are not equal");
            Console.ReadLine();
        }
    }
}
