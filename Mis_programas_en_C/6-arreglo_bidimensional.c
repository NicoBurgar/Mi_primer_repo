//es conveniente declarar tipos de datos para nuestros arreglos (y para cualquier tipo de dato) utilizando la siguiente sintaxis:     typedef tipo_dato nombre_del_tipo

#include <stdio.h>
#define FILAS 2
#define COLUMNAS 3

typedef int t_mat[FILAS][COLUMNAS];

void calcular_cuadrados(t_mat mat, int fil, int col)
{
    int i, j;
    for (i = 0; i < fil; i++)
        for(j = 0; j < col; j++)
            mat[i][j] = mat[i][j] * mat[i][j];
}

void mostrar_datos(t_mat mat, int fil, int col)
{
    int i, j;
    for (i = 0; i < fil; i++)
    {
        for(j = 0; j < col; j++)
            printf("%4i", mat[i][j]);
        printf("\n");
    }
}

void main()
{
    t_mat mat_nros = {{1, 2, 3}, {4, 5, 6}};

    mostrar_datos(mat_nros, FILAS, COLUMNAS);
    calcular_cuadrados(mat_nros, FILAS, COLUMNAS);
    printf("\n");
    mostrar_datos(mat_nros, FILAS, COLUMNAS);

    return;
}