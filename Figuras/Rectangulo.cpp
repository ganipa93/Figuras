#include <iostream>
#include "Rectangulo.h"

using namespace std;

/**
PRE:
    La instancia del TDA (Rectangulo) no debe haberse creado (crear) ni destruido (destruir) con anterioridad.
POST:
    Deja la instancia del TDA (Rectangulo) listo para ser usado. El valor por defecto de la base y la altura es 1.
*/

void constructor(Rectangulo &rectangulo){
    strcpy(rectangulo.nombre,"");
    strcpy(rectangulo.color,"");
    rectangulo.base=1;
    rectangulo.altura=1;
}
/**
PRE:
    La instancia del TDA (Rectangulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Destruye la instancia del TDA y ya no podra ser utilizada.
*/
void destructor(Rectangulo &rectangulo){
}

/**
PRE:
    La instancia del TDA (Rectangulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
    Se le debe pasar un nombre
POST:
    El Rectangulo queda con el nuevo nombre.
*/
void setNombre(Rectangulo &rectangulo, char nombre[]){
	strcpy(rectangulo.nombre,nombre);
}

/**
PRE:
    La instancia del TDA (Rectangulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el nombre del Rectangulo.
*/
char* getNombre(Rectangulo &rectangulo){
	return rectangulo.nombre;
}

/**
PRE:
    La instancia del TDA (Rectangulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
    Se le debe pasar un color
POST:
    El Rectangulo queda con el nuevo color.
*/
void setColor(Rectangulo &rectangulo, char color[]){
	strcpy(rectangulo.color,color);
}

/**
PRE:
    La instancia del TDA (Rectangulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el color del Rectangulo.
*/
char* getColor(Rectangulo &rectangulo){
	return rectangulo.color;
}
/**
PRE:
    La instancia del TDA (Rectangulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
    Se le debe pasar una base
POST:
    El Rectangulo queda con la nueva base.
*/
void setBase(Rectangulo &rectangulo, float base){
	rectangulo.base = base;
}

/**
PRE:
    La instancia del TDA (Rectangulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve la base del Rectangulo.
*/
float getBase(Rectangulo &rectangulo){
	return rectangulo.base;
}

/**
PRE:
    La instancia del TDA (Rectangulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
    Se le debe pasar una altura
POST:
    El Rectangulo queda con la nueva altura.
*/
void setAltura(Rectangulo &rectangulo, float altura){
	rectangulo.altura=altura;
}

/**
PRE:
    La instancia del TDA (Rectangulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve la altura del Rectangulo.
*/
float getAltura(Rectangulo &rectangulo){
	return rectangulo.altura;
}

/**
PRE:
    La instancia del TDA (Rectangulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el area del Rectangulo.
*/
/* Retorna el area de la figura rectagulo  */
float getArea(Rectangulo &rectangulo){
	return getBase(rectangulo)*getAltura(rectangulo);
}


