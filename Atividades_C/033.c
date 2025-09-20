#include <stdio.h>

int main()
{
	char nota;
		
	printf("Digite a nota do aluno (A, B, C, D, E, F): ");
	scanf("%c", &nota);
		
	switch(nota)
	{
		case 'A':
		case 'a':
			printf("Excelente!\nParabens!\n");
			break;
		case 'B':
		case 'b':
			printf("Muito bom!\nContinue assim!\n");
			break;
		case 'C':
		case 'c':
			printf("Bom!\nDa para melhorar!\n");
			break;
		case 'D':
		case 'd':
			printf("Voce passou!\nCom uma certa dificuldade...\n");
			break;
		case 'E':
		case 'e':
			printf("Voce esta de recuperacao!\nBoa sorte...");
			break;
		case 'F':
		case 'f':
			printf("REPROVADO!\nQue pessimo...");
			break;
		default:
			printf("Nota invalida!\nTente novamente");
			break;
	}
}
