#include <iostream>
#include <string>

class WrongCharException: public std::exception{
public:
    WrongCharException(std::string msg):msg(msg){}

    std::string getMsg(){return msg;}
private:
    std::string msg;
};

int main() {
    char c;
    try {
        std::cout << "Type-in (y/n)" << std::endl;
        std::cin >> c;
        if (c != 'y' && c!= 'n') {
            throw WrongCharException("Wrong input character");
        }
    } catch(WrongCharException & wce) {
        std::cout << wce.getMsg() << std::endl;
        exit(1);
    }
    if (c=='y') {
        std::cout << "User typed yes." << std::endl;
    } else {
        std::cout << "User typed no." << std::endl;
    }
    return 0;
}
