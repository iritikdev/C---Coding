/* Display linked list using recursive function call */

#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
} *first;

/* Creating a linked list------------------ */
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
/* Display the element linked list ------------------ */
void display(struct Node *p) {
    while (p != NULL)
    {
        cout << p->data << " " ;
        p = p->next;
    }  
}

void RecursiveDisplay(struct Node *p) {
    if (p != NULL)
    {
       cout << p ->data << " ";
       RecursiveDisplay(p -> next);
    }    
}

void ReverseDisplay(struct Node *p) {
    if (p != NULL)  
    {
        ReverseDisplay(p->next);
        cout << p->data << " ";
    }  
}

/* Sum of All element in a linked list ------------------ */
int Add(struct Node *p) {
    int sum = 0;
    while (p)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int RecursiveAdd(struct Node *p) {
    if (p)
    {
        return RecursiveAdd(p->next) + (p->data);
    }
    return 0;
    
}

/* Count Element of Linked list ------------------ */
int Count(struct Node *p) {
    int count = 0;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }
    return count;   
}

int RecursiveCount(struct Node *p) {
    if (p)
        return RecursiveCount(p->next) + 1;
    return 0;
}

/* Maximum element in Linked list -------------- */

int Max(struct Node *p) {
    int m = INT16_MIN;
    while (p)
    {
        if (p->data > m) 
            m = p->data;
        p = p->next;  
    }
    return m;  
}

int rMax(struct Node *p) {
    int x = 0;
    if (p == NULL) return INT16_MIN;  
    x = rMax(p->next);
    return (x > p->data) ? x : (p->data); 
}

/* Minimum element in Linked list -------------- */
int Min(struct Node *p) {
    int m = INT16_MAX;
    while (p)
    {
        if (p->data < m) 
            m = p->data;
        p = p->next;  
    }
    return m;  
}

int rMin(struct Node *p) {
    int x = 0;
    if (p == NULL) return INT16_MAX;  
    x = rMin(p->next);
    return (x < p->data) ? x : (p->data); 
}

/* Searching in Linked List -------------------------- */
struct Node * Search(struct Node *p, int key) {
    while (p != NULL)
    {
        if (key == p->data) return p;
        p = p ->next;
    }
    return NULL;
}
struct Node * rSearch(struct Node *p, int key) {
    if (p == NULL) return NULL;
    
    if(key == p->data) return p;

    return rSearch(p->next, key);
    
}

/* Searching in Linked List (move to head) ----------- */

struct Node * MTHSearch(struct Node *p, int key) {
    struct Node *q = NULL;
    while (p != NULL)
    {
        if(key == p->data) {
            q->next = p->next;
            p->next = first;
            first = p;
        }
        q = p;
        p = p->next;
    }   
}
void insert(struct Node *p, int index, int x) {
    struct Node *t;
    if (index < 0 || index > Count(p)) return;
    t = new Node;
    t->data = x;
    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else {
        for (int i = 0; i < index-1; i++)
        {
           p = p->next;
           t->next = p->next;
           p->next = t;
        }
        
    }
      
}

/* main function  */
int main()
{
    // int A[] = {4,5,8,4,9};
    
    insert(first,0,7);
    insert(first,0,1);
    insert(first,2,3);
    insert(first,3,5);
    insert(first,4,9);
    ReverseDisplay(first);
    
    return 0;
}
