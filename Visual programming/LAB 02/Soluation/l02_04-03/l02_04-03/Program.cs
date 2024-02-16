using System;

namespace l02_04_03
{
    class Program
    {
        static void Main(string[] args)
        {
            String str1 = "I'm Thinking.";
            String str2;
            str2 = str1.PadRight(20, '*');
            Console.WriteLine( "String after right padd ing :(" + str2 + ") ") ;
            Console.ReadLine();
        }
    }
}
