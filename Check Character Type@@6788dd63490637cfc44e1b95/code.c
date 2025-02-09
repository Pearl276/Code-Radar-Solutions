#include <stdio.h>
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
        if((a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u'))
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