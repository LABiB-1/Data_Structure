#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head = NULL;

struct node *createnode(int value){
    struct node *newnode = malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("memory allocation failed.");
        exit(1);
    }
    newnode ->data = value;
    newnode ->next = NULL;
    return newnode;
}

void display(struct node *head){
    struct node *temp = head;
    printf("Linked list: ");
    while(temp != NULL){
        printf("%d ->", temp->data);
        temp =temp->next;
    }
    printf("NULL\n");
}

int main(){
    int value, n, i;
    struct node *tail =NULL;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("Enter value of node %d: ",i);
        scanf("%d", &value);
        struct node *newnode = createnode(value);
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
    }
    display(head);
    return 0;
}
