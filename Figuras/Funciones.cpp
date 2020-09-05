#include "Funciones.h"
#include <string>
#include <string.h>
#include <cstring>
#include <ctype.h>
#include <windows.h>
using namespace std;

///////////////////////////// CIRCULOS    /////////////////////////////////////////
void totalPorCirculo(Lista &listaCirculos){
    float total = 0;
    PtrNodoLista cursor=primero(listaCirculos);
    cout<<"\n"<<"//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;
    cout<<"                         ************************* FIGURA CIRCULO *************************"<<"\n\n";
    while(cursor!=fin()){


        total+=getArea(*(CIRCULO*)cursor->ptrDato);
        cout<<"RADIO = "<<getRadio(*(CIRCULO*)cursor->ptrDato)<<"--------> AREA = "<<getArea(*(CIRCULO*)cursor->ptrDato)<<"\n";

        cursor=siguiente(listaCirculos,cursor);


    }
    cout<<"\n"<<"--------------------------------- TOTAL DE PLASTICO USADO EN CIRCULOS: "<<total<<" -----------------------------------------"<<endl;
    cout<<"\n"<<"///////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;
    system("pause");
    cout<<"\n";
}

void totalPorCirculoColor(Lista &listaCirculos, char c[]){
    float total = 0;
    unsigned int i = 0,lon = strlen(c),lon2 = 0;
    char* colorFigura; char color[20];
    strcpy(color,c);    //Me creo una var aux para copiar el dato de c[] que me entra por parametro, porque sino tolower() no me iba a funcionar
    PtrNodoLista cursor=primero(listaCirculos);
    cout<<"\n"<<"//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;
    cout<<"                         ************************* FIGURA CIRCULO *************************"<<"\n\n";
    for(i=0;i<lon;i++){
        color[i]=tolower(color[i]);//Aca convierto toda la cadena caracter por caracter a minuscula
    }
    while(cursor!=fin()){
        colorFigura=getColor(*(CIRCULO*)cursor->ptrDato);
        lon2=strlen(colorFigura);

        for(i=0;i<lon2;i++){
            colorFigura[i]=tolower(colorFigura[i]); //lo mismo aca
        }
        if(strcmp(colorFigura,color)==0){   //Para poder compararla en esta condicion
            total+=getArea(*(CIRCULO*)cursor->ptrDato);
        cout<<"RADIO = "<<getRadio(*(CIRCULO*)cursor->ptrDato)<< " COLOR = "<<getColor(*(CIRCULO*)cursor->ptrDato)<<"--------> AREA = "<<getArea(*(CIRCULO*)cursor->ptrDato)<<"\n";

        }
        cursor=siguiente(listaCirculos,cursor);
    }
    cout<<"\n"<<"                --------------------  TOTAL DE PLASTICO USADO EN CIRCULOS DE COLOR "<<color<<": "<<total<<"-------------------"<<endl;
    cout<<"\n"<<"//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;
    system("pause");
    cout<<"\n";
}
//////////////////////////////////////////////////////////////////////////////////////

///////////////////////////// RECTANGULOS    /////////////////////////////////////////
void totalPorRectangulo(Lista &listaRectangulos){
    float total = 0;
    PtrNodoLista cursor=primero(listaRectangulos);
    cout<<"\n"<<"//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;
    cout<<"                         ************************* FIGURA RECTANGULO *************************"<<"\n\n";

    while(cursor!=fin()){
        total+=getArea(*(Rectangulo*)cursor->ptrDato);
        cout<<"BASE * ALTURA= "<<getBase(*(Rectangulo*)cursor->ptrDato)<<"*"<<getAltura(*(Rectangulo*)cursor->ptrDato)<<"--------> AREA = "<<getArea(*(Rectangulo*)cursor->ptrDato)<<"\n";

        cursor=siguiente(listaRectangulos,cursor);
    }
    cout<<"\n"<<"--------------------------------- TOTAL DE PLASTICO USADO EN RECTANGULO: "<<total<<" -----------------------------------------"<<endl;
    cout<<"\n"<<"///////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;
    system("pause");
    cout<<"\n";
}

void totalPorRectanguloColor(Lista &listaRectangulos, char c[]){
    float total = 0;
    unsigned int i = 0,lon = strlen(c),lon2 = 0;
    char* colorFigura; char color[20];
    strcpy(color,c);    //Me creo una var aux para copiar el dato de c[] que me entra por parametro, porque sino tolower() no me iba a funcionar
    PtrNodoLista cursor=primero(listaRectangulos);
    cout<<"\n"<<"//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;
    cout<<"                         ************************* FIGURA RECTANGULO *************************"<<"\n\n";
    for(i=0;i<lon;i++){
        color[i]=tolower(color[i]);//Aca convierto toda la cadena caracter por caracter a minuscula
    }
    while(cursor!=fin()){
        colorFigura=getColor(*(Rectangulo*)cursor->ptrDato);
        lon2=strlen(colorFigura);

        for(i=0;i<lon2;i++){
            colorFigura[i]=tolower(colorFigura[i]); //lo mismo aca
        }
        if(strcmp(colorFigura,color)==0){   //Para poder compararla en esta condicion
            total+=getArea(*(Rectangulo*)cursor->ptrDato);
            cout<<"BASE = "<<getBase(*(Rectangulo*)cursor->ptrDato)<<" ALTURA = "<<getAltura(*(Rectangulo*)cursor->ptrDato)<<" COLOR = "<<getColor(*(Rectangulo*)cursor->ptrDato)<<"--------> AREA = "<<getArea(*(Rectangulo*)cursor->ptrDato)<<"\n";

        }
        cursor=siguiente(listaRectangulos,cursor);
    }
    cout<<"\n"<<"                --------------------  TOTAL DE PLASTICO USADO EN RECTANGULOS DE COLOR "<<color<<": "<<total<<"-------------------"<<endl;
    cout<<"\n"<<"//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;
    system("pause");
    cout<<"\n";
}


///////////////////////////// CUBOS    /////////////////////////////////////////
void totalPorCubo(Lista &listaCubo){
    float total = 0;
    PtrNodoLista cursor=primero(listaCubo); //PtrNodoLista tiene el dato y el nodo siguiente - Toma el primero de la lista.
    cout<<"\n"<<"//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;
    cout<<"                         ************************* FIGURA CUBO *************************"<<"\n\n";
    while(cursor!=fin()){
        total+=getArea(*(Cubo*)cursor->ptrDato); //Suma las areas.
        cout<<"LADO= "<<getLado(*(Cubo*)cursor->ptrDato)<<"--------> AREA = "<<getArea(*(Cubo*)cursor->ptrDato)<<"\n";

        cursor=siguiente(listaCubo,cursor);// Al cursor se le da la siguiente direccion.
    }
    cout<<"\n"<<"--------------------------------- TOTAL DE PLASTICO USADO EN CUBOS: "<<total<<" -----------------------------------------"<<endl;
    cout<<"\n"<<"///////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;
    system("pause");
    cout<<"\n";
}

void totalPorCuboColor(Lista &listaCubo, char c[]){
    float total = 0;
    unsigned int i = 0,lon = strlen(c),lon2 = 0;
    char* colorFigura; char color[20];
    strcpy(color,c);    //Me creo una var aux para copiar el dato de c[] que me entra por parametro, porque sino tolower() no me iba a funcionar
    PtrNodoLista cursor=primero(listaCubo);
    cout<<"\n"<<"//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;
    cout<<"                         ************************* FIGURA CUBOS *************************"<<"\n\n";
    for(i=0;i<lon;i++){
        color[i]=tolower(color[i]);//Aca convierto toda la cadena caracter por caracter a minuscula
    }
    while(cursor!=fin()){
        colorFigura=getColor(*(Cubo*)cursor->ptrDato);
        lon2=strlen(colorFigura);

        for(i=0;i<lon2;i++){
            colorFigura[i]=tolower(colorFigura[i]); //lo mismo aca
        }
        if(strcmp(colorFigura,color)==0){   //Para poder compararla en esta condicion
            total+=getArea(*(Cubo*)cursor->ptrDato);
            cout<<"LADO = "<<getLado(*(Cubo*)cursor->ptrDato)<< " COLOR = "<<getColor(*(Cubo*)cursor->ptrDato)<<"--------> AREA = "<<getArea(*(Cubo*)cursor->ptrDato)<<"\n";

        }
        cursor=siguiente(listaCubo,cursor);
    }
    cout<<"\n"<<"                --------------------  TOTAL DE PLASTICO USADO EN CUBOS DE COLOR "<<color<<": "<<total<<"-------------------"<<endl;
    cout<<"\n"<<"//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;
    system("pause");
    cout<<"\n";
}

///////////////////////////// TRIANGULOS    /////////////////////////////////////////

void totalPorTriangulo(Lista &listaTriangulos){
    float total = 0;

PtrNodoLista cursor=primero(listaTriangulos); //PtrNodoLista tiene el dato y el nodo siguiente - Toma el primero de la lista.
cout<<"\n"<<"//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;
cout<<"                         ************************* FIGURA TRIANGULO *************************"<<"\n\n";
    while(cursor!=fin()){
        total+=getArea(*(Triangulo*)cursor->ptrDato); //Suma las areas.
        cout<<"(BASE * ALTURA)/2= "<<"("<<getBase(*(Triangulo*)cursor->ptrDato)<<"*"<<getAltura(*(Triangulo*)cursor->ptrDato)<<")"<<"/2"<<"--------> AREA = "<<getArea(*(Triangulo*)cursor->ptrDato)<<"\n";

        cursor=siguiente(listaTriangulos,cursor);// Al cursor se le da la siguiente direccion.
    }
    cout<<"\n"<<"--------------------------------- TOTAL DE PLASTICO USADO EN TRIANGULO: "<<total<<" -----------------------------------------"<<endl;
    cout<<"\n"<<"///////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;
    system("pause");
    cout<<"\n";
}

void totalPorTrianguloColor(Lista &listaTriangulos, char c[]){
    float total = 0;
    unsigned int i = 0,lon = strlen(c),lon2 = 0;
    char* colorFigura; char color[20];
    strcpy(color,c);    //Me creo una var aux para copiar el dato de c[] que me entra por parametro, porque sino tolower() no me iba a funcionar
    PtrNodoLista cursor=primero(listaTriangulos);
    cout<<"\n"<<"//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;
    cout<<"                         ************************* FIGURA TRIANGULO *************************"<<"\n\n";
    for(i=0;i<lon;i++){
        color[i]=tolower(color[i]);//Aca convierto toda la cadena caracter por caracter a minuscula
    }
    while(cursor!=fin()){
        colorFigura=getColor(*(Triangulo*)cursor->ptrDato);
        lon2=strlen(colorFigura);

        for(i=0;i<lon2;i++){
            colorFigura[i]=tolower(colorFigura[i]); //lo mismo aca
        }
        if(strcmp(colorFigura,color)==0){   //Para poder compararla en esta condicion
            total+=getArea(*(Triangulo*)cursor->ptrDato);
            cout<<"(BASE = "<<"("<<getBase(*(Triangulo*)cursor->ptrDato)<<" ALTURA = "<<getAltura(*(Triangulo*)cursor->ptrDato)<<" COLOR = "<<getColor(*(Triangulo*)cursor->ptrDato)<<"--------> AREA = "<<getArea(*(Triangulo*)cursor->ptrDato)<<"\n";

        }
        cursor=siguiente(listaTriangulos,cursor);
    }
    cout<<"\n"<<"                --------------------  TOTAL DE PLASTICO USADO EN TRIANGULOS DE COLOR "<<color<<": "<<total<<"-------------------"<<endl;
    cout<<"\n"<<"//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;
    system("pause");
    cout<<"\n";
}


///////////////////////////// CILINDROS    /////////////////////////////////////////

void totalPorCilindro(Lista &listaCilindros){
    float total = 0;
    PtrNodoLista cursor=primero(listaCilindros); //PtrNodoLista tiene el dato y el nodo siguiente - Toma el primero de la lista.
    cout<<"\n"<<"//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;
    cout<<"                         ************************* FIGURA CILINDRO *************************"<<"\n\n";
    while(cursor!=fin()){
        total+=getArea(*(CILINDRO*)cursor->ptrDato); //Suma las areas.
    cout<<"RADIO = "<<getRadio(*(CILINDRO*)cursor->ptrDato)<<" ALTURA = "<<getAltura(*(CILINDRO*)cursor->ptrDato)<<"--------> AREA = "<<getArea(*(CILINDRO*)cursor->ptrDato)<<"\n";

        cursor=siguiente(listaCilindros,cursor);// Al cursor se le da la siguiente direccion.
    }
    cout<<"\n"<<"--------------------------------- TOTAL DE PLASTICO USADO EN CILINDROS: "<<total<<" -----------------------------------------"<<endl;
    cout<<"\n"<<"///////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;
    system("pause");
    cout<<"\n";
}

void totalPorCilindroColor(Lista &listaCilindros, char c[]){
    float total = 0;
    unsigned int i = 0,lon = strlen(c),lon2 = 0;
    char* colorFigura; char color[20];
    strcpy(color,c);    //Me creo una var aux para copiar el dato de c[] que me entra por parametro, porque sino tolower() no me iba a funcionar
    PtrNodoLista cursor=primero(listaCilindros);
    cout<<"\n"<<"//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;
    cout<<"                         ************************* FIGURA CILINDRO *************************"<<"\n\n";
    for(i=0;i<lon;i++){
        color[i]=tolower(color[i]);//Aca convierto toda la cadena caracter por caracter a minuscula
    }
    while(cursor!=fin()){
        colorFigura=getColor(*(CILINDRO*)cursor->ptrDato);
        lon2=strlen(colorFigura);

        for(i=0;i<lon2;i++){
            colorFigura[i]=tolower(colorFigura[i]); //lo mismo aca
        }
        if(strcmp(colorFigura,color)==0){   //Para poder compararla en esta condicion
            total+=getArea(*(CILINDRO*)cursor->ptrDato);
    cout<<"RADIO = "<<getRadio(*(CILINDRO*)cursor->ptrDato)<<" ALTURA = "<<getAltura(*(CILINDRO*)cursor->ptrDato)<<" COLOR = "<<getColor(*(CILINDRO*)cursor->ptrDato)<<"--------> AREA = "<<getArea(*(CILINDRO*)cursor->ptrDato)<<"\n";


        }
        cursor=siguiente(listaCilindros,cursor);
    }
       cout<<"\n"<<"                --------------------  TOTAL DE PLASTICO USADO EN CILINDROS DE COLOR "<<color<<": "<<total<<"-------------------"<<endl;
    cout<<"\n"<<"//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;
    system("pause");
    cout<<"\n";
}
































