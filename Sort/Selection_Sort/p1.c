#include<stdio.h>

void output(int array[],int size){
    printf("Outpuut: \n");
    int i;     
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    printf("\n");    
}
int main(){
    int array[]={1,2,22,4,5,3,5,25,854,56,6};
    int size=sizeof(array)/sizeof(array[0]);
    int i,j,min_index,temp,count=0;
    for(i=0;i<size-1;i++){
        min_index=i;
        for(j=i+1;j<size;j++){
            count++; 
            if(array[j]<array[min_index]){
                min_index=j;
            }
        }
        temp=array[i];
        array[i]=array[min_index];
        array[min_index]=temp;        
    }
    output(array,size);
    printf("%d\n",count);
}