#include <bits/stdc++.h>
using namespace std;

bool isbalanced(string expression) {
	stack<char> s;

	for(char ch: expression) {
		if (ch == '(' || ch == '{' || ch == '[' || ch == '<')
			s.push(ch);
		if (ch == ')' || ch == '}' || ch == ']' || ch == '>') {
			if(s.empty()) return false;
			auto top = s.pop();
			if((top == ')' && top != '(') || (top == '}' && top != '{') ||)
				return false;
		}
	}

	return s.empty();
}

int main(int argc, char const *argv[]) {
	cout << isbalanced("{(<>)}}");
	return 0;
}