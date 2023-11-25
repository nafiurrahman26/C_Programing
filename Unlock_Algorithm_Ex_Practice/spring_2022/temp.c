#include <stdio.h>

int main() {
    int n, temp;
    scanf("%d", &n);
    int array[n];
    int i, j;
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // 2n/3
    int first = (2 * n) / 3;
    int sex = (3 * n) / 4;
    int secend = n - sex;
    secend = secend - 1;

    printf("%d %d %d\n", first, secend, sex);

    for (i = 0; i < first - 1; i++) {
        for (j = 0; j < first - 1 - i; j++) {
            if (array[j] < array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // Now, let's sort the remaining portion of the array
    for (i = secend; i < n - 1; i++) {
        for (j = secend; j < n - 1; j++) {
            if (array[j] < array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
