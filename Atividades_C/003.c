// Aula 02 - 22/08
// Professor Marcos Antônio
// Calculadora
// Faça um programa que realize a soma, subtração e multiplicação de dois números.

#include <stdio.h>

int main() // Função principal.
{
    int numero1, numero2, soma, subtracao, multiplicacao; // Variáveis inteiras.

    printf(" === CALCULADORA === \n"); // Exibe a mensagem.

    printf("Digite o primeiro numero: "); // Exibe a mensagem.
    scanf("%d", &numero1); // Armazena o dado na variável numero1.

    printf("Digite o segundo numero: "); // Exibe a mensagem.
    scanf("%d", &numero2); // Armazena o dado na variável numero2.

    soma = numero1 + numero2; // Processo de soma.
    subtracao = numero1 - numero2; // Processo de subtração.
    multiplicacao = numero1 * numero2; // Processo de multiplicação.

    printf(" === RESULTADO === \n"); // Exibe a mensagem.

    printf("Resultado da soma %d + %d = %d.\n", numero1, numero2, soma); // Exibe a mensagem com o resultado da soma.
    printf("Resultado da subtracao %d - %d = %d.\n", numero1, numero2, subtracao); // Exibe a mensagem com o resultado da subtração.
    printf("Resultado da multiplicacao %d * %d = %d.\n", numero1, numero2, multiplicacao); // Exibe a mensagem com o resultado da multiplicação.

    return 0; // Retorna o valor 0.
}
