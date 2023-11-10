// Travesing Array Elements 

#include<iostream>
using namespace std;

int main()
{
    int i, size, nums[20];

    cout<<"\nEnter the lenght of Array: ";
    cin >> size;

    cout << "\nEnter Array elements: ";
    for ( i = 0; i < size; i++)
    {
        cout << "\nnum["<<i<<"]: ";
        cin >> nums[i];
    }
    cout << "Your Array is: ";
    for ( i = 0; i < size; i++)
    {
        cout<<nums[i] << " ";
    }
    
    return 0;
}