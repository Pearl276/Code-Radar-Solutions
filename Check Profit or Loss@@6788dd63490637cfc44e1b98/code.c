#include <stdio.h>
int main() {
    int SP, CP;
    scanf("%d %d", &SP, &CP);
    if(SP>CP){
        printf("Profit");
    }
    else if(CP>SP){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}