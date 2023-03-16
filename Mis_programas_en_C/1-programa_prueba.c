#include <stdio.h>

void main()
{
    /*
    int valor1;
    int valor2 = 0;
    valor1 = 100;
    printf("Valor 1: %i \n", valor1);
    printf("Valor 2: %i", valor2);

    int valor;
    printf("\nValor: ");
    scanf("%i", &valor);

    printf("\nValor ingresado: %i", valor);
    */

    int valor1, valor2;

    printf("Valor 1: ");
    scanf("%i", &valor1);
    printf("\nValor 2: ");
    scanf("%i", &valor2);

    printf("\nValor 1: %i y Valor 2: %i \n", valor1, valor2);
    printf("\nLa division entera entre los numeros vale %i \n", valor1 / valor2);
    printf("La division real entre los numeros vale %f", (float)valor1 / valor2);
    
    return;
}