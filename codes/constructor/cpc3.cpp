#include <iostream>
#include <stdio.h>

using namespace std;

class Test
{
  public:
    Test() {}

    // Copy Constructor
    Test(const Test &t)
    {
        cout << "Copy constructor called" << endl;
    }

    // Copy Assignment
    Test &operator=(const Test &t)
    {
        cout << "Assignment operator called" << endl;
    }
};

int main()
{
    Test t1, t2;
    t2 = t1;
    Test t3 = t1;
    return 0;
}