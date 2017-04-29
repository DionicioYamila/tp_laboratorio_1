#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define MAX 20



int main()
{
    EPersona persona[MAX];
    char seguir='s';
    int opcion=0;


    while(seguir=='s')
    {
        system("cls");
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                 AgregarPersona(persona);
                break;
            case 2:
                 BorrarPersona(persona);
                 system("pause");
                break;
            case 3:
                 ImprimirLista(persona);
                 system("pause");
                break;
            case 4:
                graficoDeEdades(persona);
                system("pause");
                break;
            case 5:
                seguir = 'n';
                break;
            default: printf("incorrecto");
                    system("pause");
                    break;
        }
    }

    return 0;
}
