#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
//menu principal
int main()
{
    char seguir='s';
    int opcion=0;
    float a=0, b=0;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n",a);
        printf("2- Ingresar 2do operando (B=%.2f)\n",b);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                a = ingresoDeValor("ingrese el valor de a: ");
                break;
            case 2:
                b= ingresoDeValor("ingrese el valor de b: ");
                break;
            case 3:
                if(verificacion(a,b))
                {
                    sumar(a,b);
                }
                break;
            case 4:
                if(verificacion(a,b))
                {
                  resta(a,b);
                }
                break;
            case 5:
                if(verificacion(a,b))
                {
                    division(a,b);
                }
                break;
            case 6:
                if(verificacion(a,b))
                {
                  multiplicacion(a,b)
                    system("pause");
                }
                break;
            case 7:
                if(verificacion(a,b))
                {
                    //poner la funcion faltorial
                    system("pause");
                }

                break;
            case 8:
                if(verificacion(a,b))
                {
                   sumar(a,b);
                   resta(a,b);
                    division(a,b);
                    multiplicacion(a,b)

                }

                break;
            case 9:
                seguir = 'n';
                break;
        }
        system("cls");
    }


    return 0;
}
