#include <iostream>

using namespace std;

class A{
public:
    virtual int foo(){
        return 0;
        }
};

class B: public A{
public:
    int foo(){
        return 1;
    }
};

class C: public B{
public:
    int foo(){
        return 2;
    }
};

int main(){
    A * c = new C();
    cout << c->foo() << endl;
    delete c;
}