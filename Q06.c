/*Escreva um algoritmo que lê um valor n inteiro e positivo e que calcula a seguinte soma:
S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
O algoritmo deve escrever o valor final de S.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    float S=0;

    scanf("%d", &n);
    
    for (i=1; i<=n; i++)
    {
        S += 1.0/i;
    }
    printf("%.2f", S);

    return 0;
}