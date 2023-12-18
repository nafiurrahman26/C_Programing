#include <stdio.h>
#include <stdbool.h>

#define MAXN 1005

int n, a[MAXN][MAXN], vis[MAXN], color[MAXN], red_count, green_count;

bool dfs(int u, int c) {
    vis[u] = 1;
    color[u] = c;
    if (c == 1) red_count++;
    else green_count++;
    for (int v = 1; v <= n; v++) {
        if (a[u][v] && !vis[v]) {
            if (!dfs(v, -c)) return 0;
        } else if (a[u][v] && vis[v] && color[u] == color[v]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    scanf("%d", &n);
    bool possible = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            red_count = green_count = 0;
            if (!dfs(i, 1)) {
                possible = 0;
                break;
            }
        }
    }
    if (possible) {
        printf("Possible! Possible!\n");
        int a = red_count, b = n - red_count;
        printf("%d %d\n", a > b ? a : b, a < b ? a : b);
    } else {
        printf("Pardon Dear Lord! It is not Possible.\n");
    }
    return 0;
}
