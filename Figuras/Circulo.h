#ifndef _CIRCULO_H_
#define _CIRCULO_H_
#include <string>
#include <string.h>
/**
    Definición del Tipo de Dato para manejo de Circulo.
    Atributos:
    * nombre figura,
    * color figura,
    * radio,

    .

    Axiomas:
    * radio > 0
    * area = PI*r∧2

*/
typedef struct{
    char nombre[50];
    char color[50];
    float radio;

}CIRCULO;

const float PI = 3.1416;
/**
PRE:
    La instancia del TDA (circulo) no debe haberse creado (crear) ni destruido (destruir) con anterioridad.
POST:
    Deja la instancia del TDA (circulo) listo para ser usado. El valor por defecto del radio es 1 .
*/
void constructor(CIRCULO &circ);
/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).

POST:
     Devuelve el nombre del circulo.
*/
char* getNombre(CIRCULO &circ);
/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).

POST:
    El circulo queda con el nuevo nombre.
*/
void setNombre(CIRCULO &circ, char nombre[]);
/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).

POST:
     Devuelve el color del circulo.
*/
char* getColor(CIRCULO &circ);
/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).

POST:
    El circulo queda con el nuevo color.
*/

void setColor(CIRCULO &circ, char color[]);
/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).

POST:
     Devuelve el radio del circulo.
*/
float getRadio(CIRCULO &circ);
/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).

POST:
    El circulo queda con el nuevo radio.
*/

void setRadio(CIRCULO &circ, float radio);

/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).

POST:
    Resultado del calculo del area.
*/

float getArea(CIRCULO &circ);


#endif // _CIRCULO_H_
