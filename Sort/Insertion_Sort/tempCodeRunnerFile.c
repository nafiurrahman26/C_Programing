#include<stdio.h>
int main(){
    int array[]={7,5,3,1,88,43,2};
    int size=sizeof(array)/sizeof(array[0]);
    int i;
    int value,hole;
    for(i=1;i<size;i++){
        value=array[i];
        hole=i;
        while(hole>0 && array[hole-1]>value){
            array[hole]=array[hole-1];
            hole--;
        }
        array[hole]=value;
    }
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
}