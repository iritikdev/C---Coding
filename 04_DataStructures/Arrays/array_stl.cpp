#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

	array<int, 5> list = {4,8,9,6,2};

	for(auto itr = list.begin(); itr != list.end(); itr++)
		cout << *itr <<" ";

	cout << endl;

	// for(auto itr = list.rbegin(); itr != list.rend(); itr++)
	// 	cout << *itr <<" ";

	array<int, 5> a;
	a.fill(5); // 5 5 5 5 5

	for(auto &n:a) cout << n << " ";
	cout << endl;

	array<int, 5> b; // initializes with garbage value

	for(auto &n:b) cout << n << " ";
	cout << endl;

	array<int, 5> c = {4, 5, 2}; // 4 5 2 0 0
	for(auto &n:c) cout << n << " ";
	


}