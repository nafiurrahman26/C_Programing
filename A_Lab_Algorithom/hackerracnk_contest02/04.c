#include <stdio.h>

#define MOD 1000000007

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    
    int coins[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &coins[i]);
    }

    // Create an array to store the number of ways to make each sum from 0 to x.
    long long dp[x + 1];
    dp[0] = 1;
    
    for (int i = 1; i <= x; i++) {
        dp[i] = 0;
        for (int j = 0; j < n; j++) {
            if (i - coins[j] >= 0) {
                dp[i] = (dp[i] + dp[i - coins[j]]) % MOD;
            }
        }
    }

    printf("%lld\n", dp[x]);
    return 0;
}