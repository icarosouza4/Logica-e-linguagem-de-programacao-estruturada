// Aula 03 - 29/08
// Professor Marcos Antônio
// Equação da Velocidade Média
// Ler distância e tempo para calcular a velocidade média.
// Fórmula: Vm = d / t

#include <stdio.h>

int main()
{
    float velocidade_media, distancia, tempo;

    printf(" === VELOCIDADE MEDIA === \n");

    printf("Informe a distancia(km): ");
    scanf("%f", &distancia);

    printf("Informe o tempo(h): ");
    scanf("%f", &tempo);

    velocidade_media = distancia / tempo;

    printf("A VELOCIDADE MEDIA e igual a %.2fKm/H.", velocidade_media);

    return 0;
}
