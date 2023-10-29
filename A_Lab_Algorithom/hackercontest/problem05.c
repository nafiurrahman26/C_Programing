#include <stdio.h>
#include <stdlib.h>

long getWays(int n, int c[], int m) {
    long* ways = (long*)malloc((n + 1) * sizeof(long));
    if (ways == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    for (int i = 0; i <= n; i++) {
        ways[i] = 0;
    }
    ways[0] = 1;

    for (int j = 0; j < m; j++) {
        for (int amount = c[j]; amount <= n; amount++) {
            ways[amount] += ways[amount - c[j]];
        }
    }

    long result = ways[n];
    free(ways);
    return result;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int c[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &c[i]);
    }

    long result = getWays(n, c, m);
    printf("%ld\n", result);

    return 0;
}
