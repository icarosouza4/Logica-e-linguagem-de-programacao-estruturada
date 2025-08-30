// Aula 03 - 29/08
// Professor Marcos Antônio
// Conversão de Distância
// Leia um valor em quilômetros e mostre o equivalente em metros, decímetros, centímetros e milímetros.

#include <stdio.h>

int main()
{
    float km, m, dm, cm, mm;

    printf(" === CONVERSOR DE DISTANCIA === \n");

    printf("Digite a distancia em km: ");
    scanf("%f", &km);

    m = km * 1000;
    dm = m * 10;
    cm = m * 100;
    mm = m * 1000;

    printf(" === RESULTADO === \n");
    
    printf("A distancia %.1fkm equivale a: \n", km);
    printf("Metros: %.1fm.\n", m);
    printf("Decimetros: %.1fdm.\n", dm);
    printf("Centimetros: %.1fcm.\n", cm);
    printf("Milimetros: %.1fmm.", mm);

    return 0;
}
