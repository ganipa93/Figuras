#include "cilindro.h"
#include "circulo.h"
#include <math.h>
/**
PRE:
    La instancia del TDA (cilindro) no debe haberse creado (crear) ni destruido (destruir) con anterioridad.
POST:
    Deja la instancia del TDA (cilindro) listo para ser usado. El valor por defecto del radio es 1 .
*/

void constructor(CILINDRO &cili){
    strcpy(cili.nombre,""); //Esto para que el String no quede con basura por eso queda inicializado el atributo
    strcpy(cili.color,"");
    cili.radio = 1;
    cili.altura=1;
}
/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).

POST:
     Devuelve el nombre del cilindro.
*/
char* getNombre(CILINDRO &cili){
	return cili.nombre;
}
/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).

POST:
    El cilindro queda con el nuevo nombre.
*/
void setNombre(CILINDRO &cili, char nombre[]){
    strcpy(cili.nombre,nombre);
}
/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).

POST:
     Devuelve el color del cilindro.
*/

char* getColor(CILINDRO &cili){
	return cili.color;
}
/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).

POST:
    El cilindro queda con el nuevo color.
*/

void setColor(CILINDRO &cili, char color[]){
    strcpy(cili.color,color);
}
/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el radio del cilindro.
*/

float getRadio(CILINDRO &cili){
    return cili.radio;
}
/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
    El radio debe ser mayor a cero.
POST:
    El cilindro queda con el nuevo radio.
*/

void setRadio(CILINDRO &cili, float radio){
    cili.radio = radio;
}
/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
    La altura debe ser mayor a cero.
POST:
     Devuelve la altura del cilindro.
*/

float getAltura(CILINDRO &cili){
    return cili.altura;
}
/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).

POST:
    El cilindro queda con la nueva altura.
*/
void setAltura(CILINDRO &cili, float altura){
    cili.altura = altura;
}

/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
    La primitiva utiliza la formula del area del cilindro .
POST:
    Resultado del calculo del area.
*/
float getArea(CILINDRO &cili){
    return 2 * PI * cili.radio * (cili.altura + cili.radio);
}

