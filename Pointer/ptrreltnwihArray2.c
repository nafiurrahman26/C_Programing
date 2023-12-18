#include<stdio.h>
int sum(int *a,int size){
    int i,sum=0;
    for(i=0;i<size;i++){
        sum=sum+*(a+i);
    }
    return sum;
}
int main(){
    int arr[5]={1,2,3,4,5};
    // printf("%d",arr);
    int result=sum(arr,5);
    printf("The sum of array is: %d",result);

}