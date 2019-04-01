#include <iostream>
using namespace std;

class A
{
    int x;

  public:
    A(int i)
    {
        cout << "Constructor of A" << endl;
        x = i;
    }

    virtual ~A()
    {
        cout << "Desctructor A" << endl;
    }

    virtual void print() { cout << x << endl; }
};

class B : public A
{
  public:
    B() : A(10)
    {
        cout << "Constructor of B" << endl;
    }

    virtual ~B()
    {
        cout << "Desctructor B" << endl;
    }
};

class C : public A
{
  public:
    C() : A(10)
    {
        cout << "Constructor of C" << endl;
    }

    virtual ~C()
    {
        cout << "Desctructor C" << endl;
    }
};

class D : public B, public C
{
  public:
    D() : B(), C()
    {
        cout << "Constructor of D" << endl;
    }

    virtual ~D()
    {
        cout << "Desctructor D" << endl;
    }
};

int main()
{
    D d;
    return 0;
}