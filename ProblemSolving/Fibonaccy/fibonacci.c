#include<stdio.h>
int main(){
    int a=0,b=1,c,i,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("%d %d ",a,b);
    for(i=2;i<num;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}