#include<stdio.h>
#define capacity 3
int array[capacity];
int top=-1;
void push(int x){
    if(top<capacity-1){
        ++top;
        array[top]=x;
        printf("%d Item added succesfully.\n",array[top]);
    }else{
        printf("No spech!\n");
    }
}
void pop(){
    if(top>=0){
        int temp;
        temp=array[top];
        --top;
        printf("Succesfully deleted item %d\n",temp);
    }else{
        printf("Stack is Empty\n");
    }
}
int peak(){
    if(top>=0){
        return array[top];
    }else{
        printf("The stack is empty\n");
    }
}
//see total out stack:
void display(){
    for(int i=0;i<capacity;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}
int main(){
    printf("Output: \n");
    peak();
    push(10);
    push(20);
    push(30);
    push(40);
    display();

    pop();
    printf("%d",peak());
    display();
    // printf("%d",array[0]);
    push(69);
    display();
}