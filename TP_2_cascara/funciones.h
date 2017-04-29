#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    long dni;

}EPersona;



/**
 * imprime lista ordenada de A a Z.
 * @param lista el array se pasa como parametro.
 * @return void
 */
 void ImprimirLista(EPersona persona[]);


/**
 * se ingresa dni y busca a la persona con ese dni.
 * @param lista el array se pasa como parametro.
 * @return devuelve el indice donde se encuentra el dni.
 */
int buscarPorDni(EPersona persona[]);

/**
 * muestra el grafico de edades
 * @param el array de persona se pasa como parametro.
 * @return void
 */
void graficoDeEdades (EPersona persona[]);

/**
 * inicializa todos los estados en cero.
 * @param el array de persona se pasa como parametro.
 * @return void
 */
void InicializarEstado(EPersona persona[]);

/**
 * borra persona
 * @param el array de persona se pasa como parametro.
 * @return void
 */

void BorrarPersona (EPersona persona[]);

/**
 * obtiene espacio libre buscando el espacio en cero.
 * @param el array de persona se pasa como parametro.
 * @return devuelve el indice del mismo
 */
int obtenerEspacioLibre(EPersona persona[]);

/**
 * agregar persona
 * @param el array de persona se pasa como parametro.
 * @return void
 */
void AgregarPersona (EPersona persona[]);


#endif // FUNCIONES_H_INCLUDED
