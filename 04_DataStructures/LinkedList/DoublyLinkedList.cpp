#include <bits/stdc++.h>
using namespace std;

class Node {
	public:
		int data;
		Node *next, *prev;

	Node(int item) {
		data = item;
		next = prev = NULL;
	}
};

class DoublyLinkedList {
	public:
		Node *head;
		Node *tail;

		int size;

	DoublyLinkedList() {
		head = tail = NULL;
		size = 0;
	}

	void print() {
		Node *current = head;
		for(int i = 0; i < size; i++) {
			cout << current->data << " ";
			current = current->next;
		}
	}

	void addFirst(int item) {
		Node *node = new Node(item);

		if(head == NULL) {
			head = tail = node;
		} else {
			node->next = head;
			head->prev = node;
			head = node;
		}
		size++;
	}

	void addLast(int item) {
		Node *node = new Node(item);

		if(head == NULL) 
			head = tail = node;
		else {
			tail->next = node;
			node->prev = tail;
			tail = node;
		}
		size++;
	}

	void reversePrint() {
		Node *current = tail;

		while(current != NULL) {
			cout << current->data << " ";
			current = current->prev;
		}
	}

	bool contains(int target) {
		Node *current = head;
		while(current != NULL) {
			if(current->data == target)
				return true;
			current = current->next;
		}
		return false;
	}

	void removeFirst() {
		if(head == NULL) {
			cout << "empty" <<endl;
			exit(0);
		}
		Node *second = head->next;
		head->next = NULL;
		second->prev = NULL;
		head = second;
		size--;
	}

	void removeLast() {
		if(head == NULL) {
			cout << "empty" <<endl;
			exit(0);
		} 
			
		Node *secondLast = tail->prev;

		secondLast->next = NULL;
		tail->prev = NULL;
		tail = secondLast;
		size--;
	}
};

int main(int argc, char const *argv[])
{	
	DoublyLinkedList list;
	
	list.addLast(10);
	list.addLast(20);
	list.addLast(30);
	list.addLast(40);


	cout << "head: " << list.head->data << endl;
	cout << "tail: " << list.tail->data << endl;
	cout << "size: " << list.size << endl;
	list.print();

	return 0;
}