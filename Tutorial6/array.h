#ifndef ARRAY_H
#define ARRAY_H

#include <array>
#include <vector>
#include <iostream>

using namespace std;

namespace arr{
    int sum(array<int,5> a) {
        int result=0;
        for(int i = 0; i < 5; i++) {
            result += a[i];
        }
        return result;
    }
    int foo() {
        array<int,5> arr{1,2,3,4};
        std::cout << sum(arr) << std::endl;
        return 0;
    }
}

#endif // ARRAY_H
