#ifndef CILINDRO_H_INCLUDED
#define CILINDRO_H_INCLUDED
/**
    Definición del Tipo de Dato para manejo de Cilindros.
    Atributos:
    * nombre figura,
    * color figura,
    * radio,
    * altura
    .

    Axiomas:
    * radio > 0
    * altura > 0
    * area = 2 x PI .X radio x (altura + radio)

*/
typedef struct{
    char nombre[50];
    char color[50];
    float radio;
    float altura;
}CILINDRO;
/**
PRE:
    La instancia del TDA (cilindro) no debe haberse creado (crear) ni destruido (destruir) con anterioridad.
POST:
    Deja la instancia del TDA (cilindro) listo para ser usado. El valor por defecto del radio es 1 y la altura es 1.
*/
void constructor (CILINDRO &cili);
/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Destruye la instancia del TDA y ya no podrá ser utilizada.
*/
void destructor(CILINDRO &cili);
/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).

POST:
     Devuelve el nombre del cilindro.
*/

char* getNombre(CILINDRO &cili);
/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).

POST:
    El cilindro queda con el nuevo nombre.
*/
void setNombre(CILINDRO &cili, char nombre[]);
/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).

POST:
     Devuelve el color del cilindro.
*/

char* getColor(CILINDRO &cili);
/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).

POST:
    El cilindro queda con el nuevo color.
*/

void setColor(CILINDRO &cili, char color[]);
/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el radio del cilindro.
*/

float getRadio(CILINDRO &cili);
/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
    El radio debe ser mayor a cero.
POST:
    El cilindro queda con el nuevo radio.
*/
void setRadio(CILINDRO &cili, float radio);
/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
    La altura debe ser mayor a cero.
POST:
     Devuelve la altura del cilindro.
*/

float getAltura(CILINDRO &cili);
/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).

POST:
    El cilindro queda con la nueva altura.
*/

void setAltura(CILINDRO &cili, float altura);

/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).

POST:
    Resultado del calculo del area.
*/

//circuloPerimetro * (Altura + radio)
float getArea(CILINDRO &cili);
#endif // CILINDRO_H_INCLUDED

