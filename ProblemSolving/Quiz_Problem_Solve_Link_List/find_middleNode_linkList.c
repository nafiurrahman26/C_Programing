#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node  node;
node *head=NULL,*tail=NULL,*new_node=NULL;
void creat_node(){
    printf("How manny node do you want: ");
    int size,value;
    scanf("%d",&size);
    int i=1;
    while(i<=size){
        new_node=(node*)malloc(sizeof(node));
        printf("Enter %d node value: ",i);
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
int lenth(){
    node *ln_tmp;
    int i=1;
    ln_tmp=head;
    while(ln_tmp->next!=NULL){
        i++;
        ln_tmp=ln_tmp->next;
    }
    return i;
}
void display_mid_node(){
    node *temp;
    temp=head;
    int lenth_of_link_list,mid,i=1;
    lenth_of_link_list=lenth();
    mid=(lenth_of_link_list)/2;
    while(i<=mid){
        temp=temp->next;
        i++;
    }
    printf("The middle node's data is : %d\n",temp->data);
}
void display(){
    node *tmp;
    tmp=head;
    printf("Output of link list: ");
    while(tmp!=NULL){
        printf("%d->",tmp->data);
        tmp=tmp->next;
    }
    printf("NULL\n");
}
int main(){
    creat_node();
    display();
    display_mid_node();
  
}