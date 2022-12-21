#include <stdio.h>
int fibbo(int n, int next, int r)
{
    if (n == 1)
        return r;
    else
        return fibbo(n - 1, next + r, next);
}
int main()
{
    int n, fibb, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fibb = fibbo(i, 1, 0);
        printf("%d", fibb);
    }
}
