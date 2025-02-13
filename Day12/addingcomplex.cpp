#include <iostream>
using namespace std;

class Complex
{
    public:
    int real;
    int imag;

    public:

    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    Complex(){}

    Complex operator+(Complex c2)
    {
        Complex c3;

        c3.real = this->real + c2.real;
        c3.imag = this->imag + c2.imag;

        return c3;
    }

    Complex operator-(Complex c2)
    {
        Complex c3;

        c3.real = this->real - c2.real;
        c3.imag = this->imag - c2.imag;

        return c3;
    }
};

int main()
{
    Complex c1 = Complex(1,2);
    Complex c2 = Complex(3,4);
    Complex c3 = c1 - c2; // c1.operator+(c2)

    cout << c3.real << " + " << "i" << c3.imag << endl;
    return 0;

}