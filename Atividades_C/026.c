// Estrutura condicional com conjunção

#include <stdio.h>

int main()
{
    float m;

    printf("Insira a nota: ");
    scanf("%f", &m);

    if(m >= 4.0 && m < 7.0)
    {
        printf("Tem direito ao exame!\n");
    }
}
