#include<stdio.h>
void print(int array[],int size);
void quick_sort(int a[],int low,int high);
int partition(int a[],int lb,int ub);


int partition(int a[],int lb,int ub){
    int privot=a[lb];
    int start=lb;
    int end=ub;    
    int temp;
    do{
        while(a[start]<=privot){
            start++;
        }
        while(privot<a[end]){
            end--;
        }
        if(end>start){
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;

        }
    }while(end>start);

    temp=a[lb];
    a[lb]=a[end];
    a[end]=temp;

    return end;
}
void quick_sort(int a[],int low,int high){
    int loc;
    if(low<high){ 
        loc=partition(a,low,high);
        quick_sort(a,low,loc-1);
        quick_sort(a,loc+1,high);
    }
}
int main(){
    int array[]={76,43,22,5,34,5,4,7,2,1,43};
    int size=sizeof(array)/sizeof(array[0]);
    printf("Array is \"unsorted\" : ");
    print(array,size);

    quick_sort(array,0,size-1);
    printf("Array is \"sorted\" : ");
    print(array,size);
}
void print(int array[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}