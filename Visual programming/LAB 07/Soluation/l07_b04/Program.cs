using System;
namespace l07_b04
{
    public interface Iuniversity { void uname(); }
    public interface Icountry { void cname(); }
    public interface Ime : Iuniversity, Icountry
    {
        public void cname()
        {
            Console.WriteLine("Country name BANGLADASH");
        }
        public void uname()
        {
            Console.WriteLine("University name IUBAT");
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            me obj = new me();
            Console.ReadLine();
        }
    }
}
