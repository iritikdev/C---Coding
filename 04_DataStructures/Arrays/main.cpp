#include<bits/stdc++.h>
using namespace std;

int main() {
    // datatype array_name[size];
    int nums[5];


    // write data into Array
    nums[0] = 10;
    nums[1] = 20;
    nums[2] = 30;

    // for(int i = 0; i < 5; i++) {
    //     cout << "nums[" << i << "] : " << nums[i] << endl;
    // }
    // storing array element
    /*
    nums[0] = 10;
    nums[1] = 20;
    nums[2] = 30;
    */

    // Access Elements in Aarray
    // arrra[index]

    /*
    cout << nums[0] << endl;
    cout << nums[1] << endl;
    cout << nums[2] << endl;
    */

    // Array Initialization
    //int marks[4] = {10, 20, 30, 40};

    // another way : without mentioned length
    //int ages[] = {45, 9, 6, 12};

    // here, declare array length of 6 but put only 3 element.
    //int nums[6] = {4, 5, 6};

    /*
    const int data[] = {4, 5, 6, 9, 6, 3, 1};
    data[1] = 5;
    */

    int scores[]{4, 5, 8, 9, 6, 2};
    int sum{0};

    for(int element : scores)
        sum += element;

    cout << "Score sum: " << sum << endl;
    return 0;
}