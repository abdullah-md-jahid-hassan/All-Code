String s, w;
int c=0;
Console.Write("Enter the String: ");
s = Console.ReadLine();
Console.Write("Enter the Word to search: ");
w = Console.ReadLine();
for (int i=0; i!=w.Length-1; c++) i = s.IndexOf(w, i)+w.Length;
Console.WriteLine("The Word \""+w+ "\" occars "+(c-1)+" times in text \""+s+"\".");
