#include <iostream>

using namespace std;

class A{
public:
    A(string s): s(s){}
    
    const string & getString() const{
        cout << "Calling const getString method" << endl;
        return s;
    }

    string & getString(){
        s = "";
        cout << "Calling non-const getString method" << endl;
        return s;
    }

    string s;
};

int main(){
    const A a{"abc"};
    // const string & s = a.getString();
}