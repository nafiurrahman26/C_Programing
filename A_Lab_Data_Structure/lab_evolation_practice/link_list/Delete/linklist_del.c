#include<stdio.h>
#include<stdlib.h>
//function:
void display();
void creat_node();
void del_first();
void del_last();

//structure of node:
struct node{
    int data;
    struct node *next;
};

//decleare: 
typedef struct node  node;
node *head=NULL,*tail=NULL,*new_node=NULL;




//create a linklist.....
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
    printf("\n");
    display();
}
//display
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

//delete link list first node
void del_first(){
    node *tmp;
    tmp=head;
    head=head->next;
    free(tmp);
    printf("Deleted succesfully.\n");
    display();

}

void del_last(){
    node *temp,*pre;
    temp=head;
    while(temp->next!=NULL){
        pre=temp;
        temp=temp->next;
    }
    if(temp==head){
        head=NULL;
    }else{
        pre->next=NULL;
        tail=pre;
    }

    free(temp);
    printf("Deleted succesfully\n");
    display();
}

//main function:
int main(){
    creat_node();
    del_first();
    del_last();
}