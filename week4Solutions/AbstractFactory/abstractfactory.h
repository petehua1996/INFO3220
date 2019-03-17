#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "ide.h"
#include "malware.h"
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
#endif // ABSTRACTFACTORY_H
