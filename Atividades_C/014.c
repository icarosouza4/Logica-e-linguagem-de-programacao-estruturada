// Aula 03 - 29/08
// Professor Marcos Antônio
// IMC (Índice de Massa Corporal)
// Ler o peso (kg) e a altura (m) e calcular:
// IMC = peso / altura²

#include <stdio.h>

int main()
{
    float imc, peso, altura;

    printf(" === CALCULO DE IMC === \n");

    printf("Digite o peso: ");
    scanf("%f", &peso);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf(" === RESULTADO === \n");

    printf("O IMC e igual a %.2f.", imc);
    
    return 0;
}
