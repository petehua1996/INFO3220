#include <iostream>

using namespace std;

class A{
public:
    int a,b;

    A(int a, int b = 150):a(a),b(b){}
};

void printA(const A & a, const string & name){
    cout << name << ": {Value a : " << a.a << ", Value b: " << a.b << ")" << endl;
}

int main(){
    A a(1,2);
    printA(a,"a");

    A b(100,300);
    printA(b,"b");
    cin.ignore();

    A & ref = a;
    ref = b;
    cout << &ref << endl;
    cout << &a << endl;
    cout << &b << endl;

    printA(a,"a");
    cin.ignore();

    ref.a = 10000;
    printA(a,"a");
    printA(b,"b");
}