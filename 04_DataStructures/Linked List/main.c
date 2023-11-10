#include<stdio.h>
#include<conio.h>
void rotate(int Arr[],int d,int n) {
    int tmp[d];
    for(int i = 0; i<d; i++) {
        tmp[i] = Arr[i];
    }
    for(int i=0; i<n; i++) {
        Arr[i] = Arr[i+d];
    }
    for(int i=n-d, j=0; i<n; i++,j++) {
        Arr[i] = tmp[j];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",Arr[i]);
    }
    
     
}
int main()
{   
    int nums[5] = {7,8,9,5,2};
    rotate(nums,1,5);
    return 0;
}