#include <stdio.h>
int main(){
    int i,n;
    scanf("%d", &n);  //size of array
    if (n < 2) {
        return 0;
    }
    int arr[n];
    for (i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int largest= arr[0];
    int second_largest= -1;
    for (i=1; i<n; i++){
        if (arr[i]>largest){
            second_largest= largest;
            largest= arr[i];
        }
        else if(arr[i]>second_largest && arr[i]!=largest){
            second_largest= arr[i];
        }
    }
    if (second_largest == -1) {
        printf("-1");
    } 
    else {
        printf("%d\n", second_largest);
    }
    return 0;
}