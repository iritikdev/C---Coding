#include<iostream>
using namespace std;

int main()
{
    int *p = new int[5];
    int *q = new int[10];
    cout<<"\n Enter elements of Array: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<"\n Array"<<"["<<i<<"]: ";
        cin>>p[i];
    }
    /* Copying Array <p> element to Array <q> */
    for (int i = 0; i < 5; i++)
            q[i] = p[i];

    /* Release Memory of P Array */
    delete []p;

    /* Now P pointing to Array q */
    p = q;

    /* Also,Release q */
    q = nullptr; //NULL or 0
    
    p[5] = 10;
    p[6] = 12;

    for (int i = 0; i < 10; i++)
         cout<<p[i]<<" ";
    
    
    return 0;
}