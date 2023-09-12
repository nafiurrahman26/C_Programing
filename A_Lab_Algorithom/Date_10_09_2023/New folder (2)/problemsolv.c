#include<stdio.h>

void findSubsequence(int arr[], int n, int fixed_increase, int fixed_divisor){
    int subsequence[n];
    int count = 0;
    int i=0;
    while(i<n-1){
        if ((arr[i + 1] - arr[i] == fixed_increase) && (arr[i] % fixed_divisor == 0)) {
            subsequence[count] = arr[i];
            count++;
        } 
        else {
            if (count > 0) {
                subsequence[count] = arr[i];
                count++;
                break;
            }
        }
        i++;
    }
    if (count > 0) {
        subsequence[count] = arr[n - 1];
        count++;
    }

    if (count >= 2) {
        printf("Yes\n");
        printf("Subsequence: ");
        for (int i = 0; i < count; i++) {
            printf("%d ", subsequence[i]);
        }
        printf("\nCount: %d\n", count);
    } else {
        printf("No\n");
    }
}
void sort(int array[],int size){
    int i,j,min_index,temp,count=0;
    for(i=0;i<size-1;i++){
        min_index=i;
        for(j=i+1;j<size;j++){
            count++; 
            if(array[j]<array[min_index]){
                min_index=j;
            }
        }
        temp=array[i];
        array[i]=array[min_index];
        array[min_index]=temp;        
    }
}

void display(int array[],int size){
    printf("Outpuut: \n");
    int i;     
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    printf("\n");    
}
int main(){
    int arr[] = {6,12,3,19,25,9,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,n);
    display(arr,n);

    int fixed_increase = 3;
    int fixed_divisor = 3;
    findSubsequence(arr, n, fixed_increase, fixed_divisor);
}