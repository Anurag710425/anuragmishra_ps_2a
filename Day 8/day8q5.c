#include <stdio.h>
int main()
{
    int n, i, j, least_prime;
    printf("enter value of n");
    scanf("%d,&n");
    for (i = 1; i < n; i++)
    {
       primefactor(i);
    }
    return 0;
}
primefactor(n)
{
    int i, j, f;
    if (n % 1 == 0)
        return 1;
    if (n % 2 == 0)
        return 2;
    for (j = 3; j < n; j++)
    {
        if (n % j == 0)
            f = j;
        break;
    }
    return f;
}