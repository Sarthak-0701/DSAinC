#include<stdio.h>
#include<conio.h>

#define MAX_SIZE 100
int stack[MAX_SIZE];
int top = -1;

void push(int item){
    if(top == MAX_SIZE-1){
        printf("Stack Overflow \n");
        return;
    }
    stack[++top] = item;
    printf("%d is inserted in the stack.\n", item);
}

void pop(){
    if(top == -1){
        printf("Stack Underflow \n");
        return;
    }
    int item = stack[top--];
    printf("%d is deleted from the stack.\n", item);
}

void display(){
    if(top == -1){
        printf("Stack is Empty \n");
        return;
    }
    printf("Stack Elements : ");
    for(int i = 0; i <= top; i++){
        printf("%d ",stack[i]);
    }
    printf("\n");
}

int main(){

int choice, item;
printf("1.Push \n2.Pop \n3.Display \n4.Exit \n");
while(1){
    printf("Choose Option : "); 
    scanf("%d",&choice);

    switch (choice) {
        case 1:
        printf("Enter the element to insert : ");
        scanf("%d",&item);
        push(item); 
        break;
        
        case 2:
        pop();
        break;

        case 3: 
        display();
        break;

        case 4:
        return 0;

        default:
        printf("Invalid Choice \n");
        }
    }
    return 0;
}