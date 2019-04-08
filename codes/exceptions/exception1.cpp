#include <iostream>

using namespace std;

class Overflow
{
  public:
    void run(int v) throw(int, string){
        if (v == 0)
            throw 2;
        if (v == 1)
            throw string("abc");
        throw Overflow();
    }
};

int main()
{
    try {
        Overflow o;
        o.run(0);
    } catch (int a) {cout << endl << a << endl; }

    try {
        Overflow o;
        o.run(1);
    } catch (string a) { cout << endl << a << endl;}

    try {
        Overflow o;
        o.run(3);
    } catch (Overflow &o) { cout << endl << "Overflow" << endl; }
}