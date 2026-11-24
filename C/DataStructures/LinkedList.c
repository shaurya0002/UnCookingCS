#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

//Insertion at beginning
struct Node* InsertBeginning(struct Node *head, int value){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    if(newNode == NULL){
        printf("Memory Allocation Failed!\n");
        return head;
    }

    newNode->data=value;
    newNode->next=head;

    head = newNode;
    return head;
}

//Insertion at the end
struct Node* InsertionEnd(struct Node *head, int value){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    if(head == NULL){
        printf("Memory Allocation Failed!\n");
        return head;
    }

    struct Node *temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;

    return head;
}