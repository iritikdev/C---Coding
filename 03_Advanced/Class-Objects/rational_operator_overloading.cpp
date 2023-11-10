#include<iostream>
using namespace std;

class Rational {
    private:
        int numerator;
        int denominator;
    public:
        Rational(int p=1,int q=1) {
            numerator = p;
            denominator = q;
        }
        void display() {
            cout<<numerator<<"/"<<denominator;
        }
        Rational operator+(Rational r) {

        }
};

int main()
{
    Rational r1(4,6), r2(6,6), r3;
    r3 = r1 + r2;
    return 0;
}