#include <stdio.h>
#include <string.h>

void selectionSort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            char temp[100];
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}

void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
}
