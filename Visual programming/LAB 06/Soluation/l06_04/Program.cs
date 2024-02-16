using System;
namespace l06_04
{
    class me
    {
        String myname;
        public me frist_name()
        {
            Console.Write("Abdullah");
            return this;
        }
        public me middle_name()
        {
            Console.Write(" Md Jahid");
            return this;
        }
        public me last_name()
        {
            Console.WriteLine(" Hassan.");
            return this;
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            me obj = new me();
            obj.frist_name(). middle_name() . last_name();
            Console.ReadLine();
        }
    }
}
