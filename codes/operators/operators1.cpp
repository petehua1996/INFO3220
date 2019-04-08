#include <iostream>

using namespace std;

class Day{
public:
    Day(int day):day(day){}

    Day operator+(const Day & d){
        return Day(day+d.day);
    }

    friend ostream& operator<<(ostream& os, const Day& d){
        os << "Day: " << d.day;
        return os;
    }

private:
    int day;

};

int main(){
    Day d1(3);
    Day d2(4);
    cout << d1+d2 << endl;
}