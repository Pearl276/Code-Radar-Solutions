#include <stdio.h>

int main() {
    int n, position;
    scanf("%d", &n);
    
    if (n == 0) {
        printf("No");
        return 0; 
    }
    position = 1;
    while (!(n & 1)) { 
        position++;
        n = n >> 1;
    }
    printf("%d", position);
    return 0;
}
