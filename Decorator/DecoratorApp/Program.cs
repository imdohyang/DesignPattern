using System;

class Program
{
    static void Main(string[] args)
    {
        ICoffee coffee = new Coffee();
        Console.WriteLine("기본 커피 가격: " + coffee.Cost()); // 5

        ICoffee milkCoffee = new MilkDecorator(coffee);
        Console.WriteLine("우유 추가 커피 가격: " + milkCoffee.Cost()); // 7

        ICoffee sugarCoffee = new SugarDecorator(coffee);
        Console.WriteLine("설탕 추가 커피 가격: " + sugarCoffee.Cost()); // 6

        ICoffee milkAndSugar = new SugarDecorator(milkCoffee);
        Console.WriteLine("우유 + 설탕 커피 가격: " + milkAndSugar.Cost()); // 8
    }
}