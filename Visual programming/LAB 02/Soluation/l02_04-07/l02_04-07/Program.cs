using System.Text.RegularExpressions;

string[] numbers;
Console.Write("Enter the String: ");
string str = Console.ReadLine();
numbers = Regex.Split(str, @"\D+");
Console.WriteLine("Numbers in given string:");
foreach (string num in numbers) Console.WriteLine(num);
