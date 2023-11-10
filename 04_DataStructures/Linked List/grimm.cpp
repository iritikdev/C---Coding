#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
} *first;

void create(int A[], int n) {
    int i;
    struct Node *temp, *last;

    /* creating a Node */
    first = new Node;

    /* Initializing the Node */
    first->data = A[0];
    first->next = NULL;

    last = first;

    for(i = 1 ; i<n; i++) {
        temp = new Node;
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void display(struct Node *p) {
    while (p != NULL)
    {
        cout << p->data << " " ;
        cout << endl;
        cout << p->next << " ";
        p = p->next;
    }
    
}
int main()
{
    int A[] = {4,5,8,9,6,1};
    create(A, 6);
    display(first);
    return 0;
}
