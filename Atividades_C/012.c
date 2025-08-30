// Aula 03 - 29/08
// Professor Marcos Antônio
// Cálculo de consumo de combustível
// Ler a distância percorrida e o combustível gasto, calcular: 
// Consumo: distancia / litros

#include <stdio.h>

int main()
{
    float consumo, distancia, litros;

    printf(" === CONSUMO DE COMBUSTIVEL === \n");

    printf("Digite a distancia percorrida em km: ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de combustivel gasto em litros: ");
    scanf("%f", &litros);

    consumo = distancia / litros;

    printf(" === RESULTADO === \n");

    printf("O consumo e igual a %.2f/litro de combustivel.", consumo);

    return 0;
}
