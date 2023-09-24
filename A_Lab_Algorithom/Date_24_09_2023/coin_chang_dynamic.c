#include<stdio.h>
int min(int a, int b){
    if(a>b){
        return b;
    }else{
        return a;
    }
}
int coinchang(int a[],int n,int value){
    int coin[n+1],i,j,T[n+1][value+1];
    coin[0]=0;
    for(i=1;i<n+1;i++){
        coin[i]=a[i-1];
    }
    for(i=0;i<=n;i++){
        for(j=0;j<=value;j++){
            if(j==0){
                T[i][j]=0;
            }else if(j!=0){
                T[i][j]=9999;
            }
        }
    }

    for(i=1;i<=n;i++){
        for(j=0;j<=value;j++){
            if(coin[i]>j){
                T[i][j]=T[i-1][j];
            }else if(coin[i]<=j){
                T[i][j]=min(T[i-1][j],1+T[i][j-coin[i]]);
            }
        }
    }
    return T[n][value];
}
int main(){
    int coin[]={30,20,5};
    int size=sizeof(coin)/4;
    int ammount=40;

    int result=coinchang(coin,size,ammount);
    printf("The min coin is: %d\n",result);
}
// int main(){
//     printf("How mnay coin: ");
//     int size;
//     scanf("%d",&size);
//     int coin[size];
//     for(int i=0;i<size;i++){
//         scanf("%d",&coin[i]);
//     }
//     // int size=sizeof(coin)/4;
//     int ammount;
//     printf("Enter the ammount : ");
//     scanf("%d",&ammount);

//     int result=coinchang(coin,size,ammount);
//     printf("The min coin is: %d\n",result);
// }