#include <iostream>

using namespace std;

void foo(const int & number){
    cout << "Calling const int method" << endl;
}

int main(){
    int val = 1;
    // int & is casted to const int &
    foo(val);
}