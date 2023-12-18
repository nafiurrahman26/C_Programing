#include <stdio.h>

void quickSort(int arr[], int left, int right);

int main() {
    int testCase, count = 0;
    scanf("%d", &testCase);
    
    while (count < testCase) {
        int n, m;
        scanf("%d %d", &n, &m);
        int i, j;
        int array1[n], array2[m], newarray[m + n];
        
        for (i = 0; i < n; i++) {
            scanf("%d", &array1[i]);
            newarray[i] = array1[i];
        }

        for (i = 0; i < m; i++) {
            scanf("%d", &array2[i]);
            newarray[n + i] = array2[i];
        }

        int size = m + n;

        // Sorting the new array using QuickSort
        quickSort(newarray, 0, size - 1);

        // Print
        for (i = 0; i < size; i++) {
            printf("%d ", newarray[i]);
        }
        printf("\n");
        count++;
    }

    return 0;
}

void quickSort(int arr[], int left, int right) {
    int i = left, j = right;
    int pivot = arr[(left + right) / 2];
    int temp;

    while (i <= j) {
        while (arr[i] > pivot) {
            i++;
        }
        while (arr[j] < pivot) {
            j--;
        }
        if (i <= j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    if (left < j) {
        quickSort(arr, left, j);
    }
    if (i < right) {
        quickSort(arr, i, right);
    }
}
