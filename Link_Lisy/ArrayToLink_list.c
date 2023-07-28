#include<stdio.h>
#include<stdlib.h>
// struct Node *creat_link_list(int arr[],int size);

// typedef struct Node Node;
struct Node{
    int data;
    struct Node *next;
    // Node *next;   
};


struct Node *creat_link_list(int arr[],int size){
    struct Node *head=NULL,*temp=NULL,*current=NULL;

    int i;
    for(i=0;i<size;i++){
        // printf("%d ",arr[i]);
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=arr[i];
        temp->next=NULL;

        if(head==NULL){
            head=temp;
            current=temp;
        }else{
            current->next=temp;
            current=current->next;
        }
        return head;
    }

}
int main(){
    int a[]={5,10,15};
    struct Node *head;
    head=creat_link_list(a,3);
    while(head!=NULL){
        printf("%d ->",head->data);
    }
    printf("NULL\n");
    return 0;
}