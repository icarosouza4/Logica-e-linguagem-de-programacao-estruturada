// Estrutura condicional composta

#include <stdio.h>

int main()
{
    float m;

    printf("Insira a nota: ");
    scanf("%f", &m);

    if(m > 6.9)
    {
        printf("Aprovado(a)!\n");
    }
    else
    {
        printf("Reprovado(a)!\n");
    }
}
