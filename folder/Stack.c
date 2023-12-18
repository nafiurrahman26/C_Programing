#include<stdio.h>
#define CAACITY 3
int stack[CAACITY];
int top=-1;
void push(int x){
    if(top<CAACITY-1){
        top=++top;
        stack[top]=x; 
        printf("Succesfully Added item: %d\n",x);     
    }
    else{
        printf("No Speces in our \"Stack\"\n");
    }
}
int pop(){
    if(top>=0){
        int del=stack[top];
        --top;
        printf("Successfully Deleted ittem: %d\n",del);
        return del;
    }else{
        printf("Empty Stack! \n");
    }
   // return -1;
}
int peek(){
    if(top>=0){
        return stack[top];
    }
    else{
        printf("No Elimants in our \"Stack\"\n");
    }
    //return -1;
}
int main(){
    printf(" Program Start : \n");
    peek();
    pop();
    push(20);
    push(30);
    push(69);
    push(55);
    printf("Top of Stack: %d\n",peek());
    pop();
    push(6969);
    printf("Top of Stack: %d\n",peek());

    return 0;
}
