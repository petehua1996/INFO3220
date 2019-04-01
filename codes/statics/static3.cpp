#include <iostream>

class Singleton
{
  public:
    static Singleton &getInstance()
    {
        static Singleton instance;
        return instance;
    }
    int getData()
    {
        return data;
    }
    void setData(int x)
    {
        data = x;
    }

  private:
    int data; // state of singleton
    // get instance
    Singleton() : data(0) {} // make it not accessible / copyable
    Singleton(const Singleton &src) = delete;
    Singleton &operator=(const Singleton &rhs) = delete;
};

int main()
{
    Singleton &s1 = Singleton::getInstance();
    std ::cout << " data : " << s1.getData() << std ::endl;
    Singleton &s = Singleton ::getInstance();
    s.setData(1);
    std ::cout << " data : " << s1.getData() << std ::endl;
}