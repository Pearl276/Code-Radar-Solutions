#include <stdio.h>
int main() {
    int a, result;
    scanf("%d", &a);
    result= a%2;
    if (result==0)
    {
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}