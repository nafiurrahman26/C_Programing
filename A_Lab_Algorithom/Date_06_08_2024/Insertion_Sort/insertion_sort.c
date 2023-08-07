#include<stdio.h>
int main(){
    int array[]={8,7,6,5,4,3,2,1};
    int size=sizeof(array)/sizeof(array[0]);
    int i,j,key;
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