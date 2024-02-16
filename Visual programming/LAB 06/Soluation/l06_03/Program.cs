using System;
namespace l06_03
{
    class me
    {
        String myname;
        public me(String myname)
        {
            this.myname = myname;
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
            me obj = new me("Abdullah Md Jahid Hassan.");
            obj.name();
            Console.ReadLine();
        }
    }
}
