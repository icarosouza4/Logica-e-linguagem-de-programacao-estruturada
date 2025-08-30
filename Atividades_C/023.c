// Aula 03 - 29/08
// Professor Marcos Antônio
// Conversão de Moeda
// Ler um valor em reais e a cotação do dólar, e converter.
// Fórmula: US$ = R$ / cotação

#include <stdio.h>

int main()
{
    float reais, cotacao, dolar;

    printf(" === CONVERSOR DE MOEDAS === \n");

    printf("Informe o valor em reais: R$ ");
    scanf("%f", &reais);

    printf("Informe a cotacao atual do dolar em reais: R$ ");
    scanf("%f", &cotacao);

    dolar = reais / cotacao;

    printf(" === RESULTADO === \n");
    
    printf("R$%.2f equivale a U$%.2f.", reais, dolar);

    return 0;
}
