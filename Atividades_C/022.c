// Aula 03 - 29/08
// Professor Marcos Antônio
// Média Ponderada
// Ler três notas com pesos diferentes e calcular a média.
// Fórmula: MP = (n1 * p1) + (n2 * p2) + (n3 * p3) / p1 + p2 +p3

#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, peso1, peso2, peso3, media_ponderada;

    printf(" === INFORME AS NOTAS === \n");

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe o peso da primeira nota: ");
    scanf("%f", &peso1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe o peso da segunda nota: ");
    scanf("%f", &peso2);

    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);
    printf("Informe o peso da terceira nota: ");
    scanf("%f", &peso3);

    media_ponderada = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    printf(" === MEDIA PONDERADA === \n");
    
    printf("A media ponderada e igual a %.2f.", media_ponderada);

    return 0;
}
