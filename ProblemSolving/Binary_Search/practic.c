#include<stdio.h>
void input();
int binary_search(int array[],int size,int srch_eliment){
    int first=0,last=size-1,mid;
    while(first<=last){
        mid=(first+last)/2;
        if(array[mid]==srch_eliment){
            return mid;
        }else if(srch_eliment>array[mid]){
            first=mid+1;
        }else{
            last=mid-1;
        }
    }
    return -1;
    printf("Eliment not found!");
}
void input(){
 
}
int main(){
    int n,count=1,srch;
    printf("How manny number do you want: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter sorted number: \n");
    for (int i=0;i<n;i++){
        printf("%d number: ",count++);
        scanf("%d",&array[i]);
    }
    printf("Enter searching number: ");
    scanf("%d",&srch);

    int result=binary_search(array,n,srch);
    if(result!=-1){
        printf("Eliment is index of %d",result);
    }
}