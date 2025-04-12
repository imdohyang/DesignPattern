using System;

// 추상 클래스 Animal
abstract class Animal
{
    public abstract string Speak();
}

// Dog 클래스
class Dog : Animal
{
    public override string Speak()
    {
        return "Woof!";
    }
}

// Cat 클래스
class Cat : Animal
{
    public override string Speak()
    {
        return "Meow!";
    }
}

// AnimalFactory 클래스
class AnimalFactory
{
    public Animal CreateAnimal(string animalType)
    {
        if (animalType == "dog")
        {
            return new Dog();
        }
        else if (animalType == "cat")
        {
            return new Cat();
        }
        else
        {
            return null;
        }
    }
}
