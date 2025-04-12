class Program
{
    static void Main()
    {
        Calculator calc = new Calculator();
        double result = calc.Add(5)
                            .Multiply(2)
                            .Subtract(3)
                            .Divide(2)
                            .GetResult();

        Console.WriteLine("결과: " + result);  // 출력: 결과: 3.5
    }
}
