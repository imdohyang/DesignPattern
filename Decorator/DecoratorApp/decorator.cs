using System;

// 컴포넌트 인터페이스
public interface ICoffee
{
    int Cost();
}

// 기본 커피 클래스
public class Coffee : ICoffee
{
    public int Cost()
    {
        return 5;
    }
}

// 데코레이터 베이스 클래스
public abstract class CoffeeDecorator : ICoffee
{
    protected ICoffee _coffee;

    public CoffeeDecorator(ICoffee coffee)
    {
        _coffee = coffee;
    }

    public virtual int Cost()
    {
        return _coffee.Cost();
    }
}

// 우유 추가 데코레이터
public class MilkDecorator : CoffeeDecorator
{
    public MilkDecorator(ICoffee coffee) : base(coffee) { }

    public override int Cost()
    {
        return base.Cost() + 2;
    }
}

// 설탕 추가 데코레이터
public class SugarDecorator : CoffeeDecorator
{
    public SugarDecorator(ICoffee coffee) : base(coffee) { }

    public override int Cost()
    {
        return base.Cost() + 1;
    }
}
