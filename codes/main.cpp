#include <iostream>
#include <vector>

using namespace std;

int main() {
    char myword[] = "Hello";
    char * word_ptr = myword;
    cout << *(++word_ptr) << endl;
    return 0;
}