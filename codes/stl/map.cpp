#include <map>
#include <set>
#include <iostream>

using namespace std;

int main(){
    cout << "Map:" << endl;
    map<string,int> names;
    names.insert(make_pair("abc",1));
    names.insert(make_pair("abc",2));
    auto mit = names.find("abc");
    if(mit != names.end()){
        cout << mit->second << endl;
    }
    cout << names["abc"] << endl;
    cout << names.count("abc") << endl;


    cout << "Set:" << endl;
    set<int> vals;
    vals.insert(1);
    vals.insert(2);
    auto sit = vals.find(1);
    if(sit != vals.end()){
        cout << *sit << endl;
    }
    cout << vals.size() << endl;
    cout << vals.count(2) << endl;
}