using System;
namespace l07_b03
{
    interface Iuniversity { void uname();}
    interface Icountry { void cname(); }
    public class me : Iuniversity, Icountry
    {
        public void cname()
        {
            Console.WriteLine("Country name BANGLADASH");
        }
        public void uname()
        {
            Console.WriteLine("University name IUBAT");
        }
        public me() 
        {
            cname();
            uname();
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
