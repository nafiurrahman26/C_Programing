#include<stdio.h>

int main(){
    int array[]={8,10,5,50};
    int size=sizeof(array)/sizeof(array[0]);
    // printf("%d",size);
    //sorting high to low;
    int i,j,swap;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-1-i;j++){
            if(array[j]<array[j+1]){
                swap=array[j];
                array[j]=array[j+1];
                array[j+1]=swap;
            }
        }
    }
    // for(i=0;i<size;i++){
    //     printf("%d ",array[i]);
    // }


    //calculate node;
    int exch=106;
    int k=0,count=0,coin=0;
    while(k<size){
        if(array[k]<=exch){
            count=exch/array[k];
            exch=exch%array[k];
            printf("Note of %d is %d \n",array[k],count);
            coin=coin+count;
        }
        k++;
    }
    printf("Total Min note is : %d\n",coin);
    if(exch!=0){
        printf("This is not exchang %d \n",exch);
    }
}