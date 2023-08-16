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
void display(){
    node *tmp;
    tmp=head;
    printf("Output of link list: ");
    while(tmp!=NULL){
        printf("%d->",tmp->data);
        tmp=tmp->next;
    }
    printf("NULL\n\n");
}

//delation part
void dlt_from_beginning(){
    node *temp;
    temp=head;
    head=head->next;
    free(temp);
    printf("Beginning Node Delleted Succesfully.\n");
    display();
}
void dlt_last_node(){
    node *temp,*previous_node;
    temp=head;
    while(temp->next!=NULL){
        previous_node=temp;
        temp=temp->next;
    }
    if(temp==head){
        head=NULL;
    }else{
    previous_node->next=NULL;
    }
    free(temp);
    printf("Last Node Delleted Succesfully!\n");
    display();
}
void dlt_mid(){
    node *temp,*pre_node;
    int pos;
    printf("Select delete possition: ");
    scanf("%d",&pos);
    temp=head;
    int i=1;
    while(i<pos){
        pre_node=temp;
        temp=temp->next;
        i++;
    }
    pre_node->next=temp->next;
    free(temp);
    printf("After delleted node: \n");
    display();
}
int main(){
    creat_node();
    display();
    dlt_from_beginning();
    dlt_last_node();
    dlt_mid();
}