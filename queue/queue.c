#include<stdio.h>
#define capacity 3
int queue[capacity],front=0,rear=-1,totalitem=0;

void display(){
    int i;
    printf("Display queue: ");
    for(i=0;i<capacity;i++){
        printf("%d ",queue[i]);
    }
    printf("\n");

}
void enque(int item){
    if(totalitem==capacity){
        printf("Queue is Full!\n");
        
    }else{
        rear=(rear+1)%capacity;
        printf("The rear is %d\n",rear);
        queue[rear]=item;
        totalitem++;

    }

    display();
}
void dequeue(){
    if(totalitem==0){
        printf("The queue is Empty!");
    }else{
        int x=queue[front];
        queue[front]=0;
        front=(front+1)%capacity;
        printf("The front is %d\n",front);
        totalitem--;
        printf("Suxxesfully deleted %d item \n",x);

        display();
    }
}
int main(){
    enque(15);
    enque(324);
    dequeue();
    enque(1);
    dequeue();
    enque(22);
    printf("total item %d\n",totalitem);
}