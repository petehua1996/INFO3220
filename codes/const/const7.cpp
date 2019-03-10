#include <iostream>

using namespace std;

int main(){
    string m("abc");
    const string * const_p_m = &m;
    cout << *const_p_m << endl;
    m[0] = 'b';
    cout << *const_p_m << endl;
}