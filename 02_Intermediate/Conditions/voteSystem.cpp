#include<iostream> // input-output stream
using namespace std;


int isVoter(int age) {
    if(age >= 18) return true;
    return false;
}

int main()
{
    int age;
    cout<<"Enter your Age: "; // 25
    cin>>age; // age = 25
    cout<<isVoter(age);
    return 0;
}
/*
------------------------- Assignment 1 ------------------------------------
1. WAP to check whether a person is aligible for vote or not.
2. WAP to check whether the given number is even or odd.
3. WAP to enter a character and then determine whether it is vowel or not.
4. WAP to check whether a given year is leap year or not.
5. WAP to enter any character. if the entered character is in lower case
   then convert it into uppercase and if it is a lower case charcter then 
   convert it into lowercase.

---------------------------------------------------------------------------
*/