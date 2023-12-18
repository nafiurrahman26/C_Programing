#include<stdio.h>
int sum(int a){
    if(a>1){
        return a+sum(a-1);
    }
}
int main(){
    int num,total;
    printf("Inter a number: ");
    scanf("%d",&num);
    total=sum(num);
    printf("Sum is: %d",total);
}