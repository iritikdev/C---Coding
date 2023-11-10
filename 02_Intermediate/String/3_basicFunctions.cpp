#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "Hrithik Sharma";
    cout << str << endl;

    /* Basic functions of string class */

    // string s;
    // s.length()
    cout << "Length of " << str << ": "<< str.length() << endl;
    cout << "Size of " << str << ": "<< str.size() << endl;
    cout << "Capacity of " << str << ": "<< str.capacity() << endl;
    str.resize(20);
    cout << "After resize the Capacity of " << str << ": "<< str.capacity() << endl;
    cout << "Max Size: "<< str.max_size() << endl;
    return 0;
}