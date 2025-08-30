// Aula 03 - 29/08
// Professor Marcos Antônio
// Inversão de velocidade
// Ler uma velocidade em km/h e converter para m/s:
// M/s = Km/H / 3.6

#include <stdio.h>

int main()
{
    float km, ms;

    printf(" === CONVERSAO DE VELOCIDADE === \n");

    printf("Digite a velocidade em Km/H: ");
    scanf("%f", &km);

    ms = km / 3.6;

    printf(" === RESULTADO === \n");

    printf("%.2f Km/H equivale a %.2f m/s.", km, ms);

    return 0;
}
