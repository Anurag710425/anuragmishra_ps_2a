#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c, k, x, i = 1;
    printf("enter value of a b c");
    scanf("%d %d %d", &a, &b, &c);
    // calculating power
    k = pow(a, b);
    while (i <= c && k > 0)
    {
        x = k % 10; // finding last digit of the no
        i++;
        if (i == k)
            break;
        k = k / 10; // removes last digit of the no
    }
    printf("%d", x);
}