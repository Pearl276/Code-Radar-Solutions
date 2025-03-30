#include <stdio.h>
#include <stdlib.h>
int sumOfDigits(int num) {
    int sum = 0;
    num= abs(num);
    while (num != 0) {
        sum += num % 10; 
        num /= 10;       
    }
    return sum;
}
int main() {
    int n,i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d ",sumOfDigits(arr[i]));
    }
    return 0;
}
