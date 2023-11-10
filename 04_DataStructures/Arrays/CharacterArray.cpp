#include<iostream>
using namespace std;

int main() {

    /*
    // Declare char Array
    char name[5] {'J', 'o', 'h', 'n'};
    
    for(auto ch : name)
        cout << ch;

    cout << endl;

    // we can direct print char Array
    cout << name << endl;
    ;

    //Change characters in our array
    name[1] = 'a';

    //Print out the array through looping
    cout << "name : ";
    for( auto c : name)
        cout << c ;
    
    cout << endl;
    */

    //If a character array is null terminated, it's called as C-String
    
    /*
    char message1 [] {'H','e','l','l','o', '\0'};
    std::cout << "message1 : " << message1 << std::endl;
    std::cout << "sizeof(message1) : " << sizeof(message1) << std::endl;
    */

    // Recommend way to use character Array
    char message[] = {"Hello! This is Ritik"};

    // for (auto ch : message) 
    //     cout << ch;

    cout << message << endl;

    return 0;
}