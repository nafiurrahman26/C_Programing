#include<stdio.h>
#include<stdlib.h>
void display();

struct Node{
    int data;
    struct Node *next;
};
typedef struct Node node;
node *head=NULL,*tail=NULL,*new_node=NULL;
void creat_node(){
    
    printf("How manny node do you want: ");
    int n;
    scanf("%d",&n);
    int i=1,value;
    while(i<=n){
        new_node=(node*)malloc(sizeof(node));
        printf("Enter %d node: ",i);
        scanf("%d",&value);
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
void main(){
    creat_node();
    display();
}
void display(){
    node *ptr;
    ptr=head;
    printf("Output : ");
    while(ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}
