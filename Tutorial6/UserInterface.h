#pragma once

class UserInterface {
public:
    static UserInterface& getInstance(int height, int width){
        static UserInterface u(height, width);
        return u;
    }

    int getInterfaceHeight(){ return m_height; }
    int getInterfaceWidth(){ return m_width; }
private:
    int m_height;
    int m_width;

    UserInterface(int height, int width)
        :m_height(height),
          m_width(width){}
};
