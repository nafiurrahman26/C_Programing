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
    tail->next=head;//circuler link;
   }
  i++;

}
}
void print(){
struct node*temp;
temp=head;
while(temp->next!=head){
    printf("%d->",temp->data);
     temp=temp->next;
}
printf("%d->",temp->data);
}
int main(){
creation();
print();
}
