#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // Power functions
    // ------------------------------------
    cout << pow(2, 5) << endl;
    cout << pow(5.0, 2.0) << endl;
    cout << pow(5.0, 2.5) << endl;
    cout << pow(2.5, 2.5) << endl;

    /*
    Nearest integer floating point operations
    -------------------------------------------
        ceil - nearest integer not less than the given value
        floor - nearest integer not greater than the given value
        trunc - nearest integer not greater in magnitude than the given value
    */

    cout << ceil(4.2) << endl; // 5
    cout << floor(4.2) << endl; // 4
    cout << trunc(4.9) << endl; // 4
    cout << round(2.3) << endl; // 2


    /*
    abs(+3) = +3
    abs(-3) = +3
    */
    return 0;
}
