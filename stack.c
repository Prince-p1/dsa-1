#include<stdio.h>
#define size 10
int stack[size];
int top=-1;
void push(){
    int data;
    printf("Enter a number");
    scanf("%d",&data);
    if(top==size-1){
        printf("Stack is Full");
    }
    else{
        top++;
        stack[top]=data;
    }
    printf("number is pushed\n");
} 
void pop()
{
    if(top==-1){
        printf("stack is empty");
    }
    int x=stack[top];
    top--;
    printf("%d popped",x);
    printf("Number is poped\n");
}
void display(){
    for(int i=0;i<=top;i++){
        printf("%d ",stack[i]);
    }
}
int main(){

    int choice;
    while(choice!=4){
    printf("Enter 1 for push 2 for pop 3 for display");
    scanf("%d",&choice);
    switch(choice){
        case 1:push();
        break;
         case 2:pop();
         break;
        break;
         case 3:display();
        break;
        default : printf("iNvalid");
        break;
    }
    }
    
    return 0;
}