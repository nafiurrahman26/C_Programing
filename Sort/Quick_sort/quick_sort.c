#include<stdio.h>
void print(int* array,int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}
int partition(int A[],int low,int high){
    int temp;
    int privot =A[low];
    int i=low+1;
    int j=high;
    do{
        while (A[i]<=privot){
        i++;
        }
        while (A[j]>privot){
            j--;
        }
        if(i<j){
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    } while(i<j);
    //swap a[low] and a[j]
    temp=A[low];
    A[low]=A[j];
    A[j]=temp;

    return j;
    
}
void quick_sort(int A[],int low,int high){
    int partionIndex; //intex of privot after partition 

    if(low<high){
    partionIndex=partition(A,low,high); 
    quick_sort(A,low,partionIndex-1);  //sort left subarray
    quick_sort(A,partionIndex+1,high);  //sort right subarray
    }
}
int main(){
    int array[]={8,7,6,5,4,3,2};
    int size=sizeof(array)/sizeof(array[0]);
    printf("Array is \"unsorted\" : ");
    print(array,size);
    printf("Array is \"sorted\" : ");
    quick_sort(array,0,size-1);
    print(array,size);


}