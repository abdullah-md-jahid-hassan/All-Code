using System;
namespace L07_b01
{
    interface person
    {
        void name();
    }
    public class my_name : person
    {
        public void name()
        {
            Console.WriteLine("This is name");
        }
        public my_name() { name(); }
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
