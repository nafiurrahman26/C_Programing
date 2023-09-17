#include <stdio.h>
int min(int a, int b)
{
    if(a>b)return b;
    else return a;
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
    return T[n][value];
}
int main()
{
    int n, a[100], i, value;
    printf("Insert how many coin: ");
    scanf("%d", &n);
    printf("Insert All Coin: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter Exchang value: ");
    scanf("%d", &value);
    int result = coinchange(a, n, value);

    printf("Min ways to change %d is %d\n", value, result);
    return 0;
}