#include <bits/stdc++.h>
using namespace std;

void split(string const &str, const char delim, vector <string> &out ) {  
    stringstream s(str);

    string s2;  
    while(getline(s, s2, delim) )  
    {  
        out.push_back(s2); // store the string in s2  
    }  
}  
int main(int argc, char const *argv[])
{
	string str = "Learn How to split a string in C++";
	int pos = str.find("Learn");
	cout << string::npos << endl;
	if (pos != string::npos)
		cout << pos << endl;

	return 0;
}