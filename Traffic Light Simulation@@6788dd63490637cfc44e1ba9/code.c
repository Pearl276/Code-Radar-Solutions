#include <stdio.h>
int main() {
   char T;
   scanf("%c", &T);
   switch (T){
    case 'R':
    printf("Stop");
    case 'G':
    printf("Go");
    case 'Y':
    printf("Slow Down");
    default:
    printf("Invalid input");
   }
    return 0;
}