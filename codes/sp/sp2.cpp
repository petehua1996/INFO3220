#include <iostream>
#include <memory>

using namespace std;

int main(){
    unique_ptr<int> p1(new int(10));
    cout << *p1 << endl;
    unique_ptr<int> p2(move(p1));
    cout << *p2 << endl;
    cout << *p1 << endl;
}