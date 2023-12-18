#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
typedef struct node node;
node *head=NULL,*tail=NULL;

void peek(){
    printf("Last node Nada is : %d\n",tail->data);
}

void push(int data){
    node *new_node;
    new_node=(node*)malloc(sizeof(node));
    new_node->data=data;
    new_node->next=NULL;
    if(head==NULL){ 
        head=new_node;
        tail=new_node;
    }else{
        tail->next=new_node;
        tail=new_node;
    }
}

void pop(){
    if(head == NULL){
        printf("Stack is Empty.\n");
        return;
    }else if(head == tail){
        free(head);
        head = NULL;
        tail = NULL;
    }else{
        node *temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        tail = temp;
        free(temp->next);
        tail->next = NULL;
    }
}

//error
// void pop(){
//     node *temp=head,*pre;
//     while(temp!=NULL){
//         pre=temp;
//         temp=temp->next;
//     }
//     if(head==NULL){
//         printf("Stack is Empty.\n");
//     }else if(head->next=NULL){
//         head=NULL;
//         tail=NULL;
//     }else{
        
//         tail->data=pre->data;
//         tail->next=NULL;
//         free(temp);
//     }
// }
 
//display:
void display(){
    node *temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main(){
    push(10);
    push(20);
    push(30);
    push(50);
    display();
    pop();
    display();
    peek();
}