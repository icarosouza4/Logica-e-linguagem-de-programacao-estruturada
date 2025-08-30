// Aula 03 - 29/08
// Professor Marcos Antônio
// Conversão de Temperatura
// Ler a temperatura em graus Celsius e converter para Fahrenheit e Kelvin.
// Fórmulas: 
// F = (Celsius * 9) / 5 + 32
// K = C + 273.15

#include <stdio.h>

int main()
{
    float celsius, fahrenheit, kelvin;

    printf(" === CONVERSOR DE TEMPERATURA === \n");

    printf("Digite a temperatura em CELSIUS: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    kelvin = celsius + 273.15;

    printf(" === RESULTADO === \n");

    printf("%.2f CELSIUS equivale a %.2f FAHRENHEIT.\n", celsius, fahrenheit);
    printf("%.2f CELSIUS equivale a %.2f KELVIN.", celsius, kelvin);

    return 0;
}
