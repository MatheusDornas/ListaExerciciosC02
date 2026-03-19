/* Faça um programa que imprima todos os elementos da série de Fibonacci menores que L.*/

#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int L, i, fib1=0, fib2=0, fib3=1;

    scanf("%d", &L);


    while(fib3 < L)
    {
        if (fib1 == 0 && fib2 == 0)
        {
            fib1 = fib2;
            fib2 = fib3;
        }
        else
        {
            fib3 = fib1+fib2;
            fib1 = fib2;
            fib2 = fib3;
        }

        if (fib3<L)
        {
            printf("%d ", fib3);
        }
        else
        {
            printf(" ");
        }

    }
    


    return 0;
}