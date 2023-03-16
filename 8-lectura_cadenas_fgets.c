/*
Uso de fgets para ingreso de datos
fgets(variable, longitud, origen de la lectura)
Tomará la cadena ingresada hasta completar la cantidad establecida en longitud
*/

#include <stdio.h>
#define LONG_nombres 15
#define LONG_apellidos 20
#define LONG_domicilio 30

char nombres[LONG_nombres];
char apellidos[LONG_apellidos];
char domicilio[LONG_domicilio];

void main()
{
    printf("Nombres: ");
    fgets(nombres, LONG_nombres, stdin);
    fflush(stdin);      //limpia caracteres remanentes que quedaron el buffer

    printf("Apellidos: ");
    fgets(apellidos, LONG_apellidos, stdin);
    fflush(stdin);

    printf("Domicilio: ");
    fgets(domicilio, LONG_domicilio, stdin);
    fflush(stdin);

    //con el fgets, antes del \0 agrega un \n a la cadena
    printf("\nTus nombres son: %s", nombres);
    printf("\nTus apellidos son: %s", apellidos);
    printf("\nTu domicilio es: %s", domicilio);

    return;
}