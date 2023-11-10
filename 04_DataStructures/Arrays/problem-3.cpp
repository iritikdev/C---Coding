// Square root of a number
// Given an integer x, find the square root of x. 
// If x is not a perfect square, then return floor(√x).
#include<iostream>
#include<math.h>
using namespace std;

int floorSqrt(int x) {
    return sqrt(x);
}
int main()
{
    cout<<floorSqrt(5);
    return 0;
}