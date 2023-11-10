#include<iostream>
using namespace std;

int main()
{   
    /* Array A is created in stack area of memory */
    /* Vector Variables */
    int A[5] = {2,5,1,3,4};

    /* Pointer p takes memory same as int */
    int *p;

    /* with <new> keyword a Array with size 5 is created in HEAP */
    p = new int[5];

    /* Assigning value to HEAP Array */
    p[0] = 4;
    p[1] = 3;
    p[2] = 9;
    p[3] = 6;
    p[4] = 2;

    /* Print Stack Array */
    for (int i = 0; i < 5; i++) {
            cout<<A[i]<<" ";
    }
    cout<<"\n";
    /* Traverse Heap Array */
    for (int i = 0; i < 5; i++) {
            cout<<p[i]<<" ";
    }
    
    return 0;
}