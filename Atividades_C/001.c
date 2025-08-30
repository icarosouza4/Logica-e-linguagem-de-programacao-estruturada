// Aula 01 - 15/08
// Professor Marcos Antônio
// Programa para ler um nome.

#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50]; // Define o tipo de variável e seu tamanho.

    printf("Digite seu nome completo: "); // Exibe a mensagem na tela.
    fgets(nome, sizeof(nome), stdin); // Entrada de dados.

    nome[strcspn(nome, "\n")] = 0;
    printf("O seu nome e %s.\n", nome); // Saída de dados.

    return 0;
}
