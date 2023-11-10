// Given an array A of size N of integers. Your task is to find the minimum and maximum
// elements in the array.

// Example 1:
// -----------------
// Input:
// N = 6
// A[] = {3, 2, 1, 56, 10000, 167}
// Output:
// min = 1, max =  10000

#include<iostream>
using namespace std;

struct Pair {
    int min;
    int max;
};

struct Pair getMinMax(int Arr[], int n) {
    struct Pair pair;
    if(n == 1) {
        pair.min = Arr[0];
        pair.max = Arr[0];
    }
    if(Arr[0] < Arr[1]) {
        pair.min = Arr[0];
        pair.max = Arr[1];
    }
    else {
        pair.min = Arr[1];
        pair.max = Arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (Arr[i] > pair.max)    
            pair.max = Arr[i];
             
        else if (Arr[i] < pair.min)    
            pair.min = Arr[i];
    }
    
    return pair;
}
int main()
{
    int Arr[] = {7,8,5,6,2,1};
    int n = sizeof(Arr) / sizeof(Arr[0]);
    struct Pair p = getMinMax(Arr, n);
    // cout<<p.max<<" "<<p.min;
    cout<<8/3<<endl;
    cout<<8%3;
    return 0;
}