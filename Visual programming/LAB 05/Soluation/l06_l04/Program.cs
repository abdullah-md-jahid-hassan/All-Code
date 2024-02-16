using System;

namespace l06_l04
{
    public class birds
    {
        public String name, color;
        public bool can_fly;
        public birds()
        {
            name = "A Bird";
            color = "Color";
            can_fly = false;
        }
    }
    public class crow: birds
    {
        public crow()
        {
            name = "Crow";
            color = "Black";
            can_fly = true;
        }
        public void show()
        {
            Console.WriteLine("The Name Of the Bird is: "+name
                +"\nIt's Color is: "+color
                +"\nIt Can Fly - "+can_fly);
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            crow crow = new crow();
            crow.show();
        }
    }
}
