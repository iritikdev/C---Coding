#include<iostream>
using namespace std;

class Complex {
    private:
        int real;
        int imag;
    public:
        Complex(int r=0, int i=0) {
            real = r;
            imag = i;
        }
        void Display() {
            cout<<real <<" + "<<imag<<"i";
        }
        friend Complex operator+(Complex x, Complex y);
};

Complex operator+(Complex x, Complex y) {
    Complex temp;
    temp.real = x.real+y.real;
    temp.imag = y.imag+y.imag;
    return temp;
}
int main() {
    Complex c1(4,6), c2(2,6), c3;
    c3 = c1+c2;
    c3.Display();
}