#include <iostream>
#include <string>

using namespace std;

// 서브 시스템 클래스들
class CPU {
public:
    string process() {
        return "CPU 처리 중";
    }
};

class Memory {
public:
    string load() {
        return "메모리 로딩 중";
    }
};

class SSD {
public:
    string read() {
        return "SSD 드라이브 읽는 중";
    }
};

// 파사드 클래스
class Computer {
private:
    CPU cpu;
    Memory memory;
    SSD ssd;

public:
    void boot() {
        cout << ssd.read() << endl;
        cout << memory.load() << endl;
        cout << cpu.process() << endl;
    }
};

// 실행
int main() {
    Computer c;
    c.boot();
    return 0;
}
