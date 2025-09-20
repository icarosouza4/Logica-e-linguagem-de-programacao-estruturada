#include <stdio.h>

int main()
{
	int opcao;
	float a, b, resultado;
	
	printf("Digite o primeiro valor: ");
	scanf("%f",&a);
	printf("Digite o segundo valor: ");
	scanf("%f",&b);
	
	printf(" +-+ OPERACOES MATEMATICAS +-+ \n");
	printf("1 - Soma\n");
	printf("2 - Subtracao\n");
	printf("3 - Multplicacao\n");
	printf("4 - Divisao\n");
	printf("Escolha uma opcao (1-4):\n");
	scanf("%d",&opcao);
	
	switch(opcao)
	{
		case 1:
			resultado = a + b;
			printf("Soma: %.2f \n",resultado);
			break;
		case 2:
			resultado = a - b;
			printf("Subtracao: %.2f \n",resultado);
			break;
		case 3:
			resultado = a * b;
		printf("Multiplicacao: %.2f \n",resultado);
			break;
		case 4:
		if(b == 0)
		{
			printf("Nao e possivel dividir por 0.\n");
		}
		else
		{
			resultado = a / b;
			printf("Divisao: %.2f \n", resultado);
		}
			break;
		default:
			printf("Opcao Invalida !\n");	
	}

	return 0;
}