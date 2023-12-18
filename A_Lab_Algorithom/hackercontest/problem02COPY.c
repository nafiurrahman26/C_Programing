#include <stdio.h>
#include <stdlib.h>

int compare_descending(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int compare_ascending(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int N;
    scanf("%d", &N);
    
    int array[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    int desc_end = (2 * N / 3);
    int asc_start = (N - (3 * N / 4));
    
    qsort(array, desc_end, sizeof(int), compare_descending);
    qsort(&array[asc_start], N - asc_start, sizeof(int), compare_ascending);
    
    int middle_value = array[N / 2];
    printf("%d\n", middle_value);

    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    
    return 0;
}