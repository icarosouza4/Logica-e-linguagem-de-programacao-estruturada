// Aula 03 - 29/08
// Professor Marcos Antônio
// Equação da Força
// Ler massa e aceleração para calcular a força resultante.
// Fórmula: F = m * a

#include <stdio.h>

int main()
{
    float forca, massa, aceleracao;

    printf(" === EQUACAO DA FORCA === \n");

    printf("Informe a massa(kg): ");
    scanf("%f", &massa);

    printf("Informe a aceleracao(m/s2): ");
    scanf("%f", &aceleracao);

    forca = massa * aceleracao;

    printf("A FORCA e igual a %.2fJ.\n", forca);

    return 0;
}
