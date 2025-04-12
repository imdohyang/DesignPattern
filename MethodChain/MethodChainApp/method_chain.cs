using System;

class Calculator
{
    private double result;

    public Calculator()
    {
        result = 0;
    }

    public Calculator Add(double value)
    {
        result += value;
        return this;
    }

    public Calculator Subtract(double value)
    {
        result -= value;
        return this;
    }

    public Calculator Multiply(double value)
    {
        result *= value;
        return this;
    }

    public Calculator Divide(double value)
    {
        if (value != 0)
        {
            result /= value;
        }
        return this;
    }

    public double GetResult()
    {
        return result;
    }
}