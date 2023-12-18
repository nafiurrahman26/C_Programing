#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int pro[n], wei[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &pro[i], &wei[i]);
        }
        int f, b;
        scanf("%d", &f);
        int sum = 0;
        while (f--)
        {
            scanf("%d", &b);
            int dp[n + 1][b + 1];
            for (int i = 0; i <= n; i++)
            {
                for (int w = 0; w <= b; w++)
                {
                    if (i == 0 || w == 0)
                    {
                        dp[i][w] = 0;
                    }
                    else if (wei[i - 1] <= w)
                    {
                        if (pro[i - 1] + dp[i - 1][w - wei[i - 1]] > dp[i - 1][w])
                        {
                            dp[i][w] = pro[i - 1] + dp[i - 1][w - wei[i - 1]];
                        }
                        else
                        {
                            dp[i][w] = dp[i - 1][w];
                        }
                    }
                    else
                    {
                        dp[i][w] = dp[i - 1][w];
                    }
                }
            }
            sum += dp[n][b];
        }
        printf("%d\n", sum);
    }
}