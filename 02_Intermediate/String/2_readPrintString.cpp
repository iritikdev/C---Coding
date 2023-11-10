#include<iostream>
using namespace std;

int main()
{
    char name[10];

    cout << "Enter the Name: "<<endl;
    // cin>> name;
    cin.get(name,50);
    cout << "Welcome " << name <<endl;

    cin.ignore();

    cout << "Enter the Father name: "<<endl;
    cin.get(name,50);
    cout << "ok " << name <<endl;
    return 0;
}

/*
    if we use cin.get() method immediately then you have use cin.ignore() method 
    to avoid getting an unpredicted behavior.

    cin.getline(): work same as cin.get()
*/