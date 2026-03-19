/*
Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de
códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:
• 1,2,3,4 = voto para os respectivos candidatos;
• 5 = voto nulo;
• 6 = voto em branco;
Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva:
• total de votos para cada candidato;
• total de votos nulos;
• total de votos em branco.
Como finalizador do conjunto de votos, tem-se o valor 0
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int voto, voto1=0, voto2=0, voto3=0, voto4=0, voto5=0, voto6=0;

    scanf("%d", &voto);

    while (voto > 0)
    {
        if (voto==1)
        {
            voto1++;
        }
        else if (voto==2)
        {
            voto2++;
        }
        else if (voto==3)
        {
            voto3++;
        }
        else if (voto==4)
        {
            voto4++;
        }
        else if(voto==5)
        {
            voto5++;
        }
        else if (voto==6)
        {
            voto6++;
        }

        scanf("%d", &voto);
    }
    printf("%d\n", voto1);
    printf("%d\n", voto2);
    printf("%d\n", voto3);
    printf("%d\n", voto4);
    printf("%d\n", voto5);
    printf("%d\n", voto6);

    return 0;
}