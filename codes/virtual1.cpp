#include <iostream>

using namespace std;

class A{
public:
    virtual int foo(){return 0;}
};

class B: public A{
public:
    virtual int foo(){
        return 1;
    }
};

int main(){
    B b;
    cout << b.foo() << endl;
}