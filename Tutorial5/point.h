#ifndef POINT_H
#define POINT_H

#include <iostream>

namespace Point {
    class Point {
    public:
       // default constructor
       Point() : x(0), y(0) {
          std::cout << "default constructor" << std::endl;
       }
       // one or two-argument constructor
       explicit Point(int x, int y=0) : x(x), y(y) {
          std::cout << "1/2-arg constructor" << std::endl;
       }
       // copy constructor
        Point(const Point &other) : x(other.x), y(other.y) {
          std::cout << "copy constructor" << std::endl;
        }

        Point &operator=(Point & other){
            x = other.x;
            y = other.y;
            std::cout << "copy assignment" << std::endl;
        }

    private:
        int x;
        int y;
    };

    void foo(){
        Point u;        // Default Constructor
        Point v(1,1);   // 1/2 Argument Constructor
        u = v;          // Copy Assignment
        Point w(1);     // 1/2 Argument Constructor
       // Point x = 1;    // 1/2 Argument Constructor
        Point y = v;    // Copy Constructor
    }
}

#endif // POINT_H
