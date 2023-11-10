#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    /*
    A dynamic array is an array whose size can be changed during the execution of
    the program.
    */
    vector<int> numbers = {4, 5, 6, 9, 1};

    // Accessing vectors element
    for (size_t i = 0; i < numbers.size(); i++) 
        cout << numbers[i]<<" ";
    cout << endl;
    // sorting
    sort(numbers.begin(), numbers.end());

    cout << "Sorted Array: ";
    for (size_t i = 0; i < numbers.size(); i++) 
        cout << numbers[i]<<" ";

    vector<string> fruits;

    fruits.push_back("Apple"); // ["Apple"]
    fruits.push_back("Orange"); // ["Apple","Orange"]
    fruits.push_back("Grapes"); // ["Apple","Orange","Grapes"]

    for(auto fruit : fruits)
        cout << fruit << " ";

    cout << endl;

    cout << fruits.back() << endl;

    // size 10, initial value 0
    // vector<int> v(10);

    // size 10, initial value 5
    // vector<int> v(10, 5);


    int nums[] =  {7,8,9,6,5,2};
    for(int &n : nums)
        cout << n << " ";

    return 0;
}
