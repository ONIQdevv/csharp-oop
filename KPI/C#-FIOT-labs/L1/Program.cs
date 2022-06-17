using System.Globalization;

Console.WriteLine("Students book number is 1202");
Lab1 l1 = new Lab1();//create class instance
Console.WriteLine("Sum is {0}",l1.Calculate()); //call main method
public class Lab1
{
    private int O1 = 1202 % 2;
    private const int C3 = 1202 % 3;
    private int C5 = 1202 % 5;
    private int C7 = 1202 % 7;

    public float Calculate()
    {
        Console.WriteLine("O1 (First operation):{0}, its +",O1);
        Console.WriteLine("C3 (Const):{0}",C3);
        Console.WriteLine("C5 (Second operation):{0}, its %",C5);
        Console.WriteLine("C7 (Indexes type):{0}, its float",C7);
        const float C = C3;

        Console.Write("Input parameter n: ");
        float n = float.Parse(Console.ReadLine(), CultureInfo.InvariantCulture.NumberFormat); //convert input string to float

        Console.Write("Input parameter m: ");
        float m = float.Parse(Console.ReadLine(), CultureInfo.InvariantCulture.NumberFormat); //convert input string to float

        Console.Write("Input parameter a: ");
        float a = float.Parse(Console.ReadLine(), CultureInfo.InvariantCulture.NumberFormat); //convert input string to float
        
        Console.Write("Input parameter b: ");
        float b = float.Parse(Console.ReadLine(), CultureInfo.InvariantCulture.NumberFormat); //convert input string to float
        while (n < a)
        {
            Console.WriteLine("n<a");
            Console.Write("Input another parameter a: ");
            a = float.Parse(Console.ReadLine(), CultureInfo.InvariantCulture.NumberFormat); //convert input string to float
        }
        while (m<b)
        {
            Console.WriteLine("m<b");
            Console.Write("Input another parameter b: ");
            b = float.Parse(Console.ReadLine(), CultureInfo.InvariantCulture.NumberFormat); //convert input string to float
        }
        
        float sum = 0;

        for (float i = a; i < n; i++)
        {
            if (i + C == 0)
            {
                Console.WriteLine("Denominator in cycle is 0, skip this iteration");
                continue;
            }
            for (float j = b; j < m; j++)
            {
                sum += i % j / (i + C);
            }
        }
        return sum;
    }
}