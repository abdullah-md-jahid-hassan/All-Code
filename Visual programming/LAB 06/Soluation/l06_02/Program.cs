using System;

namespace l06_02
{
    class me
    {
        String myname;
        public me (String a)
        {
            myname = a;
        }
        public void name()
        {
            Console.WriteLine(myname);
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            me obj = new me ("Abdullah Md Jahid Hassan.");
            obj.name();
            Console.ReadLine();
        }
    }
}
