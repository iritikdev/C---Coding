#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[]) {
    // String concatenation : using + operator

    string firstName = "Larry";
    string lastName = "page";

    // string fullName = firstName + " " + lastName;
    // cout << fullName;

    // Append : append()

    string fullName = firstName.append(" " + lastName);
    cout << fullName;
    return 0;
}
