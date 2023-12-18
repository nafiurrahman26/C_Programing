#include <stdio.h>

int binary_search(int arr[], int n, int a);

int binary_search(int arr[], int n, int a) {
    int first = 0, last = n - 1, mid;
    while (last >= first) {
        mid = (first + last) / 2;
        if (a == arr[mid]) {
            return mid;
        } else if (a < arr[mid]) {
            last = mid - 1;
        } else {
            first = mid + 1;
        }
    }
    printf("Searching element not found!\n");
    return -1;
}

int main() {
    int sch_element, n, i;
    printf("How many numbers do you want: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter some numbers in the array (sorted): ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element you want to search for: ");
    scanf("%d", &sch_element);

    int result = binary_search(arr, n, sch_element);
    if (result != -1) {
        printf("Element found at index %d\n", result+1);
    }
    
    return 0;
}
