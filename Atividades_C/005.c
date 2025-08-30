// Aula 03 - 29/08
// Professor Marcos Antônio
// Área de um círculo
// Faça um programa em C que leia o raio de um círculo e calcule:
// 1. O comprimento da circunferência.
// 2. A área do círculo.

#include <stdio.h>
#include <math.h>

int main()
{
    float raio, comprimento, area;

    printf(" === PROPRIEDADES DE UM CIRCULO === \n");

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    comprimento = 2 * M_PI * raio;
    area = M_PI * raio * raio;

    printf("O comprimento da circunferencia e igual a %.2fm.\n", comprimento);
    printf("A area do circulo e igual a %.2fm2.\n", area);

    return 0;
}
