#include<stdio.h>
int main(){
    int arra[]={1,2,3,4,5,6,7,8,9,11};
    int size=sizeof(arra)/sizeof(arra[0]);
   // printf("%d",size);

    int i,j;
    int swap;
    int count=0;
    for(i=0;i<size-1;i++){
        swap=0;
        for(j=0;j<size-1-i;j++){
            count++;
            if(arra[j]>arra[j+1]){
                int temp=arra[j];
                arra[j]=arra[j+1];
                arra[j+1]=temp;
                ++swap;
            }
        }
        if(swap==0){
            break;
        }
    }
    printf(" Output: \n");
    printf("%d \n",count);
    for(i=0;i<size;i++){
        printf("%d ",arra[i]);
    }
}