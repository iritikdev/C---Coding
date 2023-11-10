#include <bits/stdc++.h>
using namespace std;

void reverse(string &str)
{
    // create an empty stack
    stack<int> s;
 
    // Push each character in the string to the stack
    for (char ch: str) 
        s.push(ch);
    
 
    // pop all characters from the stack and
    // put them back to the input string
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = s.top();
        s.pop();
    }
}
 

int main(int argc, char const *argv[])
{
	string name = "Ritik";
	reverse(name);

	cout << name;
	return 0;
}