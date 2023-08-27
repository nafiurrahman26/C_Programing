#include<stdio.h>

void insertion(int a[],int size){
    int i,j,temp;
    for(i=1;i<size;i++){
        j=i-1;
        temp=a[i];
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            --j;
        }
        a[j+1]=temp;
    }
}
void display(int a[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
    int array[]={7,5,3,1,88,43,2};
    int size=sizeof(array)/sizeof(array[0]);
    printf("Before sorted : ");
    display(array,size);
    insertion(array,size);
    printf("After sorted  : ");
    display(array,size);
}