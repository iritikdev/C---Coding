#include<iostream>
using namespace std;

struct Matrix {
    int Arr[10];
    int Dimension;
};

void setMatrix(struct Matrix *m, int i, int j, int x) {
    if(i == j) m->Arr[i-1] = x;
}
int getMatrix(struct Matrix *m, int i, int j) {
    if(i == j) return m->Arr[i-1];
    else return 0; 
}
void DisplayMatrix(struct Matrix m) {
    for (int i = 0; i < m.Dimension; i++)
    {
        for (int j = 0; j < m.Dimension; j++)
        {
            if(i == j) cout<<m.Arr[i]<<" ";
            else cout<<"0 ";
        }
        cout<<endl;       
    }   
}
int main()
{
    struct Matrix m;
    int Array[] = {4,5,6,9,8,2};
    
    m.Dimension = sizeof(Array)/sizeof(Array[0]);

    for (int i = 1; i <= m.Dimension; i++) {
        setMatrix(&m,i,i,Array[i-1]);
    }

    DisplayMatrix(m);
    return 0;
}