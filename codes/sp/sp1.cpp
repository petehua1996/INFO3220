#include <iostream>
#include <memory>

using namespace std;

int main(){
    auto_ptr<int> p1(new int(10));
    cout << *p1 << endl;
    auto_ptr<int> p2(p1);
    cout << *p2 << endl;
    cout << *p1 << endl;
}