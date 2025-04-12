#include <iostream>
#include <memory>

using namespace std;

// 기본 컴포넌트
class Coffee {
public:
    virtual int cost() const {
        return 5;
    }

    virtual ~Coffee() = default;
};

// 데코레이터 베이스 클래스
class CoffeeDecorator : public Coffee {
protected:
    shared_ptr<Coffee> coffee;

public:
    CoffeeDecorator(shared_ptr<Coffee> coffee) : coffee(coffee) {}
};

// 우유 추가 데코레이터
class MilkDecorator : public CoffeeDecorator {
public:
    MilkDecorator(shared_ptr<Coffee> coffee) : CoffeeDecorator(coffee) {}

    int cost() const override {
        return coffee->cost() + 2;
    }
};

// 설탕 추가 데코레이터
class SugarDecorator : public CoffeeDecorator {
public:
    SugarDecorator(shared_ptr<Coffee> coffee) : CoffeeDecorator(coffee) {}

    int cost() const override {
        return coffee->cost() + 1;
    }
};

// 실행
int main() {
    auto baseCoffee = make_shared<Coffee>();
    cout << "기본 커피 가격: " << baseCoffee->cost() << endl; // 5

    auto milkCoffee = make_shared<MilkDecorator>(baseCoffee);
    cout << "우유 추가 커피 가격: " << milkCoffee->cost() << endl; // 7

    auto sugarCoffee = make_shared<SugarDecorator>(baseCoffee);
    cout << "설탕 추가 커피 가격: " << sugarCoffee->cost() << endl; // 6

    auto milkAndSugarCoffee = make_shared<SugarDecorator>(milkCoffee);
    cout << "우유 + 설탕 커피 가격: " << milkAndSugarCoffee->cost() << endl; // 8

    return 0;
}
