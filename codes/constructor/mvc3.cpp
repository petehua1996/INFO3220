#include <iostream>
#include <stdio.h>

using namespace std;

class Base
{
  public:
    Base(std ::string v) : value(std ::move(v)) {
        cout << "Constructor Called" << endl;
    }

    Base(Base && other) : value(std ::move(other.value)) {
        cout << "Move Constructor Called\n" << endl;
    }

    Base &operator=(Base && other){
        cout << "Move Assignment operator called" << endl;
        value = move(other.value);
    }

    Base & setValue(string value) { this->value = value;}

    std ::string copyValue() {return value;}
    void printValue(){ cout << value << endl; }

  protected:
    std::string value;
};

int main()
{
    Base t1("abc"), t2("def");
    t1.printValue();
    t2.printValue();
    getchar();
    t2 = move(t1);
    t1.printValue();
    t2.printValue();
    getchar();
    Base t3 = move(t2);
    t1.printValue();
    t2.printValue();
    t3.printValue();

    return 0;
}