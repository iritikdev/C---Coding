#include<iostream>
using namespace std;

class Complex {   
    public:
        int real;
        int imag;
        Complex(int r = 0, int i = 0) {
            real = r;
            imag = i;
        }
        Complex operator+(Complex x) {
            Complex temp;
            temp.real = real + x.real;
            temp.imag = imag + x.imag;
            return temp;
        }
};

int main() {
    Complex c1(4,5);
    Complex c2(6,4);
    Complex c3;
    c3 = c1 + c2;
    cout<< c3.real << " + "<<c3.imag<<"i";
}