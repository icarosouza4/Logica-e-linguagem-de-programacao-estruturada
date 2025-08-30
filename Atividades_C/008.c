// Aula 03 - 29/08
// Professor Marcos Antônio
// Volume de um cilindro
// Leia o raio e a altura de um cilindro e calcule seu volume. 
// Fórmula: V = M_PI * r² * h

#include <stdio.h>
#include <math.h>

int main()
{
    float r, h, volume;

    printf(" === PROPRIEDADES DE UM CILINDRO === \n");

    printf("Digite o raio do cilindro: ");
    scanf("%f", &r);

    printf("Digite a altura do cilindro: ");
    scanf("%f", &h);

    volume = M_PI * (r * r) * h;

    printf("O VOLUME do cilindro e igual a %.1fm3.", volume);
    return 0;
}
