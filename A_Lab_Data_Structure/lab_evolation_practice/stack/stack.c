#include<stdio.h>
#define cap 3
int stack[cap];
int top=-1;
void push(int data){
    if(top<cap-1){
        ++top;
        stack[top]=data;
        printf("Added %d data succesfully.\n",data);
    }else{
        printf("Stack overflow.\n");
    }
}
void pop(){
    if(top>=0){
        int temp;
        temp=stack[top];
        --top;
        printf("Succesfully %d data deleted.\n",temp);

    }else{
        printf("Stack is empty.\n");
    }
}
void display(){
    printf("Print the stack: ");
    if(top>=0){
        for(int i=0;i<=top;i++){
        printf("%d ",stack[i]);
        }
        printf("\n");
    }else{
        printf("null!\n");
    }
    
}
int main(){
    push(10);
    push(20);
    push(30);
    display();
    push(40);
    pop();
    display();
    push(40);
    display();
    pop();
    pop();
    pop();
    pop();
    pop();
    display();
}