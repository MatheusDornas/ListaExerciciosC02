/*Faça um programa que receba dez números e verifique se eles são divisíveis por 3 e 9 (ao mesmo
tempo), por 2 e por 5. Caso algum número não seja divisível por nenhum desses números mostre
a mensagem “Numero nao eh divisivel pelos valores”. Apresente também ao final a quantidade
de números divisíveis por:
a) 3 e 9 ao mesmo tempo;
b) por 2;
c) por 5.*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, divisivel=0;
    long int nint;
    double n;
    float por9e3=0, por2=0, por5=0;

    for (i=0; i<10; i++)
    {
        divisivel = 0;
        scanf("%lf", &n);
        nint = (long int)n;
        if (nint%3==0 && nint%9==0)
        {
            por9e3++;
            divisivel=1;
        }
        if (nint%2==0)
        {
        
            por2++;
            divisivel=1;
        }
        if (nint%5==0)
        {
            por5++;
            divisivel=1;
        }
        if (divisivel==0)
        {
            printf("Numero nao eh divisivel pelos valores\n");
        }
    }
    
    printf("%.0f Numeros sao divisiveis por 3 e por 9\n", por9e3);
    printf("%.0f Numeros sao divisiveis por 2\n", por2);
    printf("%.0f Numeros sao divisiveis por 5", por5);

    return 0;
}