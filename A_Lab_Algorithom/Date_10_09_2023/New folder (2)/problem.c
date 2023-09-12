#include <stdio.h>

void findSubsequence(int arr[], int n, int fixed_increase, int fixed_divisor) {
    int subsequence[n];
    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        if ((arr[i + 1] - arr[i] == fixed_increase) && (arr[i] % fixed_divisor == 0)) {
            subsequence[count] = arr[i];
            count++;
        } else {
            if (count > 0) {
                subsequence[count] = arr[i];
                count++;
                break;
            }
        }
    }

    if (count > 0) {
        subsequence[count] = arr[n - 1];
        count++;
    }

    if (count >= 2) {
        printf("Yes\n");
        printf("Subsequence: ");
        for (int i = 0; i < count; i++) {
            printf("%d ", subsequence[i]);
        }
        printf("\nCount: %d\n", count);
    } else {
        printf("No\n");
    }
}

int main() {
    // int arr[] = {6, 12, 3, 19, 25, 9, 1};
    int arr[] = {1,3,6,9,12,19,25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int fixed_increase = 3;
    int fixed_divisor = 3;

    findSubsequence(arr, n, fixed_increase, fixed_divisor);

    return 0;
}
