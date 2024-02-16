using System;

namespace l04_01
{
    public class bank
    {
        static int cou; //Static Variable
        int bid;
        String add;
        public bank() // non-paramitarized costractor
        {
            Console.Write("Creatting Bank:\nEnter Bank ID: ");
            bid = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter Bank Address: ");
            add = Console.ReadLine();
            cou++;
        }
        static void mass() //Static method.
        {
            Console.WriteLine("I'm the mother Bank.");
        }
        public void getbon(ref double bal) //Call by refarance
        {
            bal += (bal * 0.05);
        }
    }
    public class myBank : bank  //Inheritance
    {
        public double balance;
        long accNo;
        public void wid(double am) //without reaturn type,paramitarized function, Call by Value
        { balance -= am; }
        public void depo(double am)
        { balance += am; }
        public double getbal() //with reaturn type, without paramitarized function
        { return balance; }
    }
    class yourBank : bank  //Hierarchical Inheritance
    {
        double balance;
        long accNo;
        yourBank()
        { Console.WriteLine("This is a useless Bank."); }
        void wid(double am)
        { balance -= am; }
        void depo(int am)
        { balance += am; }
        double getbal()
        { return balance; }
    }
    class person : myBank //Multilevel Inheritance
    {
        String name, add;
        long nid;
        public person(String na, String add, long nid)
        {
            name = na;
            this.add = add;
            this.nid = nid;

        }

    }
    class Program
    {

        static void Main(string[] args)
        {
            Console.WriteLine("Creat the account:\nEnter Person Name, Address And NID number:-");
            person p1 = new person((Console.ReadLine()), Console.ReadLine(), (Convert.ToInt64(Console.ReadLine())));
            int c=100;
            Console.WriteLine("Enter 1 for Chack balance.\nEnter 2 for Widrow.\nEnter 3 for deposit.\nEnter 4 for get bonous.\nEnter 0 for Exit.");
            while (c != 0)
            {
                Console.Write("\n\n\nEnter your choise:");
                c = Convert.ToInt32(Console.ReadLine());
                switch (c)
                {
                    case 0: break;
                    case 1: 
                        Console.WriteLine("Your balance is: "+p1.getbal());
                        break;
                    case 2:
                        Console.Write("Enter widwow amount:");
                        p1.wid(Convert.ToDouble(Console.ReadLine()));
                        break;
                    case 3:
                        Console.Write("Enter Deposit amount:");
                        p1.depo(Convert.ToDouble(Console.ReadLine()));
                        break;
                    case 4:
                        p1.getbon(ref p1.balance);
                        Console.WriteLine("You got the bonuse.");
                        break;
                    default: 
                        Console.WriteLine("Wrong Input");
                        break;
                }
            }
        }
    }
}
