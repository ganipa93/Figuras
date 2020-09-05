#ifndef RECTANGULO_H_INCLUDED
#define RECTANGULO_H_INCLUDED

#include "Constantes.h"
#include <string>
#include <string.h>
/**
    Definicion del Tipo de Dato para manejo de Rectangulos.
    Atributos:
    * nombre,
    * color,
    * base,
    * altura,
    * area

    Axiomas:
    * nombre,
    * color,
    * area = base*altura

*/
/**
    Definicion del Tipo.

*/
typedef struct  {
    char nombre[50];
    char color[50];
	float base;
	float altura;
} Rectangulo;

/**
PRE:
    La instancia del TDA (Rectangulo) no debe haberse creado (crear) ni destruido (destruir) con anterioridad.
POST:
    Deja la instancia del TDA (Rectangulo) listo para ser usado.
*/
void constructor(Rectangulo &rectangulo);

/**
PRE:
    La instancia del TDA (Rectangulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Destruye la instancia del TDA y ya no podra ser utilizada.
*/
void destructor(Rectangulo &rectangulo);

/**
PRE:
    La instancia del TDA (Rectangulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el nombre del Rectangulo.
*/
char* getNombre(Rectangulo &rectangulo);

/**
PRE:
    La instancia del TDA (Rectangulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
    Se le debe pasar un nombre
POST:
    El Rectangulo queda con el nuevo nombre.
*/
void setNombre(Rectangulo &rectangulo, char nombre[]);

/**
PRE:
    La instancia del TDA (Rectangulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
    Se le debe pasar un color
POST:
    El Rectangulo queda con el nuevo color.
*/
void setColor(Rectangulo &rectangulo, char color[]);

/**
PRE:
    La instancia del TDA (Rectangulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el color del Rectangulo.
*/
char* getColor(Rectangulo &rectangulo);

/**
PRE:
    La instancia del TDA (Rectangulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
    Se le debe pasar una base
POST:
    El Rectangulo queda con la nueva base.
*/
void setBase(Rectangulo &rectangulo, float base);

/**
PRE:
    La instancia del TDA (Rectangulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve la base del Rectangulo.
*/
float getBase(Rectangulo &rectangulo);

/**
PRE:
    La instancia del TDA (Rectangulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
    Se le debe pasar una altura
POST:
    El Rectangulo queda con la nueva altura.
*/
void setAltura(Rectangulo &rectangulo, float altura);

/**
PRE:
    La instancia del TDA (Rectangulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve la altura del Rectangulo.
*/
float getAltura(Rectangulo &rectangulo);

/**
PRE:
    La instancia del TDA (Rectangulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el area del Rectangulo.
*/
float getArea(Rectangulo &rectangulo);
#endif

