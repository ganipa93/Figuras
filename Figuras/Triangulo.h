#ifndef TRIANGULO_H_DECLARED
#define TRIANGULO_H_INCLUDED
#include <string>
#include <string.h>
/**
    Definición del Tipo de Dato para manejo de triangulos.
    Atributos:
    * base,
    * altura,
    * color,
    * area.

    Axiomas:
    * base > 0
    * altura >0
    * area = (base*altura)/2
*/

//  Definición del Tipo.
typedef struct {
    char nombre[50];
    char color[50];
	float altura;
	float base;
	 //enum dinamico de 1 a 10
} Triangulo;

/**
PRE:
    La instancia del TDA (trangulo) no debe haberse creado ni destruido con anterioridad.
POST:
    Deja la instancia del TDA (triangulo) listo para ser usado.
*/
void constructor (Triangulo &triangulo);
/**
PRE:
    La instancia del TDA (triangulo) debe haberse creado pero no debe estar destruida.
POST:
    Destruye la instancia del TDA y ya no podrá ser utilizada.
*/
void destructor(Triangulo &triangulo);
/**
PRE:
    La instancia del TDA (triangulo) debe haberse creado pero no debe estar destruida.
POST:
    Devuelve el nombre del triangulo.
*/

char* getNombre(Triangulo &triangulo);
/**
PRE:
    La instancia del TDA (triangulo) debe haberse creado pero no debe estar destruida.
POST:
    Se modifica el triangulo con el nuevo nombre .
*/
void setNombre(Triangulo &triangulo, char nombre[]);
/**
PRE:
    La instancia del TDA (triangulo) debe haberse creado pero no debe estar destruida.
POST:
    Devuelve el color del triangulo.
*/

char* getColor(Triangulo &triangulo);
/**
PRE:
    La instancia del TDA (triangulo) debe haberse creado pero no debe estar destruida.
POST:
    Se modifica el triangulo con el nuevo color.
*/
void setColor(Triangulo &triangulo, char color[]);
/**
PRE:
    La instancia del TDA (triangulo) debe haberse creado pero no debe estar destruida.
    La base debe ser mayor a 0.
POST:
    Se modifica el triangulo con la nueva base.
*/
void setBase(Triangulo &triangulo,float base);
/**
PRE:
    La instancia del TDA (triangulo) debe haberse creado pero no debe estar destruida.
POST:
    Devuelve la base del triangulo.
*/
float getBase (Triangulo &triangulo);
/**
PRE:
    La instancia del TDA (triangulo) debe haberse creado pero no debe estar destruida.
POST:
    Se modifica el triangulo con la nueva altura.
*/
void setAltura(Triangulo &triangulo, float altura);
/**
PRE:
    La instancia del TDA (triangulo) debe haberse creado pero no debe estar destruida-
    La altura debe ser mayor a 0.
POST:
    Devuelve la altura del triangulo.
*/
float getAltura(Triangulo &triangulo);
/**
PRE:
    La instancia del TDA (triangulo) debe haberse creado pero no debe estar destruida.
POST:
    Devuelve el area del triangulo ((base * altura)/2).
*/

float getArea(Triangulo &triangulo);
#endif

