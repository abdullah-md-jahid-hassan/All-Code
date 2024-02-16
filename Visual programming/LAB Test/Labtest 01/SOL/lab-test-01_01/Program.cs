using System;

namespace lab_test_01_01
{
    class Program
    {
        static void Main(string[] args)
        {
            for(int i=95; i>80; i--)
            {
                if (i%2!=0) Console.Write(i+"\t");
            }
        }
    }
}
