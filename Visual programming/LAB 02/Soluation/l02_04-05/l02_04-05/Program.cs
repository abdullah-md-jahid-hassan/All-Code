using System;

namespace l02_04_05
{
    class Program
    {
        static void Main(string[] args)
        {
            String str1; String str2;
            Console.Write("Enter String: ");
            str1 = Console.ReadLine();
            str2 = str1.Replace('a', 'r');
            Console.WriteLine("String after replace method:	" + str2);
            Console.ReadLine();
        }
    }
}
