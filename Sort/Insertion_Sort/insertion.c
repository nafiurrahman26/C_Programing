#include<stdio.h>
int main(){
    int array[]={7,5,3,1,88,43,2};
    int size=sizeof(array)/sizeof(array[0]);
    int i,j,current;
    for(i=1;i<size;i++){
        current=array[i];
        j=i-1;
        while(array[j]>current && j>=0){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=current;
    }
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
}