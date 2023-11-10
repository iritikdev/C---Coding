#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

    /*
    Variable : A named peice of memory that you use to store specific type of data.

    for example : int age = 8;
                  As we assume int takes 2 bytes to store data.
                  |0|0|0|0|0|0|0|0|0|0|0|0|1|0|0|0|
                  each cell contain 1 bit of data(0 or 1)

    if you don't initailize variable. So it contain garbage value. - warning

        1. Vaiable braced initialization
        --------------------------------------
        int age; ->  // it way contain garbabe value
        int age = 0; // initializes to zero.
        int age{};   // initializes to zero.
        int age {10};// initializes to 10.

        int d{2.3} // ERROR or WARNING - wider range that int

        2. Functional variable initialization
        ---------------------------------------
        int a(5);
        int b(6);

        int sum(a+b);

        int d(5.2) // information lost. less safe than braced initializers


        3. Assignment initialization
        ----------------------------------------

        int a = 2;
        int b = 3
        int c = a + b;

        int d = 2.3;



    Size of type in memory : sizeof()

        sizeof(int); // 4
        sizeof(float); // 4
        sizeof(char); // 1
        sizeof(double);// 8
        sizeof(bool) ; // 1

    int   -> 4 bytes | contain interger type data.
    float -> 4 bytes | 7.23, 78.2 |
    char
    double
    void
    auto
    bool

    */

    /*
    int a = 15; // decimal
    int b = 017;  // octal(0)
    int c = 0x0f; // hexadecimal(0x)
    int d = 0b00001111; // Binary(0b) - c++ 14

    cout << a << endl
         << b << endl
         << c << endl
         << d << endl;
    */
   /*
    int a{10};
    int b{20};

    int result {a + b}; // 30

    int c = 2.2; // 2
    int d{2.2};  // error
    cout << c << endl;
    */

    


    return 0;
}
