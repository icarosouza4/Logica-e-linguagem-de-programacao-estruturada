#include <stdio.h>

int main()
{
	float imc, peso, altura;
    int faixa;

    printf(" === CALCULO DE IMC === \n");

    printf("Digite o peso: ");
    scanf("%f", &peso);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
	faixa = (int)(imc * 10);
	
    printf(" === RESULTADO === \n");

    printf("O IMC e igual a %.2f.\n", imc);
    printf("Classificacao: ");
    
	switch(faixa)
	{
    	case 0 ... 184:
    		printf("Abaixo do peso.\n");
    		break;
    	case 185 ... 249:
    		printf("Peso normal.\n");
    		break;
    	case 250 ... 299:
    		printf("Sobrepeso.\n");
    		break;
    	case 300 ... 399:
    		printf("Obesidade.\n");
    		break;
    	default:
    		printf("Obesidade grave.\n");
    		break;
	}
    
    return 0;
}
