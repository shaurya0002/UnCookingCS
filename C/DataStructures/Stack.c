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

void pop(int value){
    if(isEmpty()){
        printf("Stack Underflow, Stack is empty\n");
        return;
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