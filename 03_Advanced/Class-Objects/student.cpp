#include<iostream>
#include<string>

using namespace std;

class student{
    /* In public, all are attributes */
    // public : access specifier
    public:
        // Defining Data Member or Data Attributes
        string StudentName;
        int RollNumber;
        string Address;
        // Defining member functions or function Attributes
        void PrintDetails()
        {
            cout<<"Roll Number is: "<<RollNumber <<endl;
            cout<<"Name is: "<<StudentName <<endl;
            cout<<"Address is: "<<Address <<endl;
        }

} student1;

int main()
{
    student1.StudentName = "Google Sharma";
    student1.RollNumber = 64;
    student1.Address = "Muzaffarpur";
    student1.PrintDetails();

    return 0;
}