using System;

namespace l02_04_02
{
    class Program
    {
        static void Main(string[] args)
        {
            String str1 = "   Abdullah Md Jahid Hassan.  ";
            String str2;
            str2 = str1.TrimStart();
            Console.WriteLine("Trimmed string is:(" + str2 + ")");
            Console.ReadLine();
        }
    }
}
