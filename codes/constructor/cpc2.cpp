#include <iostream>

class Complexer
{
  public:
    Complexer(double real = 0, double imaginary = 0)
        : real(real), imag(imaginary)
    {
        std ::cout << " Constructor" << std ::endl;
    }
    Complexer(const Complexer &other)
        : real(other.real), imag(other.imag)
    {
        std ::cout << " Copy Constructor " << std ::endl;
    }
    void display() const
    {
        std ::cout << real;
        if (imag >= 0)
        {
            std ::cout << "+";
        }
        std ::cout << imag << "i" << std ::endl;
    }

  private:
    const double real;
    const double imag;
};

using namespace std;

void displayComplex(Complexer instance){
    instance.display();
}

int main()
{
    cout << " Complexer c1;" << endl;
    Complexer c1;
    c1.display();
    cout << endl;

    cout << " Complexer c2 = 3.1;" << endl;
    Complexer c2 = 3.1;
    cout << " displayComplex(c2);" << endl;
    displayComplex(c2);
    cout << endl;
    
    cout << " Complexer c3 (3.1,-1.4);" << endl;
    Complexer c3(3.1, -1.4);
    cout << " displayComplex(c3);" << endl;
    displayComplex(c3);
    cout << endl;

    cout << " complexer c4 = c2;" << endl;
    Complexer c4 = c2;
    cout << " displayComplex(c4);" << endl;
    displayComplex(c4);
    cout << endl;
}