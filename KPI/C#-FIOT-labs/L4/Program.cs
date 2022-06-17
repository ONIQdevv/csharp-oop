Console.WriteLine("Students book number is 1202");
Lab4 l4 = new Lab4();

l4.Calculate();

public class Lab4
{
    private int C11 = 1202 % 11;
    
    public class Plane
    {
        public string name;
        public int weight;
        public int speed;
        public int numberOfSeats;
        public string countryOwner;

        public Plane(string name,int weight,int speed,int numberOfSeats, string countryOwner)
        {
            this.name = name;
            this.weight = weight;
            this.speed = speed;
            this.numberOfSeats = numberOfSeats;
            this.countryOwner = countryOwner;
        }
    }
    
    public void Calculate()
    {
        Console.WriteLine("C11 (Class type):{0}, its Plane", C11);
        Plane plane1 = new Plane("Plane 1", 5000, 500, 46, "Ukraine");
        Plane plane2 = new Plane("Plane 2", 5600, 450, 60, "Slovakia");
        Plane plane3 = new Plane("Plane 3", 6000, 300, 80, "Polish");
        Plane plane4 = new Plane("Plane 4", 3000, 400, 20, "USA");
        Plane plane5 = new Plane("Plane 5", 2000, 550, 10, "Ukraine");

        Plane[] planes = {plane1, plane2, plane3, plane4, plane5};

        Console.WriteLine("Sort by name");
        Array.Sort(planes,
            delegate(Plane x, Plane y) { return x.name.CompareTo(y.name); });
        foreach (var VARIABLE in planes) //sort by name
        {
            Console.WriteLine(VARIABLE.name + " Speed:" + VARIABLE.speed + " Weight:" + VARIABLE.weight +" Number of seats:" + VARIABLE.numberOfSeats + " County owner:" + VARIABLE.countryOwner);
        }
        Console.WriteLine("Sort by speed");
        Array.Sort(planes,
            delegate(Plane x, Plane y) { return x.speed.CompareTo(y.speed); });
        Array.Reverse(planes);
        
        foreach (var VARIABLE in planes) //sort by max speed
        {
            Console.WriteLine(VARIABLE.name + " Speed:" + VARIABLE.speed + " Weight:" + VARIABLE.weight +" Number of seats:" + VARIABLE.numberOfSeats + " County owner:" + VARIABLE.countryOwner);
        }
    }
}