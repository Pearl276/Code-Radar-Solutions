#include <stdio.h>
int main(){
    int a,b, bit, final;
    scanf("%d %d", &a, &b );
    bit=1<<b;
    final= a||bit;
    printf("%d", final);
    return 0;
} 