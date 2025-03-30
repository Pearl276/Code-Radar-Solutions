#include <stdio.h>
#include <limits.h>  // For INT_MIN

int main() {
    int i, n;

    // Input size of the array
    scanf("%d", &n);

    if (n < 2) {
        printf("-1\n");  // No second largest possible
        return 0;
    }

    int arr[n];

    // Input elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second_largest = INT_MIN;  // Smallest possible integer

    // Finding largest and second largest
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    // If second_largest was never updated, return -1
    if (second_largest == INT_MIN) {
        printf("-1\n");
    } else {
        printf("%d\n", second_largest);
    }

    return 0;
}
