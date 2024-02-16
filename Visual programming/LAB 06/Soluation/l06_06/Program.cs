using System;

namespace l06_06
{
    class me
    {
        public void name(String a, int b = 22, String u = "Collage")
        {
            Console.WriteLine(a + "\nI'm " + b + " Years old.");
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            me obj = new me();
            obj.name("Abdullah Md Jahid Hassan.", b:23, "IUBAT");
            Console.ReadLine();
        }
    }
}
