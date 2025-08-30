// Aula 03 - 29/08
// Professor Marcos Antônio
// Energia cinética
// Ler a massa (kg) e a velocidade (m/s), calcular:
// Ec = m * v² / 2

#include <stdio.h>

int main()
{
    float energia_cinetica, massa, velocidade;

    printf(" === CALCULO DE ENERGIA CINETICA === \n");

    printf("Digite o peso da massa(kg): ");
    scanf("%f", &massa);

    printf("Digite a velocidade(m/s): ");
    scanf("%f", &velocidade);

    energia_cinetica = massa * (velocidade * velocidade) / 2;

    printf(" === RESULTADO === \n");

    printf("A energia cinetica equivale a %.2fJ.", energia_cinetica);

    return 0;
}
