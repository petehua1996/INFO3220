#include <iostream>

using namespace std;

class Overflow
{
  public:
    string msg()
    {
        return "Overflow Error";
    }

    void run(int v) throw(int, string)
    {
        if (v == 0)
            throw 2;
        if (v == 1)
            throw string("abc");
        throw Overflow();
    }
};

int main()
{
    try
    {
        throw "string";
    }
    catch (const char *str)
    {
        cout << "Throw const char*" << endl;
    }

    try
    {
        throw string("string");
    }
    catch (string &s)
    {
        cout << "\nThrow string" << endl;
    }

    try
    {
        throw Overflow();
    }
    catch (Overflow &o)
    {
        cout << endl
             << o.msg() << endl;
    }

    try
    {
        Overflow o;
        o.run(0);
    }
    catch (int a)
    {
        cout << endl
             << a << endl;
    }

    try
    {
        Overflow o;
        o.run(1);
    }
    catch (string a)
    {
        cout << endl
             << a << endl;
    }

    try
    {
        Overflow o;
        o.run(3);
    }
    catch(Overflow & o){
        cout << endl
             << o.msg() << endl;
    }
}