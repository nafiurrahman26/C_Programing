#include<stdio.h>
int min(int a,int b){
    if(a>b){
        return b;
    }else{
        return a;
    }
}
int coinchange(int a[],int n,int value){
    int T[n+1][value+1],i,j,coins[n+1];
    coins[0]=0;
    for(i=0;i<n+1;i++){
        coins[i]=a[i];
    }
    for(i=0;i<=n;i++){
        for(j=0;j<=value;j++){
            if(j==0){
                T[i][j]=0;
            }else if(j==0 && j!=0){
                T[i][j]=9999;
            }
            if(coins[i]>j){
                T[i][j]=T[i-1][j];
            }else if(coins[i]<=j){
                T[i][j]=min(T[i-1][j],1+T[i][j-a[i]]);
            }
            printf("%d ",T[i][j]);
        }
        printf("\n");
    }
    return T[n][value];
}

int main(){
    int n=4,i;
    // printf("How  many coin: ");
    // scanf("%d",&n);
    int a[4]={1,2,4,5};
    // printf("Insert all coin: ");
    // for(i=0;i<n;i++){
    //     scanf("%d",&a[i]);
    // }
    //ecxhang value
    int value=20;
    // printf("Enter exchang value: ");
    // scanf("%d",&value);
    int result;
    result= coinchange(a,n,value);
    printf("%d",result);
}

// int main(){
//     int n,i;
//     printf("How  many coin: ");
//     scanf("%d",&n);
//     int a[n];
//     printf("Insert all coin: ");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     //ecxhang value
//     int value;
//     printf("Enter exchang value: ");
//     scanf("%d",&value);
//     int result;
//     result= coinchange(a,n,value);
//     printf("%d",result);
// }