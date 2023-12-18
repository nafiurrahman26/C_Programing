#include <stdio.h>
int min(int a, int b)
{
    if(a>b)return b;
    else return a;
}
//Table
void T_display(int a[][50],int m,int n){
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
int coinchange(int a[], int n, int value)
{
    int coins[n+1], i, j, T[n+1][value+1];
    coins[0]=0;
    for(i=1; i<n+1; i++){
        coins[i] = a[i-1];
    }
    for(i=0; i<=n; i++){
        for(j=0; j<=value; j++){
            if(j==0){
                T[i][j] = 0;
            }
            else if(j!=0){
                T[i][j] = 9999;
            }
        }
    }
    T_display(T,n+1,value+1);
    for(i=1; i<=n; i++){
        for(j=0; j<=value; j++){
            if(coins[i] > j){
                T[i][j] = T[i-1][j];
            }
            else if(coins[i] <= j){
                T[i][j] = min(T[i-1][j], 1+T[i][j-coins[i]]);
            }
        }
    }
    T_display(T,n+1,value+1);
    return T[n][value];
}
int main()
{
    int n, i, value;
    n=4;
    int a[4]={20,4,10,2};
    value=10;
    int result = coinchange(a, n, value);

    printf("Min ways to change %d is %d\n", value, result);
    return 0;
}