// Search element in Array 

#include<iostream>
using namespace std;

int main()
{
    string students[] = {"Ritik", "Ashu", "Roshan", "Rahim"};
    string student_search_name;
    cout << "Enter name to find: ";
    cin >> student_search_name;
    for(string student : students )
    {
        if(student_search_name == student)
        {
            cout << "Student found!"<<endl;
            exit(0);
        }
    }
    cout << "Student you have entered is not in Database.";
    return 0;
}