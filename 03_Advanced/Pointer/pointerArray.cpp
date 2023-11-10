#include<iostream>
using namespace std;

void print(char *name) { // const char *name: use when if want to make contant
    while (*name != '\0')
    {
        cout<<*name;
        *name++;
    }
}

int main()
{
    char name[] = "Ritik";
    // char name[6] = "Ritik";
    // char name[] = {'R','i','t','i','k','\0'};
    // char name[6] = {'R','i','t','i','k','\0'};
    //char *name = "Ritik";
    name[0] = 'G';
    print(name);
    return 0;
}