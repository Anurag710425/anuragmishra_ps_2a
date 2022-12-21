#include <stdio.h>
int power(int x, int n)
{
    int mid, c;
    if (n == 1)
        return x;
    else
    {
        mid = n / 2;
        c = power(x, mid);
        c = c * c;
        return c;
    }
}

int main()
{
    int x, n, a;
    printf("enter your numbver");
    scanf("%d", &x);
    printf("power to find of that no");
    scanf("%d", &n);
    a = power(x, n);
    printf("power of the no is %d", a);
}