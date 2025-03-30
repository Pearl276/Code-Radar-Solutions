#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0; // 0 and 1 are not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main() {
    int n, i, count = 0;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count prime numbers in the array
    for (i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }

    // Print the total count of prime numbers
    printf("%d\n", count);

    return 0;
}
