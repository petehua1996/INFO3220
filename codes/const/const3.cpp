#include <iostream>

using namespace std;

void foo(int & number){
    cout << "Calling non-const int method" << endl;
}

int main(){
    const int const_val(2);
    foo(const_val);
}