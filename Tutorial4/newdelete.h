#ifndef NEWDELETE_H
#define NEWDELETE_H

#include <iostream>

using namespace std;

int run(){
    int* pointer1 = new int(6);
    int integer1 = 9;
    int* pointer2 = &integer1;
    int* pointer3 = pointer2;

    // 9, 6, 9, 9
    cout << integer1 << ", " << *pointer1 << ", "
        << *pointer2 << ", " << *pointer3 << endl;
    *pointer3 += 3;

    //12
    cout << integer1 << endl;
    *pointer2 = *pointer1 + *pointer3;

    // 18, 6, 18, 18
    cout << integer1 << ", " << *pointer1 << ", "
        << *pointer2 << ", " << *pointer3 << endl;

    delete pointer1;

    pointer1 = new int(1);
    pointer2 = new int(2);
    pointer3 = new int(3);

    // 6
    cout << *pointer1 * *pointer2 * *pointer3 << endl;

    // 2
    cout << *pointer1 - *pointer2 + *pointer3 << endl;

    // 0
    *pointer1 = *pointer3 - *pointer2 - *pointer1;

    // 1
    *pointer2 = *pointer3 - *pointer2 + *pointer1;

    // 4
    *pointer3 = *pointer3 + *pointer2 - *pointer1;

    // 0
    cout << *pointer1 << endl;

    // 1
    cout << *pointer2 << endl;

    // 4
    cout << *pointer3 << endl;

    delete pointer1;
    delete pointer2;
    delete pointer3;

    return 0;
}

#endif // NEWDELETE_H
