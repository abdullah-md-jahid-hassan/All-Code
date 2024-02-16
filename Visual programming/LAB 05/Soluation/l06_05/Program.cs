using System;

namespace l06_05
{
    public class birds
    {
        public String name, color;
        public bool can_fly;
        public birds()
        {
            name = "A Bird";
            color = "No Color";
            can_fly = false;
        }
        public virtual void show()
        {
            Console.WriteLine("This  is: " + name
                + "\nThere is: " + color
                + "\nIt Can Fly - " + can_fly);
        }
    }
    public class crow : birds
    {
        public crow()
        {
            name = "Crow";
            color = "Black";
            can_fly = true;
        }
        public override void show()
        {
            Console.WriteLine("The Name Of the Bird is: " + name
                + "\nIt's Color is: " + color
                + "\nIt Can Fly - " + can_fly);
        }
    }
    public class buck : birds
    {
        public buck()
        {
            name = "Buck";
            color = "White";
            can_fly = true;
        }
        public override void show()
        {
            Console.WriteLine("The Name Of the Bird is: " + name
                + "\nIt's Color is: " + color
                + "\nIt Can Fly - " + can_fly);
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            birds crow = new crow();
            crow.show();
            birds buck = new buck();
            buck.show();
        }
    }
}
