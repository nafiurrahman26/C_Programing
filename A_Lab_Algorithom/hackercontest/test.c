#include <stdio.h>

// Function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform integer division with rounding
int integerDivision(int dividend, int divisor) {
    return (dividend + divisor - 1) / divisor;
}

// Function to sort the array in descending order
void descendingSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Function to sort the array in ascending order
void ascendingSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    int size = integerDivision(2 * n, 3);
    int arr[20];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the first 2N/3 elements in descending order
    descendingSort(arr, size);

    // Sort the last 3N/4 elements in ascending order
    int lastPartSize = integerDivision(3 * n, 4);
    ascendingSort(arr + size, lastPartSize);

    // Calculate the middle position
    int middle = n / 2;

    printf("Middle Value: %d\n", arr[middle]);

    printf("Final Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
