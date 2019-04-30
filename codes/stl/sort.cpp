#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool comparator(int i, int j)
{
    return i > j;
}

struct myclass
{
    bool operator()(int i, int j)
    {
        return i > j;
    }
} myobject;

int main()
{
    int myints[] = { 32, 71,12,45,26,80, 53, 33};
    vector<int> myvector(myints,myints+8);

    sort(myvector.begin(), myvector.begin()+4);
    for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;
    cout << endl;

    getchar();

    sort(myvector.begin()+4, myvector.end(),comparator);
    for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;
    cout << endl;

    getchar();

    sort(myvector.begin(), myvector.end(),myobject);
    for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;
    cout << endl;
}