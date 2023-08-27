#include<stdio.h>

int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int array[size];
    int i,min_index,j;
    printf("Enter unsorted array: ");
    for (i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
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