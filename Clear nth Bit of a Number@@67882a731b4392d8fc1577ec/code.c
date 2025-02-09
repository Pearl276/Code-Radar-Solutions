#include <stdio.h>
int main() {
    int a,b,nth,bit;
    scanf("%d %d", &a,&b);
    nth=~(1<<b);
    bit=a&nth
    printf("%d", bit);
    return 0;
}