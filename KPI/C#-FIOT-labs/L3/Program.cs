using System.Text;

Console.WriteLine("Students book number is 1202");
Lab3 l3 = new Lab3();
l3.Calculate();
public class Lab3
{
    private int C3 = 1202 % 3;
    private int C17 = 1202 % 17;

    //lorem ipsum string 
    StringBuilder str = new StringBuilder("urna duis convallis convallis tellus id interdum velit laoreet id donec ultrices tincidunt arcu non sodales neque sodales ut etiam sit amet nisl purus in mollis nunc sed id semper");

    public void Calculate()
    {

        Console.WriteLine("C3 (String Type):{0}, its StringBuilder", C3);
        Console.WriteLine("C17 (Operation):{0}, Sort the words of the given text for the number of entries in the assigned character in them.", C17);
        
        Console.Write("Input char to sort: ");
        char a = (char)Console.Read();
        
        string[] s = str.ToString().Split(" ");
        int[] count = new int[s.Length];
        int i = 0;
        foreach (var subStr in s) //count number of char in every string
        {
            count[i++] = subStr.Count(f => f == a);
        }

        Array.Sort(count,s);
        Array.Reverse(s);
        Array.Reverse(count);
        
        for (int j = 0; j < s.Length; j++)
        {
            Console.WriteLine("{0} - {1}",s[j],count[j]);
        }
    }
}