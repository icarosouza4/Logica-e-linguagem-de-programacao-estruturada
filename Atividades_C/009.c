// Aula 03 - 29/08
// Professor Marcos Antônio
// Conversão de Tempo 
// Leia um valor em segundos e converta para horas, minutos e segundos.

#include <stdio.h>

int main()
{
    int segundos, minutos, horas;

    printf(" === CONVERSOR DE TEMPO === \n");

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    minutos = segundos / 60;
    horas = minutos / 60;

    printf(" === RESULTADO === \n");

    printf("%d segundos equivale a %d minuto(s).\n", segundos, minutos);
    printf("%d segundos equivale a %d hora(s).\n", segundos, horas);

    return 0;
}
