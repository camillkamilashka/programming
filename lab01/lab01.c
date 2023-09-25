#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, sa, sb;
    printf("Enter a -> ");
    scanf("%d", &a);
    printf("Enter b -> ");
    scanf("%d", &b);
    sa = a / 10 + a % 10;
    sb = b / 10 + b % 10;
    if (sa > sb)
        printf("%f\n", (float)sb / a);
    if (sb > sa)
        printf("%f\n", (float)sa / b);
}