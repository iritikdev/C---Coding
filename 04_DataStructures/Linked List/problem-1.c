#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main()
{
    // creating three Node;
    struct Node *first, *second, *third;
    // allocating space
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // putting data
    first->data = 20;
    second->data = 30;
    third ->data = 40;

    // linking together
    first->next = second;
    second->next = third;
    third->next = NULL;

    //display the data
    struct Node *temp = first;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}