#include<stdio.h>

int partition(int a[], int lb, int ub) {
    int pivot = a[lb];
    int start = lb;
    int end = ub;

    while (start < end) {
        while (a[start] >= pivot) {
            start++;
        }
        while (a[end] < pivot) {
            end--;
        }
        if (start < end) {
            int temp = a[start];
            a[start] = a[end];
            a[end] = temp;
        }
    }

    int temp = a[lb];
    a[lb] = a[end]; 
    a[end] = temp;

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
    int a[]={1,2,7,9,25};
    int size=sizeof(a)/sizeof(a[0]);
    

    quick_sort(a,0,size-1);
    

    int x,y,taka;
    scanf("%d %d",&x,&y);

    taka=y-x;

    int loop=0,count=0;
    while(loop<size){
        if(a[loop]<=taka){
            taka=taka%a[loop];
            if(a[loop]==9 || a[loop]==7){
                count++;

            }

        }
        loop++;
    }

    if(count!=0){
        printf("Happy\n");
    }else{
        printf("Sad\n");
    }
}


