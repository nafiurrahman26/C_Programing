#include<stdio.h>
int main(){
    int array[]={8,7,6,5,4,3,2,1,53,234};
    int size=sizeof(array)/sizeof(array[0]);
    int i,j,key,count=0;

        int count2=0;
        for(i=1;i<6;i++){
        count2++;
        key=array[i];
        j=i-1;
        while(j>=0 && array[j]>key){
            array[j+1]=array[j];
            j=j-1;
        }
        array[j+1]=key;
    }
    printf("The total iteration is: %d\n",count2);
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
printf("\nOutput after all sort: \n");

        for(i=1;i<size;i++){
        count++;
        key=array[i];
        j=i-1;
        while(j>=0 && array[j]>key){
            array[j+1]=array[j];
            j=j-1;
        }
        array[j+1]=key;
    }
    printf("The total iteration is: %d\n",count);
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
}