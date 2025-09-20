#include <stdio.h>

int main()
{
	int palpite;
	
	printf(" === JOGO DE ADVINHACAO === \n");
	printf("Digite seu palpite: ");
	scanf("%d", &palpite);
	
	switch(palpite)
	{
		case 1:
            printf("ERROU! Tente novamente.\n");
            break;
		case 2:
            printf("ERROU! Tente novamente.\n");
            break;
		case 3:
            printf("ERROU! Tente novamente.\n");
            break;
        case 4:
			printf("ACERTOU! Parabens!\n");
			break;
		case 5:
			printf("ERROU! Tente novamente.\n");
			break;
		default:
			printf("Numero invalido. Escolha de 1 a 5.\n");
            break;
	}

	return 0;
}
