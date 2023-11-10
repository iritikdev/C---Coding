#include<iostream>
using namespace std;

int main()
{
    /* Declaring & Initializing an Array: Method 1 */
    int A[3][4] = {{1,2,3,4},{4,5,6,3},{4,5,9,2}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<"A["<<i<<"]"<<"["<<j<<"]: "<<A[i][j]<<" ";
        }
        cout<<"\n";
    }

    /* Method 2: Creating a Pointer Array in Stack */
    int *B[3];

    /* Array:  created in HEAP */
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];
    
    /* Initializing value */
    cout<<"\n Enter 2D Array elements: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
             cout<<"\n B["<<i<<"]"<<"["<<j<<"]: ";
             cin>>B[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
             cout<<B[i][j]<<" ";
             
        }
        cout<<"\n";
    }

    /* Method 3: using double pointer*/
    int **C; // created in stack
    C = new int *[3];
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];
    
    return 0;
}