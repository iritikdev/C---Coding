#include<iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr) {
    cout<<"\n Entered Elements are: ";
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
        {
            arr->A[i] = arr->A[i+1];
        }
        
    }
    return x;
    
}

int main()
{
    struct Array arr;
    
    int NumberOfElements;
    
    arr.size = 10;
    arr.A = new int[arr.size];
    arr.length = 0;

    cout<<"\n Enter number of Elements: ";
    cin>>NumberOfElements;

    cout<<"\n Enter Array elements: ";
    for (int i = 0; i < NumberOfElements; i++)
    {
        cout<<"\n Array["<<i<<"]: ";
        cin>>arr.A[i];
    }
    arr.length=NumberOfElements;
    
    Delete(&arr, 2);
    Display(arr);
    return 0;
}