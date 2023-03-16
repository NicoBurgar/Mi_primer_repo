#include <stdio.h>

/*
void main()
{

    //condicional compuesto
    int x, y;

    printf("Ingrese el valor de x: ");
    scanf("%i", &x);
    printf("Ingrese el valor de y: ");
    scanf("%i", &y);

    if (x > y)
        printf("x es mayor que y");
    else
        printf("x es menor que y");
    

    //condicional anidado
    int x, y;

    printf("Ingrese el valor de x: ");
    scanf("%i", &x);
    printf("Ingrese el valor de y: ");
    scanf("%i", &y);

    if (x > y)
        {
            printf("x: %i  y: %i\n", x, y);
            printf("x es mayor que y");
        }
    else
        if (x < y)
            printf("x es menor que y");
        else
            printf("x es igual a y");

    return;
}
*/


/*
Ejemplo con un for. El for necesita:
1: una variable con su valor inicial
2: condicion que debe cumplir la variable
3: incremento o decremento que se le aplicará a la variable
*/
void main()
{
    //Imprimir los numeros del 1 al 10
    int contador1;
    for (contador1 = 1; contador1 <= 10; contador1++)
        //printf("%i\n", contador1);
        printf("%2i\n", contador1);

    printf("\n");

    //Imprimir los numeros pares del 20 al 0
    int contador2;
    for (contador2 = 20; contador2 > -1; contador2 -= 2)
        printf("%2i\n", contador2);

    return;
}