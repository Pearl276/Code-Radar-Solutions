#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int x = 0;
    for (int i = 0; i < n - 1; i++) { 
        if (arr[i] > arr[i + 1]) {
            printf("Not Sorted\n");
            x = 1;
            break;
        }
    }
    if (x == 0) {
        printf("Sorted\n");
    }
    return 0;
}