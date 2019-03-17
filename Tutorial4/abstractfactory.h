#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include <limits>
#include <string>

namespace abstractFactory {
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
    class AbstractMalware {  // Product (abstract) Malware
    public:
       AbstractMalware(const std::string &category):m_category(category) {}
       virtual ~AbstractMalware() {}
       virtual int getFrequency() = 0; // pure virtual method
       virtual const std::string &getCategory(){return m_category;}
    private:
       std::string m_category;
    };

    class WindowsMalware : public AbstractMalware { // Concrete Malware for windows platform
    public:
        WindowsMalware():AbstractMalware("Ransomware"){}
        int getFrequency() override {
            return std::numeric_limits<int>::max();
        }
    };

    class MacMalware : public AbstractMalware { // Concrete Product Malware for mac platform
    public:
        MacMalware():AbstractMalware("Trojen"){}
        int getFrequency() override {
            return 1;
        }
    };

    class AbstractOS { // Factory (abstract)
    public:
       AbstractOS() {}
       virtual ~AbstractOS() { }
       virtual AbstractIDE *makeIDE() const = 0; // pure virtual
       virtual AbstractMalware *makeMalware() const = 0; // pure virtual
    };

    class Windows : public AbstractOS{ // Factory for windows platform
    public:
       Windows() {}
       virtual ~Windows() { }
       virtual AbstractIDE *makeIDE()const{return new WindowsIDE();}
       virtual AbstractMalware *makeMalware() const {return new WindowsMalware();}
    };

    class Mac : public AbstractOS{ // Factory for windows platform
    public:
       Mac() {}
       virtual ~Mac() { }
       virtual AbstractIDE *makeIDE() const {return new MacIDE();}
       virtual AbstractMalware *makeMalware() const {return new MacMalware();}
    };
}

#endif // ABSTRACTFACTORY_H
