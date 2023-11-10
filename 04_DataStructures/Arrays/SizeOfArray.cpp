#include<iostream>
using namespace std;

int main() {
    int nums[]{4,5,6,2,3,7,8};

    // int count = size(nums); // in C++ 17

    int count = sizeof(nums) / sizeof(nums[0]);

    /*
    for (size_t i = 0; i < count; i++)
        cout << "nums[" << i << "] : " << nums[i] << endl;
    */
    //Range based for loop
    for ( auto num : nums){
            std::cout << "value  : " << num << std::endl;       
    }
    
    
    
    
    return 0;
}