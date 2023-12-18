#include<stdio.h>
int max_way(int coins[],int x,int n);

int main(){
    int coin[]={6,2};
    int exc=12;
    int size=sizeof(coin)/sizeof(coin[0]);
    // printf("%d ",size);
    int val= max_way(coin,exc,size);
    printf("Maximum number of way is: %d\n",val);
}


int max_way(int coins[],int x,int n){
    int dp[n+1][x+1];
    for(int i=0;i<=n;i++){
        dp[i][0] = 1;
    }
    for (int j = 1; j <=x; j++){
        dp[0][j] = 0;
    }    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=x;j++){
            if(coins[i-1]>j){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j]+dp[i][j-coins[i-1]];
            }
        }
    }
    return dp[n][x];
}