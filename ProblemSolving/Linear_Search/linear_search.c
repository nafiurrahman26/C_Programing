#include<stdio.h>
int linear_search(int a[],int n,int sch){
    for(int i=0;i<n;i++){
        if(a[i]==sch){
            return i+1;
        }
    }
    return -1;
}
int main(){
    int n,i,sch,result;
    printf("How manny eliment do you need: ");
    scanf("%d",&n);
    int array[n];
    printf("\nEnter eliment: ");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("\nEnter searching eliment: ");
    scanf("%d",&sch);
    result=linear_search(array,n,sch);
    if(result !=-1){
        printf("Eliment is index of : %d\n",i);
    }
    else{
        printf("Eliment not found!\n");
    }
}