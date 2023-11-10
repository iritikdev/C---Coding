/* Sum of Array Elements in C++ */

#include<iostream>
using namespace std;

int main()
{
    int sum = 0, num[] = {4,5,6,7,8,2};
    for (int i = 0; i < 6; i++)
    {
        sum += num[i];
    }
    cout<< "Sum is: "<<sum;
    return 0;
    
}