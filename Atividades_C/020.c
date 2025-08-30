// Aula 03 - 29/08
// Professor Marcos Antônio
// Conversão de Tempo
// Ler um valor em segundos e converter para horas, minutos e segundos.
// Fórmulas:
// Horas = segundos / 3600
// Minutos = segundos / 60
// Segundos = 60

#include <stdio.h>

int main()
{
    int segundos, minutos, horas;

    printf(" === CONVERSOR DE TEMPO === \n");

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = segundos / 60;

    printf(" === RESULTADO === \n");

    printf("%d segundos equivale a %d minuto(s).\n", segundos, minutos);
    printf("%d segundos equivale a %d hora(s).\n", segundos, horas);

    return 0;
}
