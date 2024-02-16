using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace l06_01
{
    class Program
    {
        static int sum_digit (int n)
        {
            if (n == 0)
            {
                return 0;
            }
            else
            {
                int r = n % 10;
                return (r + sum_digit(n / 10));
            }
        }
        static void Main(string[] args)
        {
            int num = 0;
            int sum = 0;
            Console.Write("Enter the number: ");
            num = int.Parse(Console.ReadLine());
            sum = sum_digit(num);
            Console.WriteLine("Sum of digits: " + sum);
            Console.ReadLine();
        }
    }
}
