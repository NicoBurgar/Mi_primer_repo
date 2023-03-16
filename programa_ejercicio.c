#include <stdio.h>
#define largo 13

void lectura(int *num1, int *num2)
{
    printf("\nLos valores ingresados son: %i y %i\n", *num1, *num2);
    return;
}

void lectura_vector(int vector[], int ult_posicion)
{
    int posicion;
    for(posicion = 0; posicion < ult_posicion; posicion++)
        printf("%i\n", vector[posicion]);
    return;
}

void main()
{
    /*
    int value1, value2;
    printf("Ingrese un valor: ");
    scanf("%i", &value1);

    printf("Ingrese otro valor: ");
    scanf("%i", &value2);

    lectura(&value1, &value2);
    */

    /*
    if (value1 > value2)
        {
            printf("Valor 1: %i   Valor 2: %i\n", value1, value2);
            printf("%i es mas grande que %i\n", value1, value2);
        }
    else
        if (value1 < value2)
            printf("%i es mas chico que %i\n", value1, value2);
        else
            printf("Los numeros son iguales\n");

    printf("La division entre los dos numeros da: %.3f", (float)value1 / value2);
    printf("\nEl resto de la division entre los dos numeros da: %05i", value1 % value2);
    */

    /*
    printf("\n");
    int v_nros[] = {2, 4, 6, 8, 10};
    lectura_vector(v_nros, 5);

    printf("\n\n");
    printf("\nPresione enter para continuar\n");
    getchar();

    //Manejo de cadenas
    char cadena1[largo] = "Hola mundo";
    printf("La cadena es: %s", cadena1);
    int i;
    for(i = 0; i < largo; i++)
        printf("\nEl caracter %2i es: %c", i, cadena1[i]);

    cadena1[11] = 'H';
    i = 0;
    while (cadena1[i] != '\0')
        {
            printf("\nCaracter en posicion %i: %c", i, cadena1[i]);
            i++;
        }

    char cadena2[] = "Hola mundo";
    cadena2[10] = 'x';
    printf("\n\nLa cadena es: %s", cadena2);
    printf("\n");
    for(i = 0; i < sizeof(cadena2); i++)
        printf("\nCaracter en posicion %i: %c", i, cadena2[i]);
    */

    int largo_nombres = 15;
    char nombres[largo_nombres];
    printf("Nombre: ");
    fgets(nombres, largo_nombres, stdin);
    fflush(stdin);

    printf("Tu nombre es: %s", nombres);
    int i;
    for(i = 0; i < sizeof(nombres); i++)
        printf("\nCaracter en posicion %2i: %c", i, nombres[i]);

    int largo_facultad = 20;
    char facultad[largo_facultad];
    printf("\n\nFacultad a la q va: ");
    scanf("%20[^\n]s", facultad);
    fflush(stdin);
    printf("\nVas a la facultad de %s", facultad);


    int *f = &largo_facultad;
    printf("\n\nLa constante largo_facultad esta en la celda %i", *f);

    return;
}