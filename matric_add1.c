#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Step 1: Sort array
    qsort(a, n, sizeof(int), compare);

    // Step 2: Add alternate elements
    int sum = 0;
    for(int i = 0; i < n; i += 2) {
        sum += a[i];
    }

    printf("%d", sum);

    return 0;
}
