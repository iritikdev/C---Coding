#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

    Node(int item) {
        data = item;
        next = NULL;
    }
};

class SinglyLinkedList {
    public: 
        Node *head;
        Node *tail;
        int size;
        
    SinglyLinkedList() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    // add a node to linked list
    void addFirst(int item) {
        // create a new node
        Node *node = new Node(item);

        // if linkedlist is empty
        if(head == NULL) {
            head = tail = node;
        } else {
            node->next = head;
            head = node;
        }
        size++;
    }

    // Append a node to linked list
    void addLast(int item) {
        Node *node = new Node(item);

        if(head == NULL) {
            head  = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
        size++;
    }

    // checks linked list is empty
    bool isEmpty() {
        return head == NULL;
    }

    // print all node
    void print() {
        Node *current = head;
        while(current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
    }

    // contains
    bool contains(int item) {
        Node *current = head;
        while(current != NULL) {
            if(current->data == item)
                return true;

            current = current->next;
        }
        return false;
    }

    // return length of linked list
    int length() {
        return size;
    }

    // Remove first node from linked list
    void removeFirst() {
        if(isEmpty()) {
            cout << "Empty" << endl;
            return;
        }
        Node *second = head->next;
        head->next = NULL;
        head = second;
        size--;
    }

    // Remove last node from linked list
    void removeLast() {
        
        Node *current = head;
        while(current != NULL) {
            if(current->next == tail)
                break;
            current = current->next;
        }
        tail = current;
        tail->next = NULL;
        size--;
    }

    // convert Linked List to Array
    int* toArray() {
        int *array = new int[size];
        Node *current = head;
        int index = 0;
        while(current!= NULL) {
            array[index++] = current->data;
            current = current->next;
        }
        return array;
    }

    // Reverse a Linked List
    void reverse() {
        
        Node *p1 = NULL;
        Node *p2 = NULL;
        Node *current = head;

        while(current != NULL) {
            p1 = p2;
            p2 = current;
            current = current->next;

            p2->next = p1;
        }
        tail = head;
        head = p2;
    }

    // kth node from the end
    int getKthNodeFromTheEnd(int k) {
        if(isEmpty()) {
            cout << "list is empty." << endl;
            return 0;
        } 

        Node *first = head;
        Node *last = head;

        for(int i = 0; i < k-1; i++) {
            last = last->next;
            if(last == NULL) {
                cout << "invalid kth index" << endl;
                return 0;
            }
        }
        
        while(last != tail) {
            first = first->next;
            last = last->next;
        }

        return first->data;
    }

    // print Middle of Linked list
    void printMiddle() {
        Node *slow = head, *fast = head;

        while(fast != tail && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        cout << slow->data << endl;
    }

    // remove element by index
    void remove(int target) {

        Node *current = head;
        Node *prev = NULL;
        while(current != NULL) {
            if(current->data == target) break;
            prev = current;
            current = current->next;
        }
        if(prev == NULL) {
            // first element
            Node *second = head->next;
            current->next = NULL;
            head = second;
        } else {
            prev->next = current->next;
            current->next = NULL;
        }
        
    }
};

int main() {
    SinglyLinkedList list;

    list.addLast(10);
    list.addLast(20);
    list.addLast(30);
    list.addLast(40);
    list.addLast(50);

    

    list.print();
    return 0;
}