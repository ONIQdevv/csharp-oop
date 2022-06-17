Console.WriteLine("Students book number is 1202");
Lab6 l6 = new Lab6();
l6.Calculate();

public class Lab6
{
    private int C13 = 1202 % 13;
    
    private class Khight
    {
        public Helmet helmet;
        public Chest chest;
        public Pants pants;

        public int CalcPrice()
        {
            return helmet.price + chest.price + pants.price;
        }

        public void SortArmorByWeight()
        {
            Armor[] armors = {helmet, chest, pants};
            Array.Sort(armors, delegate(Armor armor, Armor armor1) { return armor.weight.CompareTo(armor1.weight);});
            foreach (var VARIABLE in armors)
            {
                Console.WriteLine(VARIABLE.GetType()+ " Weight:" + VARIABLE.weight);
            }
        }

        public void SeacrchArmorByprice(int price)
        {
            Armor[] armors = {helmet, chest, pants};
            foreach (var VARIABLE in armors)
            {
                if (VARIABLE.price <= price)
                {
                    Console.WriteLine(VARIABLE.GetType()+ " Price:" + VARIABLE.price);
                }
            }
        }
    }
    
    public class Armor
    {
        public int price;
        public int weight;
    }
    private class Helmet : Armor
    {
        public string size = "normal";
    }
    private class Pants : Armor
    {
        public int length = 78;
    }
    public class Chest : Armor
    {
        public int length = 50;
        public int chestVolume = 34;
    }
    public void Calculate()
    {
        Console.WriteLine("C13 (Class Type):{0}, its Knight", C13);
        Khight k = new Khight();
        Helmet helmet = new Helmet();
        helmet.price = 100;
        helmet.weight = 150;
        k.helmet = helmet;
        
        Chest chest = new Chest();
        chest.price = 400;
        chest.weight = 250;
        k.chest = chest;
        
        Pants pants = new Pants();
        pants.price = 200;
        pants.weight = 200;
        k.pants = pants;

        Console.WriteLine("Knight armor price: {0}",k.CalcPrice());
        Console.WriteLine("Sorted armor by weight");
        k.SortArmorByWeight();
        
        Console.Write("Input armor price: ");
        k.SeacrchArmorByprice(int.Parse(Console.ReadLine()));
    }
}