#include <stdio.h>
#include <string.h>

void main()
{
    char cadena1[15] = "HOLA";
    char cadena2[] = "MUNDO";
    char cadena3[] = " ";

    //uso de strlen: obtiene la longitud de la cadena
    printf("Cadena1: %s \t tiene: %i caracteres\n", cadena1, strlen(cadena1));
    printf("Cadena2: %s \t tiene: %i caracteres\n", cadena2, strlen(cadena2));
    printf("Cadena3: %s \t tiene: %i caracteres\n", cadena3, strlen(cadena3));

    //uso de strcpy: asignar un nuevo valor a la cadena
    strcpy(cadena1, "CHAU");
    printf("\nAhora la cadena1 vale: %s \n\n", cadena1);

    //uso de strcat: concatenar un valor a la cadena existente
    strcat(cadena1, cadena3);
    strcat(cadena1, cadena2);
    printf("En cadena1 asigno cadena1 + cadena3 + cadena2: %s \n\n", cadena1);

    //uso de strcmp: comparar dos cadenas (para esta funcion no se necesita la libreria string.h)
    //se comparan dos cadenas alfabeticamente poniendo strcmp(cadena_uno, cadena_dos)
    char cadena4[] = "HOLA";
    if (strcmp(cadena4, cadena2) == 0)
        printf("Las cadenas 4 y 2 son iguales \n\n");
    else
        if (strcmp(cadena4, cadena2) > 0)
            printf("La cadena 4 es mayor que la cadena 2 \n\n");
        else
            printf("La cadena 4 es menor que la cadena 2 \n\n");

    //uso de strstr: buscar una cadena adentro de otra cadena
    //se usa de la sig. manera: strstr(cadena_a_explorar, subcadena_a_buscar)
    // la funcion strstr devuelve un puntero, que si existe la subcadena en la cadena devuelve el puntero de la primer letra de la subcadena en la cadena, sino devuelve NULL.
    char *posicion;
    posicion = strstr(cadena1, cadena2);
    if (posicion == NULL)
        printf("La cadena2 (%s) no existe dentro de la cadena1 (%s)", cadena2, cadena1);
    else
        printf("La cadena2 (%s) esta en la cadena1 (%s)", cadena2, cadena1);

    return;
}