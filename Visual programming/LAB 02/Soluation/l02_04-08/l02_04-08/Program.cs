using System.Diagnostics.Metrics;

string str;
Console.Write("Enter the String: ");
str = Console.ReadLine();
Console.WriteLine("Possible sub-strings are :");
for (int i = 1; i <= str.Length; i++)
    for (int j = 0; j<=str.Length-i; j++)
        Console.WriteLine(str.Substring(j, i));
