#include<iostream>
using namespace std;

struct Array
{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr) {
    for (int i = 0; i < arr.length; i++)
         cout<<arr.A[i]<<" ";
}

void Append(struct Array *arr, int x) {
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
}

void Insert(struct Array *arr, int index, int item) {
    if(index >= 0 && index <= arr->length) {
        for (int i = arr->length; i > index; i--)
           arr->A[i] = arr->A[i-1];
        
        arr->A[index] = item;
        arr->length++;        
    }
    else cout <<" IndexError: index is not found...";
}

int Delete(struct Array *arr, int index) {
    int x = 0;
    if (index >= 0 && index < arr->length)
    {
        x = arr->A[index];
        for (int i = index; i < arr->length-1; i++)
            arr->A[i] = arr->A[i+1];
        
        arr->length--;
        
    }
    return x;   
}
 
int LinearSearch(struct Array *arr, int key) {
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i]) 
            return i;    
    }
    return -1;   
}
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearchTransposition(struct Array *arr, int key) {
    for (int i = 0; i < arr->length ; i++)
    {
        if(key == arr->A[i]) {
            swap(&arr->A[i], &arr->A[i-1]);
            return i;
        }

    }
    
}

int LinearSearchMoveToFront(struct Array *arr, int key) {
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
        
    }
    return -1;
}

int BinarySearch(struct Array arr, int key) {
    int low=0, high=arr.length-1, mid;

    while (low <= high)
    {
        mid=(low+high)/2;
        if(key == arr.A[mid])
            return mid;
        else if(key < arr.A[mid])
            high = mid-1;
        else low = mid+1;
        
    }
    return -1;
}

int RecursiveBinarySearch(int A[], int key, int l, int h) {
    int mid;
    if (l <= h)
    {   mid = (l+h)/2;
        if(key == A[mid])
            return mid;
        else if(key < A[mid])
            RecursiveBinarySearch(A,key,l,mid-1);
        else
            RecursiveBinarySearch(A,key,mid+1,h); 
    }
    
}


int main()
{
    struct Array arr = {{2,3,5,7,8,9,12,13,15,16,19},20,11};

    cout<<"\n found at: "<<RecursiveBinarySearch(arr.A, 3, 0, arr.length-1)<<"\n";
    cout<<" After Searching: ";
    Display(arr);
    return 0;
}