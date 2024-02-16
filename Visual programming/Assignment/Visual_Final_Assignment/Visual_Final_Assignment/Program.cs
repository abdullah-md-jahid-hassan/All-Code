using System.Collections;

namespace Visual_Final_Assignment
{
    public class solu
    {
        public ArrayList list(int a)
        {
            ArrayList seq = new ArrayList();
            while (a!=1)
            {
                if (a%2==0)
                {
                    a/=2;
                }
                else
                {
                    a*=3;
                    a++;
                }
                Console.Write(" "+a);
            }
            return seq;
        }
        public ArrayList hisum (ArrayList l)
        {

            return hisum;
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            int a = Convert.ToInt32(Console.ReadLine());
            solu solu = new solu();
            Console.Write("The Sequence: " + a);
            ArrayList seq = solu.list(a);
        }
    }
}



















