/*Adaptar o programa anterior para que ele calcule o percentual dos valores positivos, negativos e
zeros em relação ao total de valores fornecidos. Considere o uso do tipo ’long int’ e especificador
’ld’.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N, i,
        p=0, neg=0, z=0;
    scanf("%f", &N);

    long int n;

    for (i=0; i<N; i++)
    {
        scanf("%ld", &n);
        if(n>0)
            {
                p++;
            }
        else if (n<0)
        {
            neg++;
        }
        else
        {
            z++;
        }
    }
    printf("%.0f%% POSITIVOS\n", (p/N)*100);
    printf("%.0f%% NEGATIVOS\n", (neg/N)*100);
    printf("%.0f%% ZEROS\n", (z/N)*100);
    return 0;
}




