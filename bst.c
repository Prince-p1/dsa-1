#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* left;
    struct node*right;
};
struct node* create(int data){
    struct node* new=(struct node *)malloc(sizeof(struct node));
    new->data=data;
    new->left=NULL;
    new->right=NULL;
    return new;
}
void preorder(struct node * root){
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
    // printf("\n");
}
void inorder(struct node * root){
    if(root!=NULL){
        
        preorder(root->left);
        printf("%d ",root->data);
        preorder(root->right);
    }
    // printf("\n");
}
void postorder(struct node * root){
    if(root!=NULL){
        preorder(root->left);
        preorder(root->right);
        printf("%d ",root->data);
    }
    // printf("\n");
}
struct node*search(struct node*root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    else if(key<root->data){
        search(root->left, key);
    }
    else{
        search(root->right, key);
    }
}
void inseart (struct node*root,int key){
    struct node *prev=NULL;
    if(root!=NULL){
        prev=root;
        if(root->data==key){
            printf("Cannot insert");
            return;
        }
        else if(root->data>key){
            root=root->left;
        }
        else{
            root=root->right;

        }

    }
    struct node*new=create(key);
        if(prev->data<key){
            prev->right=new;
        }
        else{
            prev->left=new;
        }
    }

int main(){
    struct node*p=create(50);
    struct node*p1=create(60);
    struct node*p2=create(40);
    struct node*p3=create(65);
    struct node*p4=create(30);
    
    p->left=p4;
    p4->right=p2;
    p->right=p1;
    p1->right=p3;
    inseart(p,80);
    preorder(p);
    printf("\n");
    postorder(p);
    printf("\n");
    inseart(p,80);
    inorder(p);
    printf("\n");
    struct node*n=search(p,100);
    if(n!=NULL){
        printf("found %d\n",n->data);
    }
    else{
        printf("not found");
    }
    
    return 0;
}