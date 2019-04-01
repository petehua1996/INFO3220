#pragma once

class Singleton {
public:
    static Singleton& getInstance(){
        static Singleton s;
        return s;
    }

protected:
    Singleton(){}
};
