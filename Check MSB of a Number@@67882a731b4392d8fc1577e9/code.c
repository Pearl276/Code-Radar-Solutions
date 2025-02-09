#include <stdio.h>
int main() {
    int a, MSB;
    scanf("%d", &a);
    MSB= a<<31;
    if (a&MSB !=0)
    {
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}