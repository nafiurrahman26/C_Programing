#include<stdio.h>
int main(){
    int i,j,key;
    int size;
    printf("Enter array size: ");
    scanf("%d",&size);
    int array[size];
    printf("Enter unsorted array: ");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }  
    for(i=1;i<size;i++){
        key=array[i];
        j=i-1;
        while(j>=0 && array[j]>key){
            array[j+1]=array[j];
            j=j-1;
        }
        array[j+1]=key;
    }

    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
}