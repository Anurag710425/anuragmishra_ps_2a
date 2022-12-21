#include <stdio.h>
void main()
{
    int i, a[10], n, k, b[10], digit_1, digit_2, diff;
    printf("enter no of elements");
    scanf("%d", &n);
    printf("enter value of k");
    scanf("%d", k);
    printf("enter the elemnts of array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] < k)
            b[i] = a[i];
    }
    for (i = 0; i < n; i++)
    {
        digit_1 = b[i] / 10;
        digit_2 = b[i] % 10;
        diff = digit_1 - digit_2;
    }
    if (diff == 1)
    {
        printf("%d", b[i]);
    }
    if (diff = -1)
    {
        printf("%d", b[i]);
    }
}