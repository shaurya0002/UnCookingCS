#include <stdio.h>
#include <stdbool.h>

#define MAX 100

int stack[MAX];
int top = -1;

bool isFull(){
    return top == MAX - 1;
}

bool isEmpty(){
    return top == -1;
}

void push(int value){
    if(isFull()){
        printf("Stack Overflow, cannot Push %d\n", value);
        return;
    }
    stack[++top] = value;
    printf("%d is pushed to Stack\n", value);
}

int pop(){
    if(isEmpty()){
        printf("Stack Underflow, Stack is empty\n");
        return -1;
    }
    return stack[top--];
}

int peek(){
    if(isEmpty()){
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
}

void display(){
    if(isEmpty()){
        printf("Stack is empty\n");
        return;
    }
    printf("Stack Elements: ");
    for(int i = top; i >= 0; i--){
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main(){
    push(10);
    push(20);
    push(30);
    
    display();

    printf("Top element is %d\n", peek());
    printf("Popped element is %d\n", pop());

    display();
    return 0;
}