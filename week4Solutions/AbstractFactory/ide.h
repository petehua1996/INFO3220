#ifndef IDE_H
#define IDE_H
#include <string>
class AbstractIDE {  // Product (abstract)IDE
public:
   AbstractIDE(const std::string &name):m_name(name) {}
   virtual ~AbstractIDE() {}
   virtual int getCost() = 0; // pure virtual method
   virtual const std::string& getName()const {return m_name;}
private:
   std::string m_name;
};

class WindowsIDE : public AbstractIDE { // Concrete IDE for windows platform
public:
    WindowsIDE():AbstractIDE("Visual Studio"){}
    int getCost() override {
        return 4500;
    }
};

class MacIDE : public AbstractIDE { // Concrete IDE for mac platform
public:
    MacIDE():AbstractIDE("Xcode"){}

    int getCost() override {
        return 99;
    }
};

#endif // IDE_H
