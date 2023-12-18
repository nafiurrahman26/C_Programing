#include<stdio.h>
#include<stdbool.h>
#define capacity 3
int queue[capacity];
int font=0,rear=-1,totalItem=0;
    bool isFull(){
        if(totalItem==capacity){
            return true;
        }
        return false;
    }
    bool isEmpty(){
        if(totalItem==0){
            return true;
        }
        return false;
    }
    int enqueue(int item){
        if(isFull()){
            printf("Queue is full!\n");
            return -1;
        }
        rear=(rear+1)%capacity;
        queue[rear]=item;
        totalItem++;
        printf("Inserted item %d\n",queue[rear]);
    }
    int dequeue(){
        if(isEmpty){
            printf("Queue is Empty!\n");
        }
        int fontItem=queue[font];
        queue[font]=0;
        font=(font+1)%capacity;
        totalItem--;
        return fontItem;

    }
    void printQueue(){
        int i;
        printf("Queue: ");
        for(i=0;i<capacity;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }

    int main(){
        printQueue();
        enqueue(10);
        enqueue(20);
        enqueue(30);
        enqueue(40);
        printQueue();
        // printf("Total item %d \n",totalItem);

        dequeue();
        printQueue();
        dequeue();
        printQueue();
        enqueue(40);
        printQueue();
        enqueue(60);
        printQueue();


        return 0;
    }