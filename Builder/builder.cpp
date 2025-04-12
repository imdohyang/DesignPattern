#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
    string address;

    void print() const {
        cout << "이름: " << name << endl;
        cout << "나이: " << age << endl;
        cout << "주소: " << address << endl;
    }
};

class PersonBuilder {
private:
    Person person;

public:
    PersonBuilder& with_name(const string& name) {
        person.name = name;
        return *this;
    }

    PersonBuilder& with_age(int age) {
        person.age = age;
        return *this;
    }

    PersonBuilder& with_address(const string& address) {
        person.address = address;
        return *this;
    }

    Person build() {
        return person;
    }
};

int main() {
    Person person = PersonBuilder()
        .with_name("홍길동")
        .with_age(20)
        .with_address("양산시 부산대학로")
        .build();

    person.print();
    return 0;
}
