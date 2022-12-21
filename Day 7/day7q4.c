#include <stdio.h>
#include <string.h>
void main()
{
    char str[10], ch;
    int i, j, n, count;
    printf("enter elements of string");
    gets(str);
    n = strlen(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            count++;
        }
    }
    printf("no of words iun the paragrah %d", count);
}
