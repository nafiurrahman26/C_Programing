#include<stdio.h>
void bubble_sort(int array[],int size){
    int i,j;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-1-i;j++){
            if(array[j]>array[j+1]){
                int temp;
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}

void display(int a[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
    int array[]={8,54,2,1};
    int size=sizeof(array)/sizeof(array[0]);
    printf("Array before sorted: ");
    display(array,size);

    bubble_sort(array,size);

    printf("After sorted       : ");
    display(array,size);
    printf("The end!");

}