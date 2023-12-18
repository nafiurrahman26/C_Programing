#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node node;

int main(){
    node *a,*b;
    a=(node*)malloc(sizeof(node));
    b=(node*)malloc(sizeof(node));
    a->data=2;
    b->data=4;
    a->next=b;
    b->next=NULL;

    //travers;
    node *ptr;
    ptr=a;
    while(ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}