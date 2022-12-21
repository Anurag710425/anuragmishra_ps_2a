#include <stdio.h>
int fibo(int n)
{
    int x;
    if (n == 0)
        return 1;
    else if (n == 1)
        return 1;
    else
        return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int fib, n, i;
    printf("enter no terms");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%d", fibo(i));
    }
}
