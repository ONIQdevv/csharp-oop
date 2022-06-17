Console.WriteLine("Students book number is 1202");
Lab2 l2 = new Lab2();
l2.Calculate();
public class Lab2
{
    private int C5 = 1202 % 5;
    private int C7 = 1202 % 7;
    private int C11 = 1202 % 11;

    private char[,] B = { {'a', 'b', 'c' },{'e','f','g'}}; // create matrix
    public void Calculate()
    {

        Console.WriteLine("C5 (First operation):{0}, its axB", C5);
        Console.WriteLine("C7 (Elements type):{0}, its char", C7);
        Console.WriteLine("C11 (Second operation):{0}, Calculate the sum of the largest matrix row elements", C11);
        
        Console.Write("Input parameter a: ");
        int a = int.Parse(Console.ReadLine());//string to int
        
        Console.WriteLine("Old matrix");
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                Console.Write("{0} ",B[i,j]);
            }
            Console.Write("\n");
        }

        char[,] C = B;
        Console.WriteLine("New matrix");
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                C[i, j] = (char)(ToInt(B[i, j]) * a); //char to int * a => to char ASCII table
                Console.Write("{0} ",C[i,j]);
            }
            Console.Write("\n");
        }

        int sum = 0;
        for (int i = 0; i < 2; i++)
        {
            int max = Int32.MinValue;
            for (int j = 0; j < 3; j++)
            {
                if (C[i, j] > max)
                {
                    max = C[i, j]; //int value = ASCII table value of char
                }
            }
            sum += max;
        }
        Console.WriteLine("Sum of the largest matrix C row elements: {0}",sum);
    }

    private int ToInt(char c)
    {
        return c - '0';
    }
}