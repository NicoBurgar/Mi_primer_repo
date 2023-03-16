#include <stdio.h>

void leer_AB(int *a, int *b)  //recibe 2 variables puntero que almacenan valores enteros
{
    printf("El primer valor es %i\n", *a);
    printf("El segundo valor es %i\n", *b);
    return;
}

int calcular_C(int a, int b)  //recibe 2 variables que son enteros
{
    long c = 1;
    int numero_actual;
    if (a == 0)
        a = 1;
    for (numero_actual = a + 1; numero_actual <= b; numero_actual++)
        c *= numero_actual;
    return c;
}

int main()
{
    int num1, num2;
    long factorial;

    printf("Ingrese el limite inferior: ");
    scanf("%i", &num1);
    printf("Ingrese el limite superior: ");
    scanf("%i", &num2);

    leer_AB(&num1, &num2);   //voy a pasar por referencia a num1 y num2, entonces tengo q usar & porque voy a estar pasando las direcciones de memoria de las variables num1 y num2

    if (num1 > num2)
        printf("Error al ingresar los datos.");
    else{
    factorial = calcular_C(num1, num2);   //voy a pasar por valor una copia de las variables num1 y num2
    printf("El factorial de %i dividido el factorial de %i da %i", num2, num1, factorial);
    }
    return 0;
}