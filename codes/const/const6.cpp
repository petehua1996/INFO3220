#include <iostream>

using namespace std;

class A{
public:
    A(string s): s(s){}

    const string & getString() const{
        cout << "Calling const getString method" << endl;
        return s;
    }

    const string & getString(){
        cout << "Calling non-const getString method" << endl;
        return s;
    }

private:
    string s;
};

int main(){
    A a{"abc"};
    const string & s = a.getString();
}