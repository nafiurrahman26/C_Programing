#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node{
    int data;
    node *next;
};
node *head,*tail;

void creation(){
    int i=1,n;
    printf("Enter size of link list: ");
    scanf("%d",&n);
    while(i<=n){
        node *newnode;
        int value;
        newnode=(node*)malloc(sizeof(node));
        printf("Enter the %d value: ",i);
        scanf("%d",&value);
        newnode->data=value;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }

        ++i;
    }
}
void display(){
    printf("\nOutput: \n");
    node *ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    if(ptr==NULL){
        printf("NULL");
    }
    
}
void main(){
    creation();
    display();
    
}