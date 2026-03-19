#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n, i, d;
    float E=1, f;

    scanf("%d", &n);

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