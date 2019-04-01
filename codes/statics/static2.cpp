#include <iostream>

class Singleton
{
  public:
    static Singleton *Instance(){
      if(soleInstance == nullptr){
        soleInstance = new Singleton();
      }
      return soleInstance;
    }

  protected:
    // this is protected , restricting access
    Singleton(){}

  private:
    // the ONLY instance
    static Singleton *soleInstance;
};

Singleton* Singleton::soleInstance = nullptr;

using namespace std;

int main(){
  Singleton * s1 = Singleton::Instance();
  Singleton * s2 = Singleton::Instance();

  cout << s1 << endl;
  cout << s2 << endl;
}