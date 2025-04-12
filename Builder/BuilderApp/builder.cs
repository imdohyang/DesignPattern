using System;

class Person
{
    public string Name { get; set; }
    public int Age { get; set; }
    public string Address { get; set; }

    public void Print()
    {
        Console.WriteLine($"이름: {Name}");
        Console.WriteLine($"나이: {Age}");
        Console.WriteLine($"주소: {Address}");
    }
}

class PersonBuilder
{
    private Person person = new Person();

    public PersonBuilder WithName(string name)
    {
        person.Name = name;
        return this;
    }

    public PersonBuilder WithAge(int age)
    {
        person.Age = age;
        return this;
    }

    public PersonBuilder WithAddress(string address)
    {
        person.Address = address;
        return this;
    }

    public Person Build()
    {
        return person;
    }
}
