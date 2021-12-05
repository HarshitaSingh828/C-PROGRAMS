#include <stdio.h>
#include<stdlib.h>

// Linked List Creation Practice in C.

struct Node{
int data;
struct Node* next;
};

void display(struct Node* ptr){
    while(ptr!= NULL){
        printf("%d\n",ptr->data);
        ptr = ptr-> next;
    }
}
struct Node* insertAtFirst(struct Node*head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> data = data;
    ptr-> next = head;
    return ptr;
}

struct Node* insertAtIndex(struct Node* head, int data, int index){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    int i = 0;
    while(i != index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node* insertAtEnd(struct Node* head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p= head;
    while(p->next != NULL){
        p= p-> next;
    }
    p->next = ptr;
    ptr->data = data;
    ptr->next = NULL;
    return head;
}
 
struct Node* insertAfterNode(struct Node* head, struct Node* prevNode, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> data = data;
    ptr->next = prevNode->next;
    prevNode-> next = ptr;
    return head;
}
int main(){
struct Node* head;
struct Node* second;
struct Node* third;

head = (struct Node*)malloc(sizeof(struct Node));
second = (struct Node*)malloc(sizeof(struct Node));
third =  (struct Node*)malloc(sizeof(struct Node));


head-> data = 12;
head->next = second;

second->data = 13;
second ->next = third;

third -> data = 14;
third -> next = NULL;

// display(head);
//  head = insertAtFirst(head, 56);
// head = insertAtIndex(head, 89,1);
// head = insertAtEnd(head,68);
head = insertAfterNode(head, second, 18);
 display(head);
return 0;
}