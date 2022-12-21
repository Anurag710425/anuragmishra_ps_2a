#include <stdio.h>
#include <string.h>
void main()
{
    char str1[10], str2[10];
    int leng, i;
    printf("Please insert the string: ");
    gets(str1);
    leng = strlen(str1);
    printf("length of the string is %d\n", leng);
    strrev(str1);
    strcpy(str2, str1);
    strrev(str2);
    if (strcmp(str1, str2) == 0)
        printf("string is palindrome");
    else
        printf("string is not palindrome");
}