#include <stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d", &n);     //size of array
    int arr[n];
    for (i=0; i<n; i++){
        scanf("%d ",&arr[i]);
    }
    int min= arr[0];
    int max= arr[0];
    for (i=1; i<n; i++){
        if (arr[i]>max) (max= arr[i]);
        else(max=arr[0]);
        if (arr[i]<min) (min= arr[i]);
        else(min=arr[0]);
    }
    printf("%d %d", min, max);
    return 0;
}