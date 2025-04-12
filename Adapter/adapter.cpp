#include <iostream>
#include <memory>
#include <string>

using namespace std;

// 기존 내부 클래스
class InternalClass {
public:
    string fetch() {
        return "get user info";
    }
};

// 외부에서 제공된 클래스 (인터페이스가 다름)
class ExternalClass {
public:
    string search() {
        return "get user info";
    }
};

// 어댑터 클래스: ExternalClass → InternalClass의 fetch() 인터페이스에 맞춰줌
class Adapter {
private:
    shared_ptr<ExternalClass> external;
public:
    Adapter(shared_ptr<ExternalClass> ext) : external(ext) {}

    string fetch() {
        return external->search();
    }
};

int main() {
    // 외부 객체 생성
    shared_ptr<ExternalClass> ext = make_shared<ExternalClass>();

    // 어댑터를 통해 외부 객체를 내부 인터페이스처럼 사용
    Adapter adapter(ext);
    cout << adapter.fetch() << endl;

    return 0;
}
