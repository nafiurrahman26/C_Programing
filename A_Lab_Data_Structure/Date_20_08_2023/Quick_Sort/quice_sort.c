#include<stdio.h>
int partition(int a[],int l,int r){
    int p,temp;
    p=a[l];
    while(l!=r){
        if(p==a[l]){
            if(a[r]>p){
                r-=1;
            }else if(a[r]<=p){
                
                temp=a[l];
                a[l]=a[r];
                a[r]=temp;

                p=a[r];//do this again.
                l=l+1;
            }
        }else if(p==a[r]){
            if(a[l]<p){
                l+=1;
            }else if(a[l]>=p){
                temp=a[l];
                a[l]=a[r];
                a[r]=temp;
                p=a[l];
                r-=1;
            }
        }
    }
    return l;
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
}
int main(){
    int array[]={99,76,45,32,7,5,3,1};
    int size=sizeof(array)/sizeof(array[0]);
    
    quick_sort(array,0,size-1);
    display(array,size);
}