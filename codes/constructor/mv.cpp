#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v = {1,2,3};
    cout << &v << endl;
    for(auto it = v.begin(); it < v.end(); it++){
        cout << &(*it) << endl;
        cout << "v: " << *it << endl;
    }

    vector<int> mv_v = move(v);

    cout << &v << endl;
    cout << &mv_v << endl;

    for(auto it = v.begin(); it < v.end(); it++){
        cout << "v: " << *it << endl;
    }

    for(auto it = mv_v.begin(); it < mv_v.end(); it++){
        cout << &(*it) << endl;
        cout << "mv_v: " << *it << endl;
    }
}