using System;

namespace l06_06
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
        public crow(String name, String color, bool can_fly)
        {
            this.name = name;
            this.color = color;
            this.can_fly = can_fly;
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
        public buck (String name, String color, bool can_fly)
        {
            this.name = name;
            this.color = color;
            this.can_fly = can_fly;
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
            birds crow = new crow("Crow", "Black", true);
            crow.show();
            birds buck = new buck("Buck", "White", true);
            buck.show();
        }
    }
}
