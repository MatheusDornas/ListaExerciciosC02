/*
Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para
isto, mandou digitar uma linha para cada mercadoria com o preço de compra e de venda de cada
uma. A última linha contém preço de compra igual a 0. Escreva um programa que:
    a) Determine e escreva quantas mercadorias proporcionaram:
• Lucro < 10%
• 10% <= lucro <= 20%
• Lucro > 20%
    b) Determine e escreva o valor total de compra e de venda de todas as mercadorias, assim
    como o lucro total.
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    float precocompra, precovenda, totalcompra=0, totalvenda=0, lucrototal=0, lucro=0, lucropercent=0;
    int lucro10=0, lucro10_20=0, lucro20=0;

    scanf("%f", &precocompra);

    while (precocompra > 0)
    {
        scanf("%f", &precovenda);
        
        totalcompra += precocompra;
        totalvenda += precovenda;
        
        lucro = precovenda-precocompra;

        lucropercent = ((precovenda/precocompra)*100)-100;
        
        lucrototal += lucro;
        
        if (lucropercent < 10)
        {
            lucro10 ++;
        }
        else if (lucropercent >= 10 && lucropercent <= 20)
        {
            lucro10_20 ++;
        }
        else if (lucropercent > 20)
        {
            lucro20 ++;
        }
        
        scanf("%f", &precocompra);
    }
    
    printf("%d\n", lucro10);
    printf("%d\n", lucro10_20);
    printf("%d\n", lucro20);

    printf("%.2f\n", totalcompra);
    printf("%.2f\n", totalvenda);
    printf("%.2f\n", lucrototal);



    return 0;
}