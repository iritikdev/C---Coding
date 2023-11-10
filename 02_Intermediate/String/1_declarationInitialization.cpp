/* In C++, String declaration : 
    1. Using Character Array & 
    2. class string
*/

#include<iostream>
using namespace std;

int main()
{
    char letter = 'G';
    // Output: G

    char word[10] = "Google";
    // Output: Google

    char name[] = "Hrithik";
    // Output: Hrithik

    char username[] = {'i','h','r','i','t','h','i','k','D','e','v','\0'};
    // Output: ihrithikDev

    // using ASCII Code
    char ASCII_NUM[] = {65,66,67,68,0}; // or {65,66,67,68,'\0'}
    // Output: ABCD

    cout << letter <<endl;
    cout << word <<endl;
    cout << name <<endl;
    cout << username <<endl;
    cout << ASCII_NUM <<endl;
    
    return 0;

}