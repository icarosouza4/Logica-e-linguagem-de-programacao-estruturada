// Aula 01 - 15/08
// Professor Marcos Antônio
// Programa para ler o primeiro nome, idade e altura.

#include <stdio.h>
#include <string.h>

int main()
{
    int idade;
    float altura;
    char nome[20];

    printf("Digite seu primeiro nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("O seu nome e: %s.\n", nome);
    printf("A idade e: %d anos.\n", idade);
    printf("A sua altura e: %.2fm.\n", altura);

    return 0;
}
