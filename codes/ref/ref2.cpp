#include <iostream>

using namespace std;

int main(){
    int i = 42;
    const int & r = 42;
    const int & r2 = i+1;
    cout << i << endl;
    cout << r << endl;
    cout << r2 << endl;

    double val = 2.17;
    const int &r3 = val;
    cout << r3 << endl;
    cout << val << endl;
}