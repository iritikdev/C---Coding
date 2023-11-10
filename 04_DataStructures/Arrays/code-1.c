#include<stdio.h>
#include<stdlib.h>

int main()
{
    //static Array
    int Arr[] = {4,5,9,6,3};
    for (int i = 0; i < 5; i++) {
        printf("%d ", Arr[i]);
    }
    //Dynamic Array
    int *ptr; // stack memory: 4 Bytes, same as sizeof(int)
    ptr = (int *)malloc(5*sizeof(int)); // created in heap
    ptr[0] = 4;
    ptr[1] = 8;
    ptr[2] = 9;
    ptr[3] = 6;
    ptr[4] = 2;
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    
    return 0;
}