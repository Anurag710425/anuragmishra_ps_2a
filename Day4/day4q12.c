#include <stdio.h>
#include <math.h>
void main()
{
    int x, y, z, da, db;
    printf("position of Cat A");
    scanf("%d", &x);
    printf("position of Cat B");
    scanf("%d", &y);
    printf("Position Of mouse");
    scanf("%d", &z);
    da = abs(z - x);
    printf("%d", da);
    db = abs(z - y);
    printf("%d", db);
    if (da < db)
    {
        printf("Cat A wins");
    }
    else if (db < da)
    {
        printf("Cat B wins");
    }
    else
        printf("Mouse ");
}