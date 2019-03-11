#include <iostream>
#include <vector>

using namespace std;

int sum(const int (&ptrArray)[10]){
    int sum = 0;
    for(int i=0;i<10;i++){
        sum += ptrArray[i];
    }
    return sum;
}

int main() {
    int size = 10;
    int n[10];
    for(int i=0;i<10;i++){
        n[i] = i*i;
    }
    cout << sum(n) << endl;

    string s("hello");
    char * c = &s[0];
    return 0;
}