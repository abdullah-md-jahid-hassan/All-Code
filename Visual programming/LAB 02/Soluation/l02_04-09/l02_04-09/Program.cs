string str = "Abdullah\nMd\nJahid\nHassan.";
int lines=1, index=0;
Console.WriteLine("Lines :");
Console.WriteLine(str);
while (true)
{
    index = str.IndexOf('\n', index);
    if (index < 0) break;
    lines++;
    index++;
}
Console.WriteLine("Total lines in a string: "+lines);
