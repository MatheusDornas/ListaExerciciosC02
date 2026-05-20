/* A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o
salário e número de filhos de cada habitante. A prefeitura deseja saber:
a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$100,00.
O final da leitura de dados se dará com a entrada de um salário negativo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float totsal=0,maiorsal=0, porcent, salario;
    int nfilhos;
    int nhabitantes=0, nsalario100=0, totfilhos=0;

    scanf("%f", &salario);
    
    while (salario >= 0)
    {
        scanf("%d", &nfilhos);

        nhabitantes ++;
        totsal += salario;
        totfilhos += nfilhos;

        if (salario <= 100)
        {
            nsalario100++;
        }
        if (salario > maiorsal)
        {
            maiorsal = salario;
        }

        scanf("%f", &salario);
    } 
    
    porcent = (nsalario100*1.0/nhabitantes)*100;

    printf("%.2f\n", totsal/nhabitantes);
    printf("%d\n", totfilhos/nhabitantes);
    printf("%.2f\n", maiorsal);
    printf("%.2f\n", porcent);
    printf("\n");



    return 0;
}