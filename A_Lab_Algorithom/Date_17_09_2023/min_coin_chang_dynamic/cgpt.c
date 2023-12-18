#include <stdio.h>
#include <limits.h> // for INT_MAX

int min(int a, int b) {
    return a < b ? a : b;
}
void display(int arr[][20],int n,int value){
    int i,j;
    printf("Table: \n");
    for(i=0;i<n;i++){
        for(j=0;j<value;j++){
            printf("%d      ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int coinchange(int a[], int n, int value) {
    int arr[n + 1][value + 1];
    int i, j;

    // Initialize the base case (0 coins needed for value 0)
    for (i = 0; i <= n; i++) {
        arr[i][0] = 0;
    }

    // Initialize the base case (infinity for value > 0)
    for (j = 1; j <= value; j++) {
        arr[0][j] = 999;
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= value; j++) {
            if (a[i - 1] > j) {
                arr[i][j] = arr[i - 1][j];
            } else {
                arr[i][j] = min(arr[i - 1][j], 1 + arr[i][j - a[i - 1]]);
            }
        }
    }
display(arr,n+1,value+1);
    return arr[n][value]; // The minimum number of coins needed.
    
}
int main(){
    int n=4,i;

    int a[4]={1,2,10,20};

    int value=20;

    int result;
    result= coinchange(a,n,value);
    printf("%d",result);
}

// int main() {
//     int n, i;
//     scanf("%d", &n);
//     int a[n];
//     for (i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }
//     int value;
//     scanf("%d", &value);
//     int result = coinchange(a, n, value);
//     printf("Minimum number of coins required: %d\n", result);
//     return 0;
// }
