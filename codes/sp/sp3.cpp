#include <memory>
#include <iostream>

using namespace std;

class A{
public:
    A(int value = 0): value(value){}
    ~A(){
        cout << "Destory A with value " << value << endl;
    }

    weak_ptr<A> ptr;
    int value;
};

int main(){
    shared_ptr<A> x(new A(10));
    shared_ptr<A> y(new A(20));

    x->ptr = y;
    y->ptr = x;

    cout << "Value of x: " << y->value << endl;
    cout << "Use count of x: " << y.use_count() << endl;

    if(auto sx = x->ptr.lock()){
        cout << sx->value << endl;
        cout << sx.use_count() << endl;
    }

    y.reset();
    cout << "y reset" << endl;
    
    auto sx = x->ptr.lock();
    if(sx != nullptr){
        cout << sx->value << endl;
        cout << sx.use_count() << endl;
    } else {
        cout << "sx is nullptr" << endl;
    }

}