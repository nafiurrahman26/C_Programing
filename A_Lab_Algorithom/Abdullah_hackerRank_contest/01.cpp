#include <bits/stdc++.h>
using namespace std;

int mF(int n, int x, vector<int> &p, vector<int> &f)
{
    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j <= x; ++j)
        {
            if (p[i - 1] <= j)
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - p[i - 1]] + f[i - 1]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][x];
}

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> p(n);
    vector<int> f(n);

    for (int i = 0; i < n; ++i)
        cin >> p[i];

    for (int i = 0; i < n; ++i)
        cin >> f[i];

    int maxF = mF(n, x, p, f);
    cout << maxF << endl;

    return 0;
}
