#include<bits/stdc++.h>
using namespace std;

// 
// // Sorting - O(nlogn + n)
// int majorityElements(int items[], int n) {
//     sort(items, items + n);

//     int index = n / 2 - 1;
//     int mid = items[index];

//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         if(items[i] == mid)
//             count++;
//     }

//     if(count > index)
//         return mid;

//     return -1;
// }

// Brute Force - O(n^2)
// 2 5 6 9 7
int majorityElements(int items[], int n) {
    int max = 0;
    int element;
    int occurence;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
           if(items[i] == items[j])
               count++;
        }
        if(count > max) {
            occurence = max = count;
            element = items[i];
        }
    }
    if(occurence > n/2)
        return element;
    return -1;
}


int main(int argc, char const *argv[]) {
    int array[] = {8, 2, 8, 3, 8, 2, 8, 8};

    cout<< majorityElements(array, size(array));
    return 0;
}