#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
//funciones
float ingresoDeValor (char mensaje[])
{
    float valor;
    printf("%s", mensaje);
    scanf("%f",&valor);
    return valor;//3.5
}

int verificacion (float a, float b)
{
    int retorno=0;
    if (a!=0 || b!=0)
    {
        retorno=1;
    }
    else
    {
        printf("Ingrese un valor diferente a 0");
        system("pause");
    }
 return retorno;
}

void sumar (float a, float b)
{
    float resultado;
    resultado= a+b;
    printf("el resultado de la suma es: %.2f", resultado);// %.2f se utiliza para separar en decimales.
    system("pause");
}

void resta (float a, float b)
{
    float resultado;
    resultado= a-b;
    printf("el resultado de la resta es: %.2f", resultado);
    system("pause");

}
void division(float a, float b)
{
    float resultado;
    if (b!=0)
    {
        resultado=a/b;
        printf("el resultado de la division es:%.2f", resultado);
    }
    else
    {
        printf("el resultado de b tiene que ser diferente a cero");
    }

}

void multiplicacion(float a, float b)
{
  float resultado;
  if (b!= 0)
    {
    resultado= a*b;
  printf("el resultado de la multiplicacion es:%.2f", resultado);
    }
    else{
        printf("el valor de b tiene que ser diferente a cero");

    }
    system("pause");
}

int factorial (int n)
{
int respuesta;
if(n==1)
  if (b!= 0)
    {
    resultado= a*b;
  printf("el resultado de la multiplicacion es:%.2f", resultado);
    }
    else{
        printf("el valor de b tiene que ser diferente a cero");

    }
    system("pause");
}

