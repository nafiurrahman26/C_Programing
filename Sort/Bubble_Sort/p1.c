#include<stdio.h>
int main(){
    int a[]={1,2,22,4,5,3,5,25,854,56,6};
    int size=sizeof(a)/sizeof(a[0]);
    int i,j,temp,swap,count=0;
    for(i=0;i<size-1;i++){
        swap=0;
        for(j=0;j<size-1-i;j++){
            count++;
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                ++swap;
            }
        }
        if(swap==0){
            break;
        }
    }
    printf("%d\n",count);
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }

    }