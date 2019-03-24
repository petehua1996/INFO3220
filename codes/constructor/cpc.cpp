#include <iostream>

using namespace std;

class Ball
{
  public:
    Ball(double radius = 0, int colour = 0x0) : radius(radius), rgb(colour)
    {
        cout << "(" << radius << "," << rgb << ")" << endl;
    }

    Ball(const Ball &  b):
    radius(b.getRadius()),
    rgb(b.getRGB())
    {
       cout << "copy constructor" << endl;
    }
    double getRadius() const { return radius; }
    int getRGB() const { return rgb; }
    void print() { cout << "(" << radius << "," << rgb << ")" << endl; }

  private:
    double radius;
    int rgb;
};

int main()
{
    Ball a;
    Ball b(a);
}