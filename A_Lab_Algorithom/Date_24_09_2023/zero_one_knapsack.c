#include<stdio.h>
// void TableDisplay(int i,int w,int a[][w]){
//     printf("Display Table: \n");
//     for(int j=0;j<i;j++){
//         for(int k=0;k<w;k++){
//             printf("%d ",a[j][k]);
//         }
//         printf("\n");
//     }
//     printf("\n");
// }
int max(int a,int b){
    // if(a>b){
    //     return a;
    // }else{
    //     return b;
    // }
    return (a>b)?a:b;
}
int knapsack(int weights[],int values[],int capacity,int n){
    int dp[n+1][capacity+1];
    int i,w;
    for(i=0;i<n+1;i++){
        for(w=0;w<capacity+1;w++){
            if(i==0 || w==0){
                dp[i][w]=0;
            }else if(weights[i-1]<=w){
                dp[i][w]=max(values[i-1]+dp[i-1][w-weights[i-1]],dp[i-1][w]);
            }else{
                dp[i][w]=dp[i-1][w];
            }
        }
    }
    // TableDisplay(i,w,dp);
    return dp[n][capacity];
}

int main(){
    printf("------------Display----------\n");
    int n,capacity;
    printf("Enter the number of item: ");
    scanf("%d",&n);
    int values[n],weights[n];
    int i; 
   
    printf("Enter the values and weights of the items:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter %d values and weights : ",i+1);
        scanf("%d %d", &values[i], &weights[i]);
    }
    printf("Enter the knapsack capacity: ");
    scanf("%d",&capacity);

    int val=knapsack(weights,values,capacity,n);
    printf("Total profit is : %d",val);
    

}