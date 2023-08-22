#include<stdio.h>
void marge(int a[],int lb,int mid,int ub){
    int new_a[ub+1];
    // printf("%d \n",ub);
    int i=lb;
    int j=mid+1;
    int k=lb;
    
    while(i<=mid && j<=ub){
        if(a[i]<=a[j]){
            new_a[k]=a[i];
            i++;
        }else{
            new_a[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=ub){
            new_a[k]=a[j];
            j++;
            k++;
        }
    }else{
        while(i<=mid){
            new_a[k]=a[i];
            i++;
            k++;
        }
    }

    //array ec=xchang:
    int x;
    for(x=lb;x<=ub;x++){
        a[x]=new_a[x]; 
    }
}
void marge_sort(int a[],int lb,int ub){
    int mid;
    if(ub>lb){
        mid=(lb+ub)/2;
        marge_sort(a,lb,mid);
        marge_sort(a,mid+1,ub);
        marge(a,lb,mid,ub);
    }
}
void display(int a[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int array[]={96,564,34,3,2,5645,34,2,1};
    int size=sizeof(array)/sizeof(array[0]);
    marge_sort(array,0,size-1);
    display(array,size);
}