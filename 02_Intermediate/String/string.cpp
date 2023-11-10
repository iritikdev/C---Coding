#include <bits/stdc++.h>
using namespace std;

// Function in string class

//	- getline()
// 	- push_back()
// 	- pop_back() 

int main(int argc, char const *argv[])
{
	string str;
	getline(cin, str);
	str.push_back('R');
	cout << str << endl;

	str.pop_back();
	cout << str << endl;
	return 0;
}