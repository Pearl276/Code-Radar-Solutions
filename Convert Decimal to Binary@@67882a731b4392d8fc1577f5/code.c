#include <stdio.h>

int main() {
    int n, bit;
    int leadingZero = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("0");
        return 0;
    }
    for (int i = 31; i >= 0; i--) {
        bit = (n >> i) & 1; 
        if (bit == 1) {
            leadingZero = 0;
        }
        if (!leadingZero) {
            printf("%d", bit);
        }
    }
    printf("\n");
    return 0;
}