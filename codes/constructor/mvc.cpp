#include <string>
#include <iostream>

using namespace std;

class Base
{
  public:
    Base(std ::string v) : value(std ::move(v)) {
        cout << "Constructor Called" << endl;
        cout << "value: " << value << endl;
        cout << "v: \n" << v << endl;
    }

    Base(Base && other) : value(std ::move(other.value)) {
        cout << "Move Constructor Called\n" << endl;
    }

    std ::string copyValue() {return value;}
    void printValue(){ cout << value << endl; }

  protected:
    std ::string value;
};

int main()
{
    Base baseOne("I am not empty!");
    getchar();
    Base baseTwo = baseOne.copyValue();
    getchar();
    Base baseThree(std::move(baseOne));
    getchar();
    Base baseFour(baseTwo.copyValue());
    getchar();
    baseOne.printValue();
    getchar();
    baseTwo.printValue();
    getchar();
    baseThree.printValue();
    getchar();
    baseFour.printValue();
}