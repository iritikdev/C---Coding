#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int nums[5] = {7, 8, 9, 6, 4};

    for (size_t i = 0; i < 5; i++) {
        cout << nums[i] << " ";
    }
    for (auto &&i : nums) {
        cout << i << endl;
    }
    
    
    return 0;
}
