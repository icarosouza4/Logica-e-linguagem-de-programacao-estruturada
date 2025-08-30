// Aula 03 - 29/08
// Professor Marcos Antônio
// Conversão de temperatura
// Faça um programa que leia uma temperatura em graus Celsius e converta para Fahrenheit.
// Fórmula: F = (C * 9/5) + 32F

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf(" === CONVERSOR DE TEMPERATURA === \n");
    
    printf(" === CELSIUS PARA FAHRENHEIT === \n");

    printf("Digite a temperatura em CELSIUS: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f CELSIUS equivale a %.2f FAHRENHEIT.", celsius, fahrenheit);

    return 0;
}
