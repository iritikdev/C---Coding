#include<iostream>
using namespace std;

class Diagonal {
    private:
        int n;
        int *A;
    public:
        // constructor...
        Diagonal(int n = 2) {
            this->n = n;
            A = new int[10];
        }
        // Destructor...
        ~Diagonal() {
            delete []A;
        }

        // Defining function prototype...
        void setElementById(int i, int j, int x);
        int getElementById(int i, int j);
        void Display();
};

// setElementById() : initialing the element.
void Diagonal::setElementById(int i, int j, int x) {
    if(i == j) A[i-1] = x;
}

// getElementById() function: used to get element at index.
int Diagonal::getElementById(int i, int j) {
    if(i==j) return A[i-1];
    else return 0;
}

// Display() function: Display matrix element in Proper Order.
void Diagonal::Display() {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == j) cout<<" "<<A[i]<<" ";
            else cout<<" 0 ";
        }
        cout<<endl;       
    }   
    
}
int main()
{   
    // Array Declaration for creating a Diagonal Matrix
    int Array[] = {4,6,9,3,7};

    // Getting no of Element of an Array
    int n = sizeof(Array)/sizeof(Array[0]);

    // creating a obj:matrix, type Diagonal
    Diagonal matrix(n);

    // Initializing Matrix
    for(int i=1; i <= n; i++) {
        matrix.setElementById(i,i,Array[i]);
    }

    // Display Matrix
    matrix.Display();

    // Getting Element at index M[1,1], M[2,2]
    cout<<matrix.getElementById(1,1);
    return 0;
}