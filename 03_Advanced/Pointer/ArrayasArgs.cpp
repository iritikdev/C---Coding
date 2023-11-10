#include<iostream>
using namespace std;

int SumOfElement(int A[], int length) { /* "int *A" or "int A[]" is same */
    int sum = 0;
    for(int i = 0; i < length; i++) {
        //sum += *(A+i); // A[i] is *(A+i)
        cout<<(int)(A+i)<<endl;
    }
    return sum;
}

int Double(int A[], int length) {
    for (int i = 0; i < length; i++)
    {
       A[i] =2*A[i] ;
    }
    
}

int main()
{
    int A[] = {1,2,3,4,5};
    int length = sizeof(A)/sizeof(A[0]);
    //cout<< SumOfElement(A, length); // &A[0]
    Double(A,length);
    for (int i = 0; i < length; i++)
    {
        cout<<A[i]<<endl;
    }
    

    return 0;
}

/*
    when you pass Array as fuction argument. It will not copy entire array to formal Parameter
    At the time calling it passes address of first element. it uses call by references.
*/