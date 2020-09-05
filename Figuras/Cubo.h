#ifndef CUBO_H
#define CUBO_H
#include <string>
#include <string.h>
/*
    Definición del Tipo de Dato para manejo de Cubo.
    Atributos:
    * lado,
    * area.

    Axiomas:
    * lado > 0
	* area = 6.0*(getLado(cubo)*2.0)
*/

/*
    Definición del Tipo.

*/
typedef struct  {
	char nombre[50];
	char color[50];
	float lado;
} Cubo;


/*
PRE:
    La instancia del TDA (cubo) no debe haberse creado (crear) ni destruido (destruir) con anterioridad.
POST:
    Deja la instancia del TDA (cubo) listo para ser usado.
*/
void constructor(Cubo &cubo);

/*
PRE:
    La instancia del TDA (cubo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Destruye la instancia del TDA y ya no podrá ser utilizada.
*/
void destructor(Cubo &cubo);

/*
PRE:
    La instancia del TDA (cubo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    El cubo queda con el nuevo nombre.
*/
void setNombre(Cubo &cubo, char nombre[]);

/*
PRE:
    La instancia del TDA (cubo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el nombre del cubo.
*/
char* getNombre(Cubo &cubo);

/*
PRE:
    La instancia del TDA (cubo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    El cubo queda con el nuevo color.
*/
void setColor(Cubo &cubo, char color[]);

/*
PRE:
    La instancia del TDA (cubo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el color del cubo.
*/
char* getColor(Cubo &cubo);

/*
PRE:
    La instancia del TDA (cubo) debe haberse creado (crear) pero no debe estar destruida (destruir).
    El lado debe ser mayor a cero.
POST:
    El cubo queda con el nuevo lado.
*/
void setLado(Cubo &cubo, float lado);

/*
PRE:
    La instancia del TDA (cubo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el lado del cubo.
*/
float getLado(Cubo &cubo);

/*
PRE:
    La instancia del TDA (cubo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el area del cubo.
*/
float getArea(Cubo &cubo);


#endif


