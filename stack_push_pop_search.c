#include<stdio.h>
#define size 10
int top = -1;
int stack[size], n, s, count =0;
void push(int value){
    if(top>=size-1){
        printf("Overflow");
    }
    else{
    top++;
    stack[top]=value;
    }
    return;
}


void pop(){
if(top<=-1){
    printf("Underflow");

    }
    else{
    printf("The popped element is: %d\n", stack[top]);
    top--;
    n--;
    }
    return;}
void display(){
    if(top>=0){
        printf("The elements of stuck are: \n");
        for (int i=0;i<n;i++){
            printf("%d\n",stack[i]);
        }
        }
        else{
        printf("The stuck is empty. \n");}}


void search(){
    printf("Enter the value to search: ");
    scanf("%d", &s);
    for(int i=0;i<=top;i++){
    if(s == stack[i]){
    count++;
    }
   }
    if(count>0){
    printf("element found.");}
    else{
    printf("not found");
    }
    }

void countE(){
int j=0;
 for(j=0; j<=top;j++);
  printf("Total elements: %d", j);
  }



int main(){
    int value;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(int i=0; i<n;i++){
        printf("Enter value %d: ", i+1);
        scanf("%d", &value);
        push(value);
        }
        display();
        pop();
        display();
        countE();
}
