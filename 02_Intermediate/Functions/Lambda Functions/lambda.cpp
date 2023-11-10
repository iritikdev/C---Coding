#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	auto sayHello = []() {
    	cout << "Hello! Anonymous" << endl;
    };
    sayHello();

    [](string username) {
		cout << "Welcome " << username <<endl;
    }("Json");

    string name = "Ritik";

    [](string username) {
    	cout << "Welcome " << username <<endl;
    }(name);


    auto sum = [](int a, int b) {
		return a+b;
	};

	cout << sum(4,5) << endl;
	cout << sum(8,9) << endl;

	// explicitly type cast of return value to int
	
	auto sum = [](double a, double b) -> int {
		return a+b;
	};

	cout << sizeof(sum(4,5)) << endl;
	cout << sum(8,9) << endl;
	return 0;
}