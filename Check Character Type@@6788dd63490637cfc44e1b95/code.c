#include <stdio.h>
#include <ctype.h>
int main() {
    char a;
    scanf("%c", &a);
    if((a>='0')&&(a<='9'))
    {
        printf("Digit");
    }
    else if((a>='A'&&a<='Z')||(a>='a'&&a<='z'))
    {
        char lower_a = tolower(a);
        if((lower_a=='a')||(lower_a=='e')||(lower_a=='i')||(lower_a=='o')||(lower_a=='u'))
        {
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else{
        printf("Special Character");
    }
    return 0;
}