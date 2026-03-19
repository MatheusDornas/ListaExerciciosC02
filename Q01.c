/*Fazer um programa leia uma sequência de N valores inteiros fornecida pelo usuário em uma
linha de entrada e conte o número de valores positivos, negativos e zeros. Considere N fornecido
pelo teclado e os números podem ser maiores do que o limite estabelecido pelo tipo ’int’, sendo
sugerido o uso de ’long int’ e especificador ’ld’.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i,
        p=0, neg=0, z=0;
    scanf("%d", &N);

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
    printf("%d POSITIVOS\n", p);
    printf("%d NEGATIVOS\n", neg);
    printf("%d ZEROS\n", z);
    return 0;
}