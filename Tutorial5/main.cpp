#include "Computer.h"
#include "GamingComputerBuilder.h"
#include "OfficeComputerBuilder.h"
#include "ServerBuilder.h"
#include <iostream>

#include "node.h"

int main(){
    char* a[2] = {"abc","2"};
    Node::foo(2,a);
}

//int main() {
//  {
//    OfficeComputerBuilder builder;
//    builder.createComputer();
//    Computer* computer = builder.getResult();
//    std::cout << computer->getComputerSpecifications() << "\n" << std::endl;
//    delete computer;
//  }
//  {
//    ServerBuilder builder;
//    builder.createComputer();
//    Computer* computer = builder.getResult();
//    std::cout << computer->getComputerSpecifications() << "\n" << std::endl;
//    delete computer;
//  }
//  {
//    GamingComputerBuilder builder;
//    builder.createComputer();
//    Computer* computer = builder.getResult();
//    std::cout << computer->getComputerSpecifications() << "\n" << std::endl;
//    delete computer;
//  }

//  std::cout << "building a million computers" << std::endl;
//  for (int i = 0; i < 1000000; ++i) {
//    GamingComputerBuilder builder;
//    builder.createComputer();
//    Computer* computer = builder.getResult();
//    if (i % 10000 == 0) {
//      std::cout << i / 1000 << "k computers built " << computer << std::endl;
//    }
//    delete computer;
//  }
//  std::cout
//      << "1 million computers built. If the address at the end increased continuously you have a memory leak"
//      << std::endl;
//  return 0;
//}
