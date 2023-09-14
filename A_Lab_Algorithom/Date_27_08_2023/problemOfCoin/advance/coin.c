#include<stdio.h>

int main(){
    printf("------Hellow-------\n");
    int exch;
    printf("Enter your amount: ");
    scanf("%d",&exch);

 
    int size;
    printf("Enter how many exchang note do you want: ");
    scanf("%d",&size);
    int array[size];

    int i,j,s=1,swap;
    for(i=0;i<size;i++){
        printf("Enter %d note : ",s);
        scanf("%d",&array[i]);
        s++;
    }

    //sorting high to low;
    
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

    // int exch=106;
    printf("\n\n");
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