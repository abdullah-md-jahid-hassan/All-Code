using System;

namespace l02_01
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter a character : ");
            char ch = Console.ReadLine()[0];
            if ((ch >= 'A' && ch <= 'Z') || (ch>= 'a' && ch <= 'z')){
                if (ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch== 'I' ||
                    ch== 'i' || ch== 'O' || ch== 'o' || ch== 'U' || ch=='u'){
                    Console.WriteLine(ch+" is a vowel");
                }
                else
                {
                    Console.WriteLine(ch + " is a consonant");
                }
            }
            else Console.WriteLine(ch + " is not a valid alphabet");
        }
    }
}
