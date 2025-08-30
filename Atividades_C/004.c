// Aula 02 - 22/08
// Professor Marcos Antônio
// Cálculo de média de um aluno.
// Faça um programa que leia o nome de um aluno, uma disciplina, 4 notas deste aluno e calcule a sua média nesta disciplina.

#include <stdio.h>
#include <string.h>

int main()
{
    float nota1, nota2, nota3, nota4, media;
    char nome[30], disciplina[30];

    printf(" === NOME DO ALUNO === \n");

    printf("Informe o nome do aluno: ");
    // scanf("%s", &nome); // Variável char/string.
    fgets(nome, 30, stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf(" === DISCIPLINA === \n");

    printf("Informe a disciplina: ");
    fgets(disciplina, 30, stdin);
    disciplina[strcspn(disciplina, "\n")] = 0;

    printf(" === INFORME AS NOTAS === \n");

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);

    printf("Informe a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf(" === NOTAS === \n");
    
    printf("Primeira nota: %.2f.\n", nota1);
    printf("Segunda nota: %.2f.\n", nota2);
    printf("Terceira nota: %.2f.\n", nota3);
    printf("Quarta nota: %.2f.\n", nota4);
    printf("Media final: %.2f.\n", media);

    printf(" === RESULTADO === \n");

    printf("O aluno %s obteve %.2f de media na disciplina %s.", nome, media, disciplina);

    return 0;
}
