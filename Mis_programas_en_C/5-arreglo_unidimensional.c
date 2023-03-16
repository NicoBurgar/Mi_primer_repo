//en C no se pueden asignar ni comparar arreglos directamente, hay que hacerlo elemento a elemento

#include <stdio.h>

void mostrar_datos(int vector[], int ult_pos)
{
    int i;
    for (i = 0; i <= ult_pos; i++)
        printf("%i \n", vector[i]);
    return;
}

void main()
{
    int v_nros[] = {2, 4, 6, 8, 10};
    mostrar_datos(v_nros, 3);  //los arreglos son siempre pasados por referencia, sin necesidad de poner &
    return;
}