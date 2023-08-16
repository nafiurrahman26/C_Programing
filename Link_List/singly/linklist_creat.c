#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node{
    int data;
    node *next;
};
node *head=NULL,*temp=NULL,*new_node=NULL;
void creation(){
    int value,n,i=1;
    printf("How many link list do you want: ");
    scanf("%d",&n);
    while(i<=n){
        printf("Enter %d value: ",i);
        scanf("%d",&value);
        new_node=(node*)malloc(sizeof(node));
        new_node->data=value;
        new_node->next=NULL;
        if(head==NULL){
            head=new_node;
            temp=new_node;
        }else{
            temp->next=new_node;
            temp=new_node;
        }
        ++i;
    }
}
void display(){  
    node *x;
    x=head;
    printf("Output: ");
    while(x!=NULL){
        printf("%d->",x->data);
        x=x->next;
    }
    printf("NULL\n");  
}
void add_Begenning(){
    node *start_node;
    start_node=(node*)malloc(sizeof(node));
    printf("Insert a new node in the 1st possition: ");
    scanf("%d",&start_node->data);
    start_node->next=head;
    head=start_node;
}
void add_end(){
    node *end_node;
    int new_value;
    end_node=(node*)malloc(sizeof(node));
    printf("Insert a new node in the last possition: ");
    scanf("%d",&new_value);
    end_node->data=new_value;
    end_node->next=NULL;
    node  *temp1;
    temp1=head;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }

    temp1->next=end_node;
    
}
int main(){
    creation();
    display();
    add_Begenning();
    display();
    add_end();
    display();
    return 0;
}