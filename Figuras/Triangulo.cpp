#include <iostream>
#include "triangulo.h"

using namespace std;
/**
PRE:
    La instancia del TDA (triangulo) no debe haberse creado ni destruido con anterioridad.
POST:
    Deja la instancia del TDA (triangulo) listo para ser usado.
*/

void constructor (Triangulo &triangulo){
        strcpy(triangulo.nombre,"");
        strcpy(triangulo.color,"");
        triangulo.altura=1;
        triangulo.base=1;
}
/**
PRE:
    La instancia del TDA (triangulo) debe haberse creado pero no debe estar destruida (destruir).
POST:
    Destruye la instancia del TDA y ya no podrá ser utilizada.
*/
void destructor(Triangulo &triangulo){
}
/**
PRE:
    La instancia del TDA (triangulo) debe haberse creado pero no debe estar destruida.
POST:
    El triangulo queda con el nuevo nombre.
*/
void setNombre(Triangulo &triangulo, char nombre[]){
	strcpy(triangulo.nombre,nombre);
}
/**
PRE:
    La instancia del TDA (triangulo) debe haberse creado pero no debe estar destruida (destruir).
POST:
    Devuelve el nombre del triangulo.
*/
char* getNombre(Triangulo &triangulo){
	return triangulo.nombre;
}
/**
PRE:
    La instancia del TDA (triangulo) debe haberse creado pero no debe estar destruida.
POST:
    Devuelve el color del traingulo.
*/
char* getColor(Triangulo &triangulo){
	return triangulo.color;
}
/**
PRE:
    La instancia del TDA (trainguloo) debe haberse creado pero no debe estar destruida.
POST:
    El traingulo queda con el nuevo color.
*/
void setColor(Triangulo &triangulo, char color[]){
    strcpy(triangulo.color,color);
}
/**
PRE:
    La instancia del TDA (triangulo) debe haberse creado pero no debe estar destruida.
    La base debe ser mayor a cero.
POST:
    El triangulo queda con la nueva base.
*/
void setBase(Triangulo &triangulo,float base){
	triangulo.base=base;
}
/**
PRE:
    La instancia del TDA (triangulo) debe haberse creado pero no debe estar destruida.
POST:
    Devuelve la base del triangulo.
*/
float getBase(Triangulo &triangulo){
	return triangulo.base;
}
/**
PRE:
    La instancia del TDA (triangulo) debe haberse creado pero no debe estar destruida.
    La altura debe ser mayor a cero.
POST:
    El triangulo queda con la nueva altura.
*/
void setAltura(Triangulo &triangulo, float altura){
	triangulo.altura=altura;
}
/**
PRE:
    La instancia del TDA (triangulo) debe haberse creado pero no debe estar destruida.
POST:
    Devuelve la altura del traingulo.
*/
float getAltura(Triangulo &triangulo){
	return triangulo.altura;
}
/**
PRE:
    La instancia del TDA (triangulo) debe haberse creado pero no debe estar destruida.
POST:
    Devuelve el area del traingulo ((base*altura)/2).
*/
float getArea(Triangulo &triangulo){
	return (getBase(triangulo)*getAltura(triangulo))/2;
}


