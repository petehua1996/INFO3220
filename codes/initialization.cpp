#include <iostream>

using namespace std;

class A{
public:
    int a,b;

    A(): a(2) {}

    void print(){
        cout << "a: " << a << " b: " << b << endl;
    }
};

int global_int;
A global_a;

int main(){
    int local_int;
    A local_a;
    
    cout << "Global int: " << global_int << endl;
    cout << "Local int: " << local_int << endl;
    global_a.print();
    local_a.print();
}