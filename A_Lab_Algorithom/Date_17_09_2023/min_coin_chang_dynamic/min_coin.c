#include<stdio.h>

int coinchang(int a[],int n,int value){
    int arr[n+1][value+1];
}

int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //ecxhang value
    int value;
    scanf("%d",&value);
    int result;
    result= coinchange(a,n,value);
}