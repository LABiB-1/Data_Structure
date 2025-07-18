#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;
int n, s, count = 0;

void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Overflow - Memory allocation failed\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    return;
}

void pop() {
    if (top == NULL) {
        printf("Underflow\n");
    }
    else {
        printf("The popped element is: %d\n", top->data);
        struct Node* temp = top;
        top = top->next;
        free(temp);
        n--;
    }
    return;
}

void display() {
    if (top != NULL) {
        printf("The elements of stack are: \n");
        struct Node* temp = top;
        while (temp != NULL) {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
    else {
        printf("The stack is empty.\n");
    }
}

void search() {
    printf("Enter the value to search: ");
    scanf("%d", &s);
    count = 0;
    struct Node* temp = top;
    while (temp != NULL) {
        if (s == temp->data) {
            count++;
        }
        temp = temp->next;
    }
    if (count > 0) {
        printf("element found.\n");
    }
    else {
        printf("not found\n");
    }
}

void countE() {
    int j = 0;
    struct Node* temp = top;
    while (temp != NULL) {
        j++;
        temp = temp->next;
    }
    printf("Total elements: %d\n", j);
}

int main() {
    int value;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &value);
        push(value);
    }
    
    display();
    pop();
    display();
    countE();
    
    return 0;
}
