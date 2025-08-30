// Aula 03 - 29/08
// Professor Marcos Antônio
// Área do círculo
// Ler o raio de um círculo e calcular a área.
// Fórmula: A = M_PI * r²

#include <stdio.h>
#include <math.h>

int main()
{
    float r, area;

    printf(" === PROPRIEDADES DE UM CIRCULO === \n");

    printf("Informe o raio do circulo: ");
    scanf("%f", &r);

    area = M_PI * (r * r);

    printf("A AREA DO CIRCULO e igual a %.2fm2.", area);

    return 0;
}
