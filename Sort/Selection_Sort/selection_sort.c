#include<stdio.h>
int main(){
    int arra[]={34,23,42,-12,2,22,1,22,5};
    int size=sizeof(arra)/sizeof(arra[0]);
   // printf("%d\n",size);
    int i,j,min_index;
    for(i=0;i<size;i++){
        min_index=i;
        for(j=i+1;j<size;j++){
            if(arra[j]<arra[min_index]){
                min_index=j;
            }
        }
        int temp=arra[i];
        arra[i]=arra[min_index];
        arra[min_index]=temp;
    }
    printf("Output: \n");
    for(i=0;i<size;i++){
        printf("%d ",arra[i]);
    } 
}