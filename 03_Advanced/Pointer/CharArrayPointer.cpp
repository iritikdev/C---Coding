// Character arrays and pointers

#include<iostream>
using namespace std;

void Increment(int a) {
    a = a+1;
    cout<<(int)&a<<endl;
}

int main()
{   
    int a = 5;
    Increment(a);
    cout<<(int)&a<<endl;
    return 0;
}