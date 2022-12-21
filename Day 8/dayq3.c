#include <stdio.h>
int main()
{
    int n, i, l, k, sum1 = 0, sum2 = 0, s;
    printf("enter lemngth of the number ");
    scanf("%d", &l);
    printf("enter the number");
    scanf("%d", &n);
    for (i = 1; i <= l; i++)
    {
        k = n % 10;
        sum1 += k;
        n = n / 10;
        if (sum1 > 9 && n == 0)
    }
    printf("sum of the number is%d\n", sum1);

    return 0;
}