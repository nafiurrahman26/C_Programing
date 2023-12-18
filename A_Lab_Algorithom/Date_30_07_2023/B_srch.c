#include<stdio.h>
int bsrc(int array[],int n,int srch){
    int l=0,r=n-1,mid;
    while(l<=r){
        mid=(l+r)/2;
        if(srch==array[mid]){
            return mid;
        }else if(srch>array[mid]){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    printf("Eliment not exixted!\n");
    return -1;
}

int main(){
    int n,src,result;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the %d eliment od array: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter searching eliment: ");
    scanf("%d",&src);
    result=bsrc(array,n,src);

    printf("Output: \n");

    int size= sizeof(array)/sizeof(array[0]);
    printf("Size of array : %d\n",size);

    
    if(result!=-1){
        printf("Eliment is index of %d",result+1);
    }
}