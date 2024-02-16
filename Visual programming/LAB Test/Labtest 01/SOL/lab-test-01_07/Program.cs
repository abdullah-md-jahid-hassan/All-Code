using System;

namespace lab_test_01_07
{
    class Program
    {
        static void Main(string[] args)
        {
            String a = "Abdullah Md Jahid Hassan", b="Abdur rahman";
            Console.WriteLine("Name in Upper Case: "+a.ToUpper()
                +"\nCoppy of the name: "+ a.Clone());
            if (a.CompareTo(b)==0) Console.WriteLine("The name is Same.");
            else Console.WriteLine("The name is not Same.");
            Console.WriteLine("Index of Word 'M' is: "+a.IndexOf('M'));
        }
    }
}
