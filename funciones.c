#include <stdio.h>
#include <string.h>
#include "funciones.h"
int ingreseCedula()
{
    int cedulabuscar;
    printf("Ingrese la cedula: ");
    scanf("%d", &cedulabuscar);
    return cedulabuscar;
}

obtenerPosicionContacto(int cedula[], int cedulaBuscar, char nombre[][50], int telefonos[][2], char direcciones[10][2][50])
{
    for (int i = 0; i < 5; i++)
    {
        if (cedulaBuscar == cedula[i])
        {
            printf("Nombre: %s\n", nombre[i]);

            printf("Teléfonos:\n");
            for (int j = 0; j < 10; j++)
            {
                if (telefonos[j][0] == i)
                {
                    printf("%d\n", telefonos[j][1]);
                }
            }
            printf("Direcciones:\n");
            for (int j = 0; j < 10; j++)
            {
                if (direcciones[j][0][0] - '0' == i)  // Comparar el primer elemento de la matriz con el índice i
                {
                    printf("%s\n", direcciones[j][1]);
                }
            }
            
        }
    }
}