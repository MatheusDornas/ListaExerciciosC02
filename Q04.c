#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int i, d;
    float E=1, f, n;

    scanf("%f", &n);

    for (i=1; i<=n; i++)
    {
        f=1;
        
        for (d=1; d<=i; d++)
        {
            f *= d;
        }

        E += 1/f;
    }

    printf("%.2f", E);

    return 0;
}