#include <stdio.h>

int main() {
    int n, k;
    int arr[100];
    int comparisons = 0;
    int found = 0;

    // Read array size
    scanf("%d", &n);

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read key to search
    scanf("%d", &k);

    // Linear search
    for (int i = 0; i < n; i++) {
        comparisons++;
        if (arr[i] == k) {
            printf("Found at index %d\n", i);
            found = 1;
            break;
        }
    }
 
    if (!found) {
        printf("Not Found\n");
    }

    printf("Comparisons = %d\n", comparisons);

    return 0;
}
