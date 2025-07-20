#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *ptr;
}*top,*top1,*temp;
int count=0;
void push(int data)
{
    if(top==NULL)
    {
        top=(struct node*)malloc(1*sizeof(struct node));
        top->ptr=NULL;
        top->data=data;
    }
    else
    {
        temp=(struct node*)malloc(1*sizeof(struct node));
        temp->ptr=top;
        temp->data=data;
        top=temp;
    }
    count++;
}
void pop()
{
    top1=top;
    if(top1==NULL)
    {
        printf("Underflow.\n");
        return;
    }
    else
        top1=top1->ptr;
    printf("\n Popped value: %d\n",top->data);
    free(top);
    top=top1;
    count--;
}
void display()
{
    top1=top;
    if(top1==NULL)
    {
        printf("The stack is empty.\n");
        return;
    }
    while(top1!=NULL)
    {
        printf("%d ",top1->data);
        top1=top1->ptr;
    }
}
void empty()
{
    top1=top;
    while(top1!=NULL)
    {
        top1=top->ptr;
        free(top);
        top=top1;
        top1=top1->ptr;
    }
    free(top1);
    top=NULL;
    count=0;
    printf("All elements are deleted.\n");
}
void search()
{
    int value;
    printf("Enter an element to search: ");
    scanf("%d",&value);
    top1=top;
    if(top1==NULL)
    {
        printf("The stack is empty.\n");
        return;
    }
    while(top1!=NULL)
    {
        if(top1->data==value)
        {
            printf("%d is found.\n ",top1->data);
            return;
        }
        else
            top1=top1->ptr;
    }
    printf("Element not found in the stack.\n");

}
int main()
{
    int ch,number;
    printf("Select the operation you want to do: \n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Display\n");
    printf("4. Empty\n");
    printf("5. Search\n");
    printf("6. Exit\n");
    top=NULL;
    while(1)
    {
        printf("Enter choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter a data: ");
                scanf("%d",&number);
                push(number);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                empty();
                break;
            case 5:
                search();
                break;
            case 6:
                exit(0);
            default:
                printf("invalid choice.");
                break;


        }
    }
}
