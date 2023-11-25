#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, s;
    x = 0.0; 
    scanf("%lf", &s); 
    double n = 2 / s + 1;
    while (n) 
   {
        if (x >= -1 && x <= 1)
          y = exp(-2*sin(x));
        if (x > 1 && x <= 2)
          y = x*x - cos(x)/sin(x);
         printf("%lf %lf\n", x, y);
        x += s;
        n = n-1;
   }

}