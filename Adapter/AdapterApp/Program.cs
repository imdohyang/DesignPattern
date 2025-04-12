class Program
{
    static void Main(string[] args)
    {
        ExternalClass external = new ExternalClass();
        InternalClass adapter = new Adapter(external);

        Console.WriteLine(adapter.Fetch());
    }
}
