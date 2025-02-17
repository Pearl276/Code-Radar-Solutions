#include <stdio.h>

int main() {
    int n, bit;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("0");
        return 0;
    }
    for (int i = 31; i >= 0; i--) {
        bit = (n >> i) & 1; 
        printf("%d", bit); 
    }
    printf("\n");
    return 0;
}
