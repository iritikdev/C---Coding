#include<iostream>
#include <string>
#include<cstring>
using namespace std;

int main()
{
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char name[20];

    cout << "Enter the String: ";
    cin.getline(name,20);

    // this method only work for string class methods
    cout << "Lenght of given string is: " << txt.length() << endl;
    cout << "Lenght of given string is: " << txt.size()<< endl;

    // using strlen() method that is defined in <cstring> header file.
    cout << "Lenght of given string " << name << " is: " << strlen(name) << endl;
    return 0;
}

/*
You might see some C++ programs that use the size() function to get the length 
of a string. This is just an alias of length().    
It is completely up to you if you want to use length() or size():
*/