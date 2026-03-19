/*Faça um programa que imprima os L primeiros elementos da série de Fibonacci. Por exemplo,
se o usuário digitou o número 40, deverão ser apresentados os 40 números da sequência na tela.*/

#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int L, i, fib1=0, fib2=0, fib3=1;

    scanf("%d", &L);
    
    for (i=0; i<L; i++)
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
        printf("%d ", fib3);
    }



    return 0;
}