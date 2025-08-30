// Aula 03 - 29/08
// Professor Marcos Antônio
// Potência Elétrica
// Ler tensão e corrente para calcular a potência elétrica.
// Fórmula: P = U * I

#include <stdio.h>

int main()
{
    float potencia_eletrica, tensao, corrente_eletrica;

    printf(" === POTENCIA ELETRICA === \n");

    printf("Informe a tensao(v): ");
    scanf("%f", &tensao);

    printf("Informe a corrente eletrica(a): ");
    scanf("%f", &corrente_eletrica);

    potencia_eletrica = tensao * corrente_eletrica;

    printf(" === RESULTADO === \n");
    
    printf("A potencia eletrica e igual a %.2fkW.", potencia_eletrica);

    return 0;
}
