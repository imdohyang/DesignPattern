class Program
{
    static void Main(string[] args)
    {
        Person person = new PersonBuilder()
            .WithName("홍길동")
            .WithAge(20)
            .WithAddress("양산시 부산대학로")
            .Build();

        person.Print();
    }
}