#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string str = "Google";
	cout << str.capacity() << endl;
	cout << str.length() << endl;
	str.resize(10);
	cout << str.length() << endl;


	/*
	 Operators that apply on string
	 ------------------------------
	 = assignment
	 + concatenation
	 +=
	 ==
	 <
	 <=
	 >
	 >=
	 []
	 << output
	 >> input
	 
	 */

	string first = "Ritik";
	string middle = "Kumar";
	string last = "Sharma";

	string name = first + middle;

	cout << name << " " << endl;

	string sen = "Hi! My name is Ritik name.";
	string ans = "";

	for (int i = 0; i < sen.length(); ++i)
	{
		/* code */
	}

	return 0;
}