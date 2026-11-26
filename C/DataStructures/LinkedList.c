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

//Insertion at a random Position
struct Node* InsertPosition(struct Node *head, int value, int pos){
    if(pos < 1){
        printf("Invalid Position!\n");
        return head;
    }
    if(pos == 1){
        return InsertBeginning(head, value);
    }
    struct Node *temp = head;
    for(int i = 1; i < pos-1 && temp != NULL; i++){
        temp = temp->next;
    }
    if(temp == NULL){
        printf("Invalid Position!\n");
        return head;
    }
    struct Node *newNode = malloc(sizeof(struct Node));
    if(newNode==NULL){
        printf("Memory Allocation Failed.\n");
        return head;
    }
    newNode->data=value;
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

//Deletion in the Beginning
struct Node* deleteBeginning(struct Node *head){
    if(head==NULL){
        printf("Empty List!\n");
        return NULL;
    }
    struct Node *temp = head;
    head=head->next;
    free(temp);
    return head;
}