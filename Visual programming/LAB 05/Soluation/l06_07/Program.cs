using System;

namespace l06_07
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
        public void show()
        {
            Console.WriteLine("The Name Of the Bird is: " + name
                + "\nIt's Color is: " + color
                + "\nIt Can Fly - " + can_fly);
        }
        public void show(String name, String color, bool can_fly)
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
            birds buck = new birds();
            buck.show();
            buck.show("Buck", "White", true);
        }
    }
}
