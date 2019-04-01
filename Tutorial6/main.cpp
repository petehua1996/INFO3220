//#include "UserInterface.h"
//#include <iostream>

//int main(int argc, char *argv[]) {

//    UserInterface& interface1 = UserInterface::getInstance(100, 200);

//    std::cout << interface1.getInterfaceHeight() << std::endl;
//    std::cout << interface1.getInterfaceWidth() << std::endl;

//    // We should not be able to create a second user interface. This will actually be assigned
//    // The same interface properties as interface1
//    UserInterface& interface2 = UserInterface::getInstance(1000, 2000);

//    std::cout << interface2.getInterfaceHeight() << std::endl;
//    std::cout << interface2.getInterfaceWidth() << std::endl;

//    // Should print out the same memory address
//    std::cout << &interface1 << std::endl;
//    std::cout << &interface2 << std::endl;

//    return 0;
//}

//#include "array.h"

//int main(){
//    arr::foo();
//}

//#include "multipleinheritance.h"

//int main(){
//    multiInheritance::boo();
//}

#include <iostream>
#include "vector.h"

int main()
{
    unsigned int n = 3;
    Vector v1(n);
    Vector v2(n);

    for(unsigned int i = 0; i < n; ++i)
    {
        std::cout << v1[i] << "\t" << v2[i] << std::endl;
    }

    for(unsigned int i = 0; i < n; ++i)
    {
        v1[i] = i;
        v2[i] = 2*i;
    }

    for(unsigned int i = 0; i < n; ++i)
    {
        std::cout << v1[i] << "\t" << v2[i] << std::endl;
    }

    std::cout << v1.length() << "\t" << v2.length() << std::endl;

    Vector v3 = v1 + v2;
    Vector v4 = v3 + v3 + v3;

    for(unsigned int i = 0; i < n; ++i)
    {
        std::cout << v3[i] << "\t" << v4[i] << std::endl;
    }


    for(unsigned int i = 0; i < 10000; ++i)
    {
       v1 = v1 + v2;
    }
    Vector wiper(3);
    for(unsigned int i = 0; i < n; ++i)
    {
        std::cout << v1[i] << "\t" <<wiper[i] << std::endl;
    }
    return 0;
}
