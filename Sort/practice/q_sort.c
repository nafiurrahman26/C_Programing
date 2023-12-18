#include<stdio.h>
int partition(int a[],int lb,int ub){
    int temp,start,end,pivot;
    start=lb;
    end=ub;
    pivot=a[start];
    while(end>start){
        while(pivot>=a[start]){
            start++;
        }
        while(pivot<a[end]){
            end--;
        }
        if(end>start){
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    temp=a[lb];
    a[lb]=a[end];
    a[end]=temp;
    return end;
}
void q_sort(int a[],int low,int high){
    int pivot;
    if(high>low){
        pivot=partition(a,low,high);
        q_sort(a,low,pivot-1);
        q_sort(a,pivot+1,high);
;    }
}
void display(int a[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
    int array[]={54,43,2,34,45,32,12,5,3,1};
    int size=sizeof(array)/sizeof(array[0]);
    printf("Array before sorted: ");
    display(array,size);
    q_sort(array,0,size-1);
    printf("After sorted       : ");
    display(array,size);
    printf("The end!");

}