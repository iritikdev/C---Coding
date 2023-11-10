#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    // string: string variable contains collection of characters.
    string name;
    cout << "Enter username: ";

    cin >> name;
    string message = "Hello";

    cout << message <<" "<< name << endl;
    return 0;
}
