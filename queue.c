#include<stdio.h>
#define size 10
int queue[5];
int front = -1;
int rear = -1;
void enqueue (){
    int x;
    printf("enter a number");
    scanf("%d", &x);
    if(rear == size-1){
        printf("queue is full");
    }
    else {
        rear=rear+1;
        queue[rear]=x;

    }
}
void dequeue ()
if(front == -1){
    printf("queue is empty");
    
}
else if(front==rear){
    front=-1;
    rear=-1;
    
}
else{
    int x = queue[front];
    front++;
}
printf("%d id dequeu\n");
void display()
{
    if(rear==-1){
        printf("queue is empty \n");
    }
    else{
        for(int i=front; i<=rear; i++){
            printf("%d\n", queue[i]);
        }
    }
}


int main(){
    int choice;
    while(choice!=4){
    printf("Enter 1 for enqueu 2 for deque 3 for display");
    scanf("%d",&choice);
    switch(choice){
        case 1:enquqe();
        break;
         case 2:dequeu();
         break;
        break;
         case 3:display();
        break;
        default : printf("iNvalid");
        break;
    
    return 0;
}