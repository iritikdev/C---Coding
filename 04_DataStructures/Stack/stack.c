/*
    Stack Implementation using Array
    Author : Ritik Kumar
*/

#include <stdio.h>
#include <stdlib.h>

struct Stack {
	int top;
	int size;
	int *array;
};

void create(struct Stack *st) {
    printf("Enter Size: ");
    scanf("%d", &st->size);
    st->top = -1;
    st->array = (int *)malloc(st->size*sizeof(int));
}

void Display(struct Stack st) {
    for(int i = st.top; i >= 0; i--) {
        printf("%d ", st.array[i]);
    }
    printf("\n");
}

void push(struct Stack *st, int element) {
    if(st->top == st->size - 1) 
        printf("Stack Overflow\n");
    else {
        st->top++;
        st->array[st->top] = element;
    }
}

int pop(struct Stack *st) {
    int x =  -1;
    if(st->top == -1)
        printf("Stack Underflow\n");
    else
        x = st->array[st->top--];
    return x;
}

int main() {
    struct Stack st;
    create(&st);

    push(&st,4);
    push(&st,8);
    push(&st,7);
    push(&st,9);
    push(&st,1);

    Display(st);

    return 0;
}



