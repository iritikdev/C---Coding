#include <bits/stdc++.h>
using namespace std;

class Stack {
	
	int capacity = 5;
	int *items = new int[capacity];
	int count = 0;

	public:
	void push(int item) {
		if(count == capacity) {
			cout << "StackOverflowError" << endl;
			exit(0);
		}
		items[count++] = item;
	}

	int pop() {
		if(isEmpty()) {
			cout << "StackUnderflowError" << endl;
			exit(0);
		}
		return items[--count];
	}

	void toString() {
		for(int i = 0; i < count; i++) 
			cout << items[i] << " ";
		cout << endl;
	}

	int peek() {
		if(isEmpty()) exit(0);
		return items[count-1];
	}
	bool isEmpty() {
		return count == 0;
	}
};

int main(int argc, char const *argv[]) {
	Stack stack;
	// stack.push(10);
	// stack.push(20);
	// stack.push(30);

	cout << stack.peek() << endl;	
	return 0;
}