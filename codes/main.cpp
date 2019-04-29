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

int foo() {
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

// vector::rbegin/rend
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myvector (5);  // 5 default-constructed ints

  std::vector<int>::reverse_iterator rit = myvector.rbegin();

  for (rit = myvector.rbegin(); rit!= myvector.rend(); ++rit)
    std::cout << ' ' << *rit;
  std::cout << '\n';

  int i=0;
  for (rit = myvector.rbegin(); rit!= myvector.rend(); ++rit)
    *rit = ++i;

  std::cout << "myvector contains:";
  for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}