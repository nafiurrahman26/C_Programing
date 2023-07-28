#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
typedef struct Node node;
int main(){
    node *head=NULL,*second=NULL,*third=NULL,*first=NULL;

    first=(node*)malloc(sizeof(node));
    
    second=(node*)malloc(sizeof(node));
    // third=(node*)malloc(sizeof(node));
    third=(struct Node *)malloc(sizeof(struct Node));
    
    first->data=1;
    first->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;
    

    while(first!=NULL){
        printf("%d->",first->data);
        first=first->next;
    }

}