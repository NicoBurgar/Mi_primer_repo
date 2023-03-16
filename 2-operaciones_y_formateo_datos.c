#include <stdio.h>

#define PI 3.1415         //declaracion de una constante


int main()
{
    short valor1 = 25;
    int valor2 = 50, valor3 = 30;
    float valor4;
    valor4 = 5.9;

    //El resultado de la division de dos enteros en un entero
    printf("Division entera (X / Y): %05i \n", valor2 / valor3);
    //Muestra el resto de la division entera formateado a longitud 5, con relleno de ceros a la izquierda
    printf("Resto de la division: %05i \n", valor2 % valor3);
    //Muestra con una longitud de 6, de los cuales 3 son decimales
    printf("Division real: %6.3f\n", valor2 / valor4);
    //Muestra con una longitud de 5, de los cuales 2 son decimales
    printf("Perimetro del circulo de radio valor2(%i): %5.2f \n", valor2, 2 * PI * valor2);

    //Muestra de valores de valor2 y valor3 encolumnados usando \t
    printf("\n\t valor2 \t valor3\n");

    valor2++;           //Incremento de valor2 en 1
    valor3--;           //Decremento de valor3 en 1
    printf("\t%4i       \t%4i\n", valor2, valor3);

    valor2 *= 3;           //Triplico el valor de valor2
    valor3 /= 2;           //Divido a valor3 por 2
    printf("\t%4i       \t%4i\n", valor2, valor3);


    //Muestra cuantos bytes ocupa un dato de tipo long
    printf("\nEntero largo (long): %i bytes", sizeof(long)); 
    //Tambien existen:  short, unsigned short, int, unsigned int, long long, float, double
    return(0);
}