#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void LT(struct node *ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
struct node *CreateNode(int data){
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->next=NULL;
    return n;
}


int main(){
    struct node*head;
    struct node*second;
    struct node*third;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    head->data=6;
    head->next=second;
    second->data=8;
    second->next=third;
    third->data=5;
    LT(head);
    

    
    return 0;
}