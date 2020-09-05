#include "Cubo.h"
#include <iostream>
#include <cstdio>

using namespace std;

/*
PRE:
    La instancia del TDA (cubo) no debe haberse creado (crear) ni destruido (destruir) con anterioridad.
POST:
    Deja la instancia del TDA (cubo) listo para ser usado.
*/
void constructor(Cubo &cubo){
    strcpy(cubo.nombre,""); //Esto para que el String no quede con basura por eso queda inicializado el atributo
    strcpy(cubo.color,"");
    cubo.lado = 1;
}

/*
PRE:
    La instancia del TDA (cubo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Destruye la instancia del TDA y ya no podrá ser utilizada.
*/
void destructor(Cubo &cubo){
}

/*
PRE:
    La instancia del TDA (cubo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el lado del cubo.
*/
float getLado(Cubo &cubo){
	return cubo.lado;
}

/*
PRE:
    La instancia del TDA (cubo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    El cubo queda con el nuevo nombre.
*/
void setNombre(Cubo &cubo, char nombre[]){
	strcpy(cubo.nombre,nombre);

}

/*
PRE:
    La instancia del TDA (cubo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el nombre del cubo.
*/
char* getNombre(Cubo &cubo){
	return cubo.nombre;
}


/*
PRE:
    La instancia del TDA (cubo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    El cubo queda con el nuevo color.
*/
void setColor(Cubo &cubo, char color[]){
	strcpy(cubo.color,color);

}

/*
PRE:
    La instancia del TDA (cubo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el color del cubo.
*/
char* getColor(Cubo &cubo){
	return cubo.color;
}

/*
PRE:
    La instancia del TDA (cubo) debe haberse creado (crear) pero no debe estar destruida (destruir).
    El lado debe ser mayor a cero.
POST:
    El cubo queda con el nuevo lado.
*/
void setLado(Cubo &cubo, float lado){

	cubo.lado=lado;
}

/*
PRE:
    La instancia del TDA (cubo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el area del cubo.
*/
float getArea(Cubo &cubo) {
	return 6.0*(getLado(cubo)*2.0);
}

