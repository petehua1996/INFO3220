#ifndef MULTIPLEINHERITANCE_H
#define MULTIPLEINHERITANCE_H

#include <iostream>

namespace multiInheritance {
    class A {
    public:
        A(int data) : data(data) {
            std::cout << "cstor A" << std::endl;
        }
        virtual ~A() {
            std::cout << "dstor A" << std::endl;
        }
        void foo() {
            std::cout << "foo()" << std::endl;
        }
        int data;
    };

    class Left : virtual public A {
    public:
        Left() : A(1) {
            std::cout << "cstor Left" << std::endl;
        }
        virtual ~Left() {
            std::cout << "dstor Left" << std::endl;
        }
    };

    class Right : virtual public A {
    public:
        Right() : A(2) {
            std::cout << "cstor Right" << std::endl;
        }
        virtual ~Right() {
            std::cout << "dstor Right" << std::endl;
        }
    };

    class Hybrid : public Left, public Right {
    public:
        Hybrid(): A(10) {
            std::cout << "cstor Hybrid" << std::endl;
        }
        virtual ~Hybrid() {
            std::cout << "dstor Hybrid" << std::endl;
        }

    };

    int boo() {
        Hybrid x;
        x.foo();
        std::cout << x.data << std::endl;
        return 0;
    }
}
#endif // MULTIPLEINHERITANCE_H
