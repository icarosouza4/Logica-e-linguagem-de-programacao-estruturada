#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf(" === INFORME AS NOTAS === \n");

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf(" === MEDIA === \n");
    
    printf("A media e igual a %.2f.\n", media);
    
    printf(" === RESULTAD0 === \n");

    if(media > 6.9)
    {
        printf("Voce foi aprovado!");
    }
    else
    {
        printf("Voce foi reprovado!");
    }
}
