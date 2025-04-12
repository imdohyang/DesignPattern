#include <iostream>
#include <memory>
#include <string>

using namespace std;

// 추상 클래스 Animal
class Animal {
public:
    virtual string speak() const = 0;
    virtual ~Animal() {}
};

// Dog 클래스
class Dog : public Animal {
public:
    string speak() const override {
        return "Woof!";
    }
};

// Cat 클래스
class Cat : public Animal {
public:
    string speak() const override {
        return "Meow!";
    }
};

// AnimalFactory 클래스
class AnimalFactory {
public:
    unique_ptr<Animal> createAnimal(const string& type) {
        if (type == "dog") {
            return make_unique<Dog>();
        } else if (type == "cat") {
            return make_unique<Cat>();
        } else {
            return nullptr;
        }
    }
};

int main() {
    AnimalFactory factory;

    auto dog = factory.createAnimal("dog");
    auto cat = factory.createAnimal("cat");

    if (dog) {
        cout << "Dog says: " << dog->speak() << endl;
    }

    if (cat) {
        cout << "Cat says: " << cat->speak() << endl;
    }

    return 0;
}
