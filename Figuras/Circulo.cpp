#include "circulo.h"
#include <math.h>
/**
PRE:
    La instancia del TDA (circulo) no debe haberse creado (crear) ni destruido (destruir) con anterioridad.
POST:
    Deja la instancia del TDA (circulo) listo para ser usado. El valor por defecto del radio es 1 .
*/

void constructor(CIRCULO &circ){
    strcpy(circ.nombre,"\0");
    strcpy(circ.color,"\0");
    circ.radio = 1;
}
/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).

POST:
     Devuelve el nombre del circulo.
*/
char* getNombre(CIRCULO &circ){
    return circ.nombre;
}
/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).

POST:
    El circulo queda con el nuevo nombre.
*/

void setNombre(CIRCULO &circ, char nombre[]){
    strcpy(circ.nombre,nombre);
}
/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).

POST:
     Devuelve el color del circulo.
*/
char* getColor(CIRCULO &circ){
    return circ.color;
}
/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).

POST:
    El circulo queda con el nuevo color.
*/

void setColor(CIRCULO &circ, char color[]){
    strcpy(circ.color,color);
}
/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).

POST:
     Devuelve el radio del circulo.
*/
float getRadio(CIRCULO &circ){
    return circ.radio;
}
/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).

POST:
    El circulo queda con el nuevo radio.
*/

void setRadio(CIRCULO &circ, float radio){
    circ.radio = radio;
}

/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).

POST:
    Resultado del calculo del area.
*/


float getArea(CIRCULO &circ){
     return PI * pow(circ.radio,2);
}

