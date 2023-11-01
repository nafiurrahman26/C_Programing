#include <stdio.h>

int main() {
    int coin[] = {1, 2, 4, 8, 16, 32};
    int T, P, count = 0;
    scanf("%d %d", &T, &P);
    int returnAmount = P - T;
    while (returnAmount != 0) {
        if (returnAmount >= 32)
            returnAmount -= 32;
        if (returnAmount >= 16)
            returnAmount -= 16;
        if (returnAmount >= 8)
            returnAmount -= 8;
        if (returnAmount >= 4)
            returnAmount -= 4;
        if (returnAmount >= 2) {
            returnAmount -= 2;
            printf("Yes\n");
        } else
            printf("No\n");
        break;
    }
}