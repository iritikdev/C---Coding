#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str) {
	for(int i = 0, j = str.length() - 1; i < j; i++, j--) 
		if(str[i] != str[j]) return false;
	
	return true;
}

void reverseString(char S[]) {
	int len = strlen(S);
	for(int i = 0; i < len/2; i++) 
		swap(S[i], S[len-i-1]);
}

int main(int argc, char const *argv[]) {
	cout << isPalindrome("ABCDCBA") << endl; 
	cout << isPalindrome("ABCD") << endl; 

	char name[] = "Ritik";
	reverseString(name);
	cout << name;
	return 0;
}