#include <iostream>

using namespace std;

void foo(const int number){
    cout << "Calling const int method" << endl;
}

void foo(int number){
    cout << "Calling non-const int method" << endl;
}

int main(){
    int val(1);
    foo(val);
    const int const_val(2);
    foo(const_val);
}