// lectura de cadena usando scanf

#include <stdio.h>

char nombres[15];
char apellidos[20];
char domicilio[30];

void main()
{
    printf("Nombres: ");
    scanf("%s", nombres);       //uso de scanf sin especificar longitud, riesgo de pasar el limite del string, y solo toma hasta el primer blanco
    fflush(stdin);      //limpia caracteres remanentes que quedaron el buffer cuando en el ultimo scanf se ingresa mas de lo esperado

    printf("Apellidos: ");
    scanf("%20[^\n]s", apellidos);   //control de longitud de lo ingresado y permite palabras separadas por blancos
    fflush(stdin);

    printf("Domicilio: ");
    fgets(domicilio, 30, stdin);    //como alternativa, usando fgets
    fflush(stdin);

    printf("\nTu nombre es %s %s \n", apellidos, nombres);
    printf("y vivis en %s", domicilio);

    return;
}