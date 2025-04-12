class Program
{
    static void Main(string[] args)
    {
        AnimalFactory factory = new AnimalFactory();

        Animal dog = factory.CreateAnimal("dog");
        Animal cat = factory.CreateAnimal("cat");

        if (dog != null) Console.WriteLine("Dog says: " + dog.Speak());
        if (cat != null) Console.WriteLine("Cat says: " + cat.Speak());
    }
}
