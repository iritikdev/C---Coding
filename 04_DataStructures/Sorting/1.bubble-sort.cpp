#include<iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    bool isSwapped;
    for (int pass = 0; pass < n-1; pass++) {
        isSwapped = false;
        for (int i = 0; i < n-1-pass; i++) {
            if(arr[i] > arr[i+1]) {
                swap(&arr[i],&arr[i+1]);
                isSwapped = true;
            }
        }
        if(isSwapped == false) break;      
    }   
}

int main()
{   
    int Arr[] = {24, 18, 38, 43, 14, 40, 1, 54};
    int n = sizeof(Arr) / sizeof(Arr[0]);
    bubbleSort(Arr, n);

    for (int i = 0; i < n; i++) {
        cout<<Arr[i]<<" ";
    }
    
    return 0;
}