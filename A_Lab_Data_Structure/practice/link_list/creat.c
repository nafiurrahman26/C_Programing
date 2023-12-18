#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head,*tail;
typedef struct node node;

void creat_link_list(){
    int i=1,n,value;
    printf("How many link list do you want : ");
    scanf("%d",&n);
    while(i<=n){
        node *new_node;
        new_node=(node*)malloc(sizeof(node));
        printf("Enter %d value: ",i);
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
void display(){
    node *ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}
int main(){
    printf("-----Wealcome-----\n");
    creat_link_list();
    display();
}