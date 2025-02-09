#include <stdio.h>
int main() {
   char T;
   scanf("%c", &T);
   switch (T){
    case 'R':
    printf("Stop");
    break;
    case 'G':
    printf("Go");
    break;
    case 'Y':
    printf("Slow Down");
    break;
    default:
    printf("Invalid input");
   }
    return 0;
}