#include<stdio.h>
int main(){
    int array[]={8,7,6,5,4,3,2,1};
    int size=sizeof(array)/sizeof(array[0]);
    int i,j,key,count=0;
    for(i=1;i<size;i++){
        key=array[i];
        j=i-1;
        while(j>=0 && array[j]>key && count!=5){
            array[j+1]=array[j];
            j=j-1;
            count++;
            
        }
        array[j+1]=key;
        if(count==5){
                break;
            }
    }
    printf("iteration : %d \n",count);
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    int count2=0;
    printf("\n");
    for(i=1;i<size;i++){
        key=array[i];
        j=i-1;
        while(j>=0 && array[j]>key){
            array[j+1]=array[j];
            j=j-1;
            count2++;
            
        }
        array[j+1]=key;
    }
    printf("total iteration %d \n",count2);
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
}