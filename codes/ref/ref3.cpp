#include <iostream>

using namespace std;

int main(){
    int val = 1.01;
    cout << val << endl;

    // int &ref = 1.01;

    int &ref2 = val;
    cout << ref2 << endl;

    ref2 = 3.14;
    cout << ref2 << endl;
    cout << val << endl;

    const int & ref3 = 1;
    cout << ref3 << endl;

    ref2 = ref3;
    cout << ref2 << endl;
    cout << val << endl;

    val = ref3;
}