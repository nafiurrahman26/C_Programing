#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int sum=0;
    
    for(int i=0;i<5;i++){
        //printf("%d ",*(a+i));
        sum=sum+*(a+i);
    }
    printf("The sum of array is: %d \n",sum);
}