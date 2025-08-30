// Aula 03 - 29/08
// Professor Marcos Antônio
// Salário com Desconto
// Leia o salário bruto de um funcionário e calcule o salário líquido, sabendo que há:
// INSS = 11% e IR = 15%.
//Mostre o valor dos descontos e o salário final. 

#include <stdio.h>

int main()
{
    float salario_bruto, salario_liquido, desconto_INSS, desconto_IR, desconto_total;

    printf(" === CALCULO DE DESCONTOS === \n");

    printf("Digite o SALARIO BRUTO: R$ ");
    scanf("%f", &salario_bruto);

    desconto_INSS = salario_bruto * 0.11;
    desconto_IR = salario_bruto * 0.15;
    desconto_total = desconto_INSS + desconto_IR;
    salario_liquido = salario_bruto - desconto_total;

    printf("\n === DESCONTO CALCULADO === \n");

    printf("O SALARIO BRUTO e igual a R$%.2f.\n", salario_bruto);
    printf("Os valores descontados sao respectivamente: \n");
    printf("INSS: R$%.2f.\nIR: R$%.2f.\n", desconto_INSS, desconto_IR);

    printf(" === SALARIO LIQUIDO === \n");
    
    printf("O SALARIO LIQUIDO e igual a R$%.2f.", salario_liquido);
    
    return 0;
}
