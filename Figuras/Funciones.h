#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "Circulo.h"
#include "Cilindro.h"
#include "lista.h"
#include <iostream>
#include "Rectangulo.h"
#include "Triangulo.h"
#include "Cubo.h"
//CIRCULOS
void totalPorCirculo(Lista&);
void totalPorCirculoColor(Lista&,char[]);

//CUBOS
void totalPorCubo(Lista&);
void totalPorCuboColor(Lista&,char[]);

//CILINDRO
void totalPorCilindro(Lista&);
void totalPorCilindroColor(Lista&,char[]);

//RECTANGULO
void totalPorRectangulo(Lista&);
void totalPorRectanguloColor(Lista&,char[]);

//TRIANGULO
void totalPorTriangulo(Lista&);
void totalPorTrianguloColor(Lista&,char[]);

#endif // FUNCIONES_H_INCLUDED
