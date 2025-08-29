#include <stdio.h>


int main()
{   
    //Declaro as variaveis que serão utilizadas no programa.
    int vendas[5];
    int valorSoma = 0;
    int i = 0;
    //faço um laço de repetição usando FOR para solicitar os dados ao usuario e guardalos no vetor.
    for(i = 0; i < 5; i++){
        printf("Digite o valor da venda do dia %d: ", i + 1);
        scanf("%d", &vendas[i]);
    }
    //Usei esse printf apenas para pura estetica
    printf("\n----Valores por dia----\n\n");
    //Mais um laço for que mostra os valores de cada dia linha por linha como solicitado e soma os valores em uma variavel do total dos valores.
    for(i = 0; i < 5; i++){
        printf("Dia %d: Valor: %d\n", i + 1, vendas[i]);
        valorSoma += vendas[i];
    }
    //Outro printf por pura estetica.
    printf("\n----Total de Vendas----\n\n");
    //Agora esse printf mostra na tela do usuario o valor completo de vendas somado dos 5 dias como solicitado no enunciado.
    printf("O valor total de vendas nos 5 dias foi de: %d\n", valorSoma);
    return 0;
}