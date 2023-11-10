#include<iostream>
using namespace std;

int totalCount(int Arr[], int N, int K) {
    int q = 0, r = 0, count=0;
    for (int i = 0; i < N; i++) {
        q = Arr[i] / K;
        r = Arr[i] % K;
        count += q;     
        if(r!=0)
            count += 1;
    }
    return count;  
}

int main()
{   
    int Arr[] = {10, 2, 3, 4, 7};
    int n = sizeof(Arr) / sizeof(Arr[0]);
    cout<<totalCount(Arr,n,4);
    return 0;
}