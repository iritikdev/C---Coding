#include <bits/stdc++.h>
using namespace std;

void print(stack<int, vector<int>> s) {
	while(!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
}

int main(int argc, char const *argv[]) {
	
	stack<int, vector<int>> st;

	st.push(10);
	st.push(20);
	st.push(30);

	print(st);


	string name = "Ritik";

	for(char ch:name) cout << ch << endl;
	return 0;
}