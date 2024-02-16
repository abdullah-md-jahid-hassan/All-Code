using System;
namespace l07_b02
{
    interface person { void name(String a);}
    public class my_name : person
    {
        public void name(String a)
        { Console.WriteLine(a); }
        public my_name()
        {
            name("Pogram is HiZi-BiZi HiZi-BiZi");
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            my_name obj = new my_name();
            Console.ReadLine();
        }
    }
}
