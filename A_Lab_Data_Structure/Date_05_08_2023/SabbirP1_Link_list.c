#include<stdio.h>
#include<stdlib.h>
void creatNodeList(int n);
void NodeInsertatBegin();
void display();
struct node
{
    int num;
    struct node *nextptr;
};
typedef struct node node;
node *stnode;

int main(){
    int n,num;
    printf("Input the number of nodes : ");
    scanf("%d",&n);
    creatNodeList(n);
    display();
    NodeInsertatBegin();
    printf("Data after inserted in the list are : \n");
    display();
}

void creatNodeList(int n){
    node *fnNode,*temp;
    int num,i;
    stnode=(node*)malloc(sizeof(node));
    
    printf("Input data for node 1 : ");
    scanf("%d",&num);
    stnode->num=num;
    stnode->nextptr=NULL;
    temp=stnode;

    for(i=2;i<=n;i++){
        fnNode=(node*)malloc(sizeof(node));

        printf(" Input data for node %d : ", i);
        scanf(" %d", &num);

        fnNode->num = num; 
        fnNode->nextptr=NULL; 
        temp->nextptr=fnNode;
        temp=temp->nextptr;
    }
}
void NodeInsertatBegin(){
    printf("Input data to insert at the beginning of the list : ");
    int n;
    scanf("%d",&n);
    node *newNode;
    newNode=(node*)malloc(sizeof(node));
    newNode->num=n;
    newNode->nextptr=stnode;
    stnode=newNode;
}
void display(){
    node *tmp;
    tmp=stnode;
    printf("Data : ");
    while(tmp!=NULL){
        printf(" %d->",tmp->num);
        tmp=tmp->nextptr;
    }
    printf("NULL\n");
}