#include <stdio.h>
int main(){
    int n,i;
    scanf("%d", &n);     //size of array
    int arr[n];
    for (i=0; i<n; i++){
        scanf("%d ",&arr[i]);
    }
    int min= arr[0];
    int max= arr[0];
    for (i=1; i<n; i++){
        if (arr[i]>max) (max= arr[i]);
        if (arr[i]<min) (min= arr[i]);
    }
    printf("%d %d", min, max);
    return 0;
}