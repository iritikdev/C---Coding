#include<iostream>
using namespace std;

class Person {
    public:
        string name;
        float height;
        int age;
    Person(string n, float h, int a) {
        name = n;
        height = h;
        age = a;
    }
    string validAge() {
        return "You have be above 18";
    }
    inline int voter();
};

int Person::voter() {
    return (age >= 18) ? true : false;
}

int main()
{   
    
    return 0;
}