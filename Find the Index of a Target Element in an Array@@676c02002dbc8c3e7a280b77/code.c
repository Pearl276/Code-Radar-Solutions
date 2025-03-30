#include <stdio.h>
int main() {
    int n, i, target, index = -1;
    scanf("%d\n", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    scanf("%d", &target);
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            index = i; 
            break;      
        }
    }
    printf("%d\n", index);
    return 0;
}
