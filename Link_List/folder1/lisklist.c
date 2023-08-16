#include<stdio.h>
#include<stdlib.h>

typedef struct Node node; 
struct Node{
    int data;
    node *next;
};
// }*head,*tail;
node *head,*tail;

void creation(){
    int n,i=1;
    printf("Enter the link list size: ");
    scanf("%d",&n);
    while(i<=n){
        node *new_node;
        int value;
        new_node=(node*)malloc(sizeof(node));
        printf("Enter %d value: ",i);
        scanf("%d",&value);
        new_node->data=value;
        new_node->next=NULL;

        if(head==NULL){
            head=new_node;
            tail=new_node;
        }
        else{
            tail->next=new_node;
            tail=new_node;
        }
        i++;
    }
}

void print(){
node *temp;
temp=head;
while(temp!=NULL){
    printf("%d->",temp->data);
     temp=temp->next;
}
printf("NULL");
}

int main(){
    creation();
    print();
}