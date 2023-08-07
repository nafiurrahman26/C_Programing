#include<stdio.h>

int main(){
    int array[]={8,7,6,5,4,3,2,1};
    int size=sizeof(array)/sizeof(array[0]);
    int i,min_index,j;
    for(i=0;i<size-1;i++){
        min_index=i;
        for(j=i+1;j<size;j++){
            if(array[j]<array[min_index]){
                min_index=j;
            } 
        }
        int temp=array[i];
        array[i]=array[min_index];
        array[min_index]=temp;
    }

    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
}