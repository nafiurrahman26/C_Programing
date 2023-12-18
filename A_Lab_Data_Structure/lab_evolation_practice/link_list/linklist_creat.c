#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node node;
node *head=NULL,*tail=NULL,*new_node=NULL;

void creat(){
    printf("Enter how many node you want creat: ");
    int n;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        printf("Enter the %d node data: ",i);
        int value;
        scanf("%d",&value);
        new_node=(node*)malloc(sizeof(node));
        new_node->data=value;
        new_node->next=NULL;
        if(head==NULL){
            head=new_node;
            tail=new_node;
        }else{
            tail->next=new_node;
            tail=new_node;
        }


        i++;
    }
}

void display(){
    node *tmp;
    tmp=head;
    printf("-----Display-----\n");
    while(tmp!=NULL){
        printf("%d->",tmp->data);
        tmp=tmp->next;
    }
    printf("NULL\n");
}

int main(){
    creat();
    display();
}