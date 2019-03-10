#include <iostream>

using namespace std;

class A{
public:
    void foo() const{
        cout << "Calling const int method" << endl;
    }

    void foo(){
        cout << "Calling non-const int method" << endl;
    }
};

int main(){
    A a{};
    a.foo();
    const A const_a{};
    const_a.foo();
}