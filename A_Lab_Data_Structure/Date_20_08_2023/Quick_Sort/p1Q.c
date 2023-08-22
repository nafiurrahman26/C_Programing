#include<stdio.h>
int partition(int a[],int l,int r){
    int p,temp;
    int mid=(l+r)/2;
    p=a[mid];
    while(mid!=r){
        if(p==a[mid]){
            if(a[r]>p){
                r-=1;
            }else if(a[r]<=p){
                
                temp=a[mid];
                a[mid]=a[r];
                a[r]=temp;

                p=a[r];//do this again.
                mid=mid+1;
            }
        }else if(p==a[r]){
            if(a[mid]<p){
                mid+=1;
            }else if(a[mid]>=p){
                temp=a[mid];
                a[mid]=a[r];
                a[r]=temp;
                p=a[mid];
                r-=1;
            }
        }
    }
    return mid;
}
void quick_sort(int a[],int l,int r){
    int pivot;
    if(l<r){
        pivot=partition(a,l,r);
        quick_sort(a,l,pivot);
        quick_sort(a,pivot+1,r);
    }

}
void display(int a[],int size){
    int i;
    printf("Output: ");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
    int array[]={99,76,45,32,7,5,3,1};
    int size=sizeof(array)/sizeof(array[0]);
    printf("Before: \n");
    display(array,size);
    quick_sort(array,0,size-1);
    printf("After sorting: \n");
    display(array,size);
}