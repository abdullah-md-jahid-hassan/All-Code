using System;
namespace l07_b07
{
    class Program
    {
        static void Main(string[] args)
        {
            int n;
            Console.Write("Enter arry size: ");
            try
            {
                n = Convert.ToInt32(Console.ReadLine());
                int[] a = new int[n];
                Console.WriteLine("Enter the arry: ");
                for (int i=0; i<=n; i++) 
                { a[i] = Convert.ToInt32(Console.ReadLine()); }
            }
            catch (IndexOutOfRangeException y)
            {
                Console.Write(y.Message);
            }
            catch (Exception x)
            {
                Console.Write(x.Message);
            }
            Console.ReadLine();
        }
    }
}
