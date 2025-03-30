#include <stdio.h>

void countEvenOdd(int arr[], int n, int *evenCount, int *oddCount) {
    *evenCount = 0;
    *oddCount = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            (*evenCount)++;
        } else {
            (*oddCount)++;
        }
    }
}

int main() {
    int n;
    
    // Taking array size input
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n]; // Declare an array of size 'n'
    
    // Taking array elements input
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int even, odd;
    countEvenOdd(arr, n, &even, &odd);
    
    // Printing results
    printf("%d\n", even);
    printf(""%d\n", odd);
    
    return 0;
}
