using System;

namespace l02_4_1
{
    class Program
    {
        static void Main(string[] args)
        {
            String str1, str2;
            Console.Write("Enter string: ");
            str1 = Console.ReadLine();
            str2 = String.Copy(str1);
            Console.WriteLine("Value 0f String 1: " + str1 + "\nValue of String 2: " + str2);
            Console.ReadLine();
        }
    }
}
