#include<bits/stdc++.h>
using namespace std;

void insertionSort(int A[], int n) {
    for(int i=1; i < n; i++) {
        int j = i-1;
        int x = A[i];
        while (j > -1 && A[j] > x)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1] = x;
    }
}

int main()
{   
    int Arr[] = {8,4,3,7,2,1,5};
    int n = sizeof(Arr) / sizeof(Arr[0]);
    insertionSort(Arr, n);

    for (int i = 0; i < n; i++) {
        cout<<Arr[i]<<" ";
    }
    
    return 0;
}