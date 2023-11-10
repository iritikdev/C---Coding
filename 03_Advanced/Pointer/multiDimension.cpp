#include<iostream>
using namespace std;

int main()
{
    int B[2][3] = {{2,3,5},{8,9,6}};
    for(int i = 0; i<2; i++) {
        for (int j = 0; j < 3; j++)
        {
            cout<<(int)(&B[i][j])<<" ";
        }
        
    }
    return 0;
}