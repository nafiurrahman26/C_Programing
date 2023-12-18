#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int elixirs[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &elixirs[i]);
    }

    long long moves = 0;

    for (int i = 1; i < n; i++) {
        if (elixirs[i] < elixirs[i - 1]) {
            moves += elixirs[i - 1] - elixirs[i];
            elixirs[i] = elixirs[i - 1];
        }
    }

    printf("%lld\n", moves);

    return 0;
}