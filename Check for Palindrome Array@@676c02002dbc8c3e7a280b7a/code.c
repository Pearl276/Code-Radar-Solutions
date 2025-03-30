#include <stdio.h>
int main() {
    int n, i, isPalindrome = 1; // Flag to check palindrome
    // Input array size
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Check if array is a palindrome
    for (i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            isPalindrome = 0; // If mismatch found, set flag to false
            break; // No need to check further
        }
    }
    if (isPalindrome){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
