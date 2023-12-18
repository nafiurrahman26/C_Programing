#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;
struct node{
    int data;
    // struct node *next;
    Node *next;
};
Node *creat_node(int item,Node *next){
    Node *new_node=(Node*)malloc(sizeof(Node));
    if(new_node==NULL){
        printf("Error!");
        exit(1);
    }
    new_node->data=item;
    new_node->next=next;
}

int main(){
    Node *n;
    n=creat_node(10,NULL);
    printf("Data= %d\n",n->data);
    return 0;
}