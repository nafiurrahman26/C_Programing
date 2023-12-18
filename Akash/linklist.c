#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node*next;
};
struct node *head,*tail;

void creation(){
int i=1;
int n;
printf("Enter the Linklist size= ");
scanf("%d",&n);
while(i<=n){
    int value;
    printf("Enter the value= ");
    scanf("%d",&value);
   struct node*newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=value;
   newnode->next=NULL;
   if(head==NULL){//Create First node;
    head=newnode;
    tail=newnode;
   } 
   else{//link with First node
    tail->next=newnode;
    tail=newnode;
   }
  i++;
  
}
}
void print(){
struct node*temp;
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