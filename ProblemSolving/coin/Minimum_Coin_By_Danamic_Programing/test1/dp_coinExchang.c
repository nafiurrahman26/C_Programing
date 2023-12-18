///////unsolved
#include<stdio.h>
//min coin calculate
int min(int a, int b)
{
    if(a>b)return b;
    else return a;
}
//display the 1st row:
void coin_display(int a[],int size){
    int i;
    printf("Coin Display: \n");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
        printf("\n");
    }
    printf("\n");
}
//display T:
void T_display(int m,int n,int a[][50]){
    int i,j;
    printf("Display Table: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d   ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int coinchang(int a[],int n,int value){
    int coin[n+1],T[n+1][value+1];//row & column
    int i,j;
    coin[0]=0;
    for(i=1;i<n+1;i++){
        coin[i]=a[i-1];
    }
    //display the row
    // coin_display(coin,n+1); //display

    //table display
    // T_display(n+1,value,T); //table
    for(i=0;i<=n+1;i++){
        for(j=0;j<=value;j++){
            if(j==0){
                T[i][j]=0;
            }else if(j!=0){
                T[i][j]=99;
            }
        }
    }
    //table display
    // T_display(n+1,value,T); //table
    for(i=1;i<=n;i++){
        for(j=0;j<=value;j++){
            if(coin[i]>j){
                T[i][j]=T[i-1][j];
            }else if(coin[i]<=j){
                T[i][j]=min(T[i-1][j], 1+T[i][j-coin[i]]);
            }
            
        }
    }
    T_display(n+1,value,T); //table
    return T[n][value];

}
int main(){
    int exchange_coin[]={20,4,10,2};
    int size=sizeof(exchange_coin)/sizeof(exchange_coin[0]);
    int exchange_value=10;
    int result;
    result=coinchang(exchange_coin,size,exchange_value);
    printf("Min coin is : %d \n",result);
}
//////////////////////////////////////
/////////////////Unsolved