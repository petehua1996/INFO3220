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
    cin.ignore();

    A b(100);
    printA(b,"b");
    cin.ignore();

    A & a_ref = a;
    printA(a_ref, "a ref");
    cin.ignore();

    a_ref = 2;
    printA(a_ref, "a ref");
    cin.ignore();

    printA(a,"a");
    cin.ignore();

    a_ref = b;
    printA(a_ref, "a ref");
    cin.ignore();

    printA(a, "a");
    cin.ignore();

    a_ref.b = 300;
    printA(b, "b");
}