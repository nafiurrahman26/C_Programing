#include<stdio.h>
int binary_search(int arr[],int a,int n);

int binary_search(int arr[],int a,int n){
    int first=0,last=n-1,mid;
    while(last>=first){
        mid=(first+last)/2;
        if(a==arr[mid]){
            return mid;
        }
        else if(a<arr[mid]){
            first=mid-1;
        }
        else{
            last=mid+1;
        }
    }
   return -1;
}
int main(){
    int sch_eleminet,n,i;
    printf("How manny number do you want: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter some number in array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter Searching element: ");
    scanf("%d",&sch_eleminet);
    // printf("Your searching value is index of: ",binary_search(arr,sch_eleminet,n));
    int result = binary_search(arr,sch_eleminet,n);
    if (result != -1) {
        printf("Element found at index %d\n", result+1);
    }
    else{
        printf("Not found!\n");
    }
   

}
