#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
typedef struct Node node;
node *a,*b,*c,*temp;
void display(){
    temp=a;
    while(temp!=0){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
    printf("\n");
}
int main(){
    a=(node*)malloc(sizeof(node));
    b=(node*)malloc(sizeof(node));
    c=(node*)malloc(sizeof(node));
    a->data=10;
    b->data=20;
    c->data=30;
    a->next=b;
    b->next=c;
    c->next=NULL;

    display();
    return 0;
}