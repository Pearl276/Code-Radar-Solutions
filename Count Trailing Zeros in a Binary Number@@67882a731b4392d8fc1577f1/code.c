#include <stdio.h>
int main(){
    int n, count;
    scanf("%d", &n);
    if (n==0){
        printf("32\n");
    }
    count=0;
    while((n&1)==0){
        count++;
        n=n>>1;
    }
    printf("%d", count);
    return 0;
}