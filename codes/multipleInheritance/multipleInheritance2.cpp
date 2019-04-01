#include <iostream>

using namespace std;

class A
{
  public:
    int x;

    A(int i)
    {
        cout << "Constructor of A" << endl;
        x = i;
    }

    virtual void print() { cout << "A: " << x << endl; }
};

class B : virtual public A
{
  public:
    B() : A(10)
    {
        cout << "Constructor of B" << endl;
    }

    virtual void print() { cout << "B: " << x << endl; }
};

class C : virtual public A
{
  public:
    C() : A(10)
    {
        cout << "Constructor of C" << endl;
    }

    virtual void print() { cout << "C: " << x << endl; }
};

class D : public B, public C
{
  public:
    D() : A(5), B(), C() {}

    virtual void print(){
        A::print();
    }
};

int main()
{
    D d;
    d.print();
    return 0;
}