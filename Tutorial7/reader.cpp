#include <iostream>
#include <string>

class WrongCharException: public std::exception{
public:
    WrongCharException(std::string msg):msg(msg){}

    std::string getMsg(){return msg;}
private:
    std::string msg;
};

class Reader{
public:
    int foo() throw(WrongCharException){
        char c;
        std::cout << "Type-in (y/n)" << std::endl;
        std::cin >> c;
        if(c == 'a'){
            throw "a";
        }
        if (c != 'y' && c!= 'n') {
            throw WrongCharException("Wrong input character");
        }
        if (c=='y') {
            std::cout << "User typed yes." << std::endl;
        } else {
            std::cout << "User typed no." << std::endl;
        }
        return 0;
    }

};

int boo(){
    Reader r;
    try{
        r.foo();
    } catch(WrongCharException & wce) {
        std::cout << wce.getMsg() << std::endl;
        exit(1);
    } catch(...){
        std::cout << "ERROR" << std::endl;
        exit(1);
    }
}
