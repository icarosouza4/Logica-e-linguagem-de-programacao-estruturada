// Aula 03 - 29/08
// Professor Marcos Antônio
// Média Aritmética de 5 notas
// Leia 3 notas de um aluno, calcule e imprima a média aritmética. 

#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf(" === INFORME AS NOTAS === \n");

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf(" === MEDIA FINAL === \n");
    
    printf("A media do aluno e igual a %.2f.", media);

    return 0;
}
