#include <stdio.h>

int main()
{
	int dia;
	
	printf(" === CALENDARIO SEMANAL === \n");
	printf("Digite o dia: ");
	scanf("%d", &dia);
	
	switch(dia)
	{
		case 1:
			printf("Domingo.");
			break;
		case 2:
			printf("Segunda-feira.");
			break;
		case 3:
			printf("Terca-feira.");
			break;
		case 4:
			printf("Quarta-feira.");
			break;
		case 5:
			printf("Quinta-feira.");
			break;
		case 6:
			printf("Sexta-feira.");
			break;
		case 7:
			printf("Sabado.");
			break;
		default:
			printf("Numero invalido. Escolha de 1 a 7.\n");
	}

	return 0;
}
