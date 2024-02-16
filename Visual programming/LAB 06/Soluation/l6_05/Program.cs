using System;

namespace l6_05
{
    class me
    {
        public void name(String a, int b= 22)
        {
            Console.WriteLine(a+"\nI'm "+b+" Years old.");
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            me obj = new me();
            obj.name("Abdullah Md Jahid Hassan.");
            Console.ReadLine();
        }
    }
}
