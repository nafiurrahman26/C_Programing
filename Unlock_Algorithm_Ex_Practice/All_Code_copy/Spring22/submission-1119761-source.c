#include <stdio.h>

int main() {
    int coins[] = {1, 2, 4, 8, 16, 32};
    int numCoins = sizeof(coins) / sizeof(coins[0]);

    int t, p;
    scanf("%d %d", &t, &p);

    int amount = p - t;
    int marioFavoriteCoin = 2;
    int marioFavoriteCoinUsed = 0;

    int i = numCoins - 1;
    while (amount > 0 && i >= 0) {
        if (coins[i] <= amount) {
            amount -= coins[i];
            if (coins[i] == marioFavoriteCoin) {
                marioFavoriteCoinUsed = 1;
            }
        }
        i--;
    }

    if (amount == 0 && marioFavoriteCoinUsed) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

