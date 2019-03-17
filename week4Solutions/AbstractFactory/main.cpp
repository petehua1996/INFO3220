#include "abstractfactory.h"
#include <iostream>
#include <string>

void useOS(const AbstractOS &os)
{
    AbstractIDE * ide = os.makeIDE();
    AbstractMalware * malware = os.makeMalware();
    std::cout<<"we use " << ide->getName() << ", it only cost us $"<< ide->getCost()<<"."<<std::endl;
    std::cout << "we got infected with another " << malware->getCategory() << " we usually only get " <<malware->getFrequency() << " a year."<<std::endl;

    //wipe the system, because we got a virus
    //(also because we have allocated memory)
    delete ide;
    delete malware;
}

int main()
{
    std::cout<<"Using Windows platform"<< std::endl;
    useOS(Windows());
    std::cout<<"Using Mac platform"<< std::endl;
    useOS(Mac());
}
