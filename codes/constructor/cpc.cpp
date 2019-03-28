#include <iostream>

using namespace std;

class Ball
{
  public:
    Ball(double radius = 0) : radius(radius)
    {
        cout << "Constructor" << endl;
    }

    Ball(const Ball &  b): radius(b.getRadius()){
       cout << "Copy constructor" << endl;
    }
    double getRadius() const { return radius; }
    void print() { cout << radius << endl; }

  private:
    double radius;
};
#include<iostream> 
#include<cstring> 
using namespace std; 
  
class String 
{ 
private: 
    char *s; 
    int size; 
public: 
    String(const char *str = NULL); // constructor 
    ~String() { delete [] s;  }// destructor 
    String(const String&); // copy constructor 
    void print() { cout << s << endl; } // Function to print string 
    void change(const char *);  // Function to change 
}; 
  
String::String(const char *str) 
{ 
    size = strlen(str); 
    s = new char[size+1]; 
    strcpy(s, str); 
} 
  
void String::change(const char *str) 
{ 
    delete [] s; 
    size = strlen(str); 
    s = new char[size+1]; 
    strcpy(s, str); 
} 
  
String::String(const String& old_str) 
{ 
    size = old_str.size; 
    s = new char[size+1];
    strcpy(s, old_str.s);
    cout << "copy" << endl;
} 
  
int main() 
{ 
    String str = "abc";
    return 0; 
}

// int main()
// {
//     Ball a;
//     Ball b(a);
//     Ball c = a;
//     Ball e;
//     e = a;
//     Ball d = 0;
// }