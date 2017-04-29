#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define MAX 20



void InicializarEstado(EPersona persona[])

{
    int i;
    for(i=0; i<MAX; i++)

    {
        persona[i].estado=0;
    }

}


int obtenerEspacioLibre(EPersona persona[])
{
    int i;
    int retorno;
    for(i=0; i< MAX; i++)
    {
        if(persona[i].estado==0)
        {
            retorno=i; // devuelve al usuario el espacio libre para cargar datos
        }
    }
    return retorno;
}


 void AgregarPersona (EPersona persona[])
 {
    int vectorVacio= obtenerEspacioLibre(persona);// buscamos un vector vacio para cargar una persona

    printf("Ingrese su nombre:\n");
    fflush(stdin);
    gets(persona[vectorVacio].nombre); // carga los datos de la persona en la vector vacio

    printf("Ingrese su dni:\n");
    scanf("%ld",&persona[vectorVacio].dni);

    printf("Ingrese su edad:\n");
    scanf("%d",&persona[vectorVacio].edad);

    persona[vectorVacio].estado=1;
 }

void BorrarPersona (EPersona persona[])
{
    int i;
    for (i=0;i<MAX;i++)
    {
        if(persona[i].estado==1)
        {
            printf("%ld - %s\n", persona[i].dni, persona[i].nombre);
        }
    }
    int indice=buscarPorDni(persona); // llamada
    if(indice==-1)
    {
        printf("dni incorrecto\n");
    }
    else
    {
    persona[indice].estado = 2;
    printf("persona eliminada\n");
    system("pause");
    }
}

int buscarPorDni(EPersona persona[])
{
    int i,retorno;
    long int dni;

    printf("ingrese dni:\n");
    scanf("%ld",&dni);

    for(i=0; i<MAX; i++)
    {
    if (persona[i].dni==dni)
     {
         retorno=i;
         break;
     }
    else
    {
        retorno=-1;
    }
    }
    return retorno;

}

void ImprimirLista(EPersona persona[])
{
    EPersona aux;
    int i, j;
    for(i=0; i< MAX-1;i++)
    {
      for(j=i+1; j<MAX;j++)
      {
          if((strcmp(persona[i].nombre,persona[j].nombre))>0)
          {
              aux=persona[i];
              persona[i]=persona[j];
              persona[j]=aux;
          }

       }
      }
      for(i=0; i< MAX; i++)
        {
            if(persona[i].estado==1)// me muestra los nombres cargados
            {
                printf("%s,\n",persona[i].nombre);
            }

        }
}

void graficoDeEdades (EPersona persona[])
{

int i, mayorDe35=0, hasta18=0, de19a35=0, mayor, flag=0;

    for(i=0;i<MAX;i++)
    {
        if(persona[i].estado==1 && persona[i].edad>= 35)
        {
           mayorDe35++;
        }
        else if(persona[i].estado==1 && persona[i].edad<=18)
        {
            hasta18++;
        }
        else if(persona[i].estado==1 && persona[i].edad>=19 && persona[i].edad<=34)
        {
            de19a35++;
        }
    }

    if(hasta18 >= de19a35 && hasta18 >= mayorDe35)
    {
        mayor = hasta18;
    }
    else{
        if(de19a35 >= hasta18 && de19a35 >= mayorDe35)
        {
            mayor = de19a35;
        }
        else{
        mayor = mayorDe35;
        }
    }

    for(i=mayor; i>0; i--)
    {
        if(i<= hasta18)
        {
            printf("*");
        }
        if(i<= de19a35){
            flag=1;
            printf("\t*");
        }
        if(i<= mayorDe35){
            if(flag==0)
                printf("\t\t*");
            if(flag==1)
                printf("\t*");

        }        printf("\n");
    }
    printf("\n  |<18\t19-35\t>35");
    return 0;
}


