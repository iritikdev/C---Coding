/* Using For Each Loop in C++ */
/*
    

*/
#include<iostream>
using namespace std;

int main()
{
    int nums[] = {4,5,6,7,8};
    for(int i : nums){ // for every i in nums
        cout << i << " ";
    }
    return 0;
}