#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node node;
node *head=NULL,*tail=NULL;

void creat(){
    printf("Enter how many node you want creat: ");
    int n;
    scanf("%d",&n);
    int i=1;
    while(i<=n){

        
        printf("Enter the %d node data: ",i);
        int value;
        scanf("%d",&value);
        node *new_node;
        new_node=(node*)malloc(sizeof(node));
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

void add_beg(){
    printf("-----Node add at begening ----\n");
    node *new_node=(node*)malloc(sizeof(node));
    printf("Enter the data: ");
    scanf("%d",&new_node->data);
    new_node->next=head;
    head=new_node;
    printf("Node added succesfully\n");
}

int check_size(){
    node *tmp=head;
    int count=1;
    while(tmp->next!=NULL){
        tmp=tmp->next;
        ++count;
    }
    return count;
}
void add_anypos(){
    printf("-----Node add at any possition-----\n");
    node *mid,*temp;
    mid=(node*)malloc(sizeof(node));
    int size,pos,i=2;
    size=check_size();
    printf("Enter possition you want to add a node: ");
    scanf("%d",&pos);
    if(pos>size){
        printf("Invalit Possition\n");
    }else{
        temp=head;
        while(i<pos){
            temp=temp->next;
            i++;
            
        }
        printf("Enter the data: ");
        scanf("%d",&mid->data);
        mid->next=temp->next;
        temp->next=mid;
        
    }

}

void add_last(){
    printf("-----Node add at last -----\n");
    node *new_node=(node*)malloc(sizeof(node));
    printf("Enter the data: ");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    node *temp1;
    temp1=head;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }

    temp1->next=new_node;
}

void display(){
    node *tmp;
    tmp=head;
    printf("-----Display-----\n");
    while(tmp!=NULL){
        printf("%d->",tmp->data);
        tmp=tmp->next;
    }
    printf("NULL\n");
}

int main(){
    creat();
    display();
    add_beg();
    display();
    add_last();
    display();
    add_anypos();
    display();
}
// int main(){
//     int input=0;
//     while(input!=4){
//     printf("Input: \n");
//     printf("press 1 for creat node.\n");
//     printf("press 2 for add node begening.\n");
//     printf("press 3 for add node in last.\n");
//     printf("press 4 for add node any index.\n");
//     printf("press 5 for display\n");
//     scanf("%d",&input);
//     if(input==1){
//         creat();
//     }else if(input==2){
//         add_beg();
//     }else if(input==3){
//         add_last();
//     }else if(input==5){
//         display();
//     }
//     }
    
// }