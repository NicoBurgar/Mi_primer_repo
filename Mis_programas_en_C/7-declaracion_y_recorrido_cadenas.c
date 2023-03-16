#include <stdio.h>
#define MF 15

void main()
{
    //declaro una cadena de longitud 15 y le asigno un valor. Cuando termina la cadena, c le asigna al final de la cadena un \0, que significa el fin de la cadena (al asgnarle un tamaño a la cadena, hay que tener en cuenta tmb a este \0)
    char cadena[MF] = "Hola mundo";

    cadena[11] = 'X';    //como el \0 esta en la posicion 10, esta X estara en la lista, pero no aparecera en la cadena

    printf("La cadena es: %s \n", cadena);

    //recorro la cadena con un for
    printf("\nResultado de recorrer la cadena con un for hasta la ultima posicion:\n");
    int i;
    for (i = 0; i < MF; i++)
        printf("caracter en posicion %2i: %c \n", i, cadena[i]);
    printf("\nCapacidad de la cadena: %i bytes\n", sizeof(cadena));

    printf("\nPresione enter para continuar\n");
    getchar();

    //recorro la cadena hasta encontrar la marca de fin de cadena
    printf("\nResultado de recorrer la cadena hasta encontrar la marca de fin \n");
    i = 0;
    while (cadena[i] != '\0')
        {
            printf("Caracter en posicion %i: %c \n", i, cadena[i]);
            i++;
        }
    
    printf("\nCantidad de caracteres: %i \n", i);
    printf("\nCadena: %s\n", cadena);
    printf("\nPresione enter para continuar\n");
    getchar();

    //modifico posiciones en la cadena
    printf("\nModifico posiciones 0, 5 y 8 de la cadena con una X\n");
    cadena[0] = 'X';
    cadena[5] = 'X';
    cadena[8] = 'X';
    printf("Resultado: %s\n\n", cadena);



    //otra forma de declarar una cadena
    char cadena1[] = "Hola inmundo";
    printf("\nLa cadena ahora es: %s \n", cadena1);

    //recorro la cadena con un for, teniendo en cuenta ahora que el largo de la lista es el de la cadena (mas el \0)
    printf("\nResultado de recorrer la cadena con un for hasta la ultima posicion:\n");
    for (i = 0; i < sizeof(cadena1); i++)
        printf("caracter en posicion %2i: %c \n", i, cadena1[i]);
    printf("\nCapacidad de la cadena: %i bytes\n", sizeof(cadena1));


    /*
    //otra forma de declarar una cadena (poco practica)
    char cadena[] = {'H','o','l','a',' ','m','u','n','d','o','\0'}; //esta forma es declarandola por extension, caracter a caracter
    */

    return;
}