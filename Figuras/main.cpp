#include <iostream>
#include <fstream>
#include <sstream>
#include <windows.h> //REVISAR PARA ERROR DE TILDES
#include "Funciones.h"
using namespace std;

/////////////////////////////////// CIRCULOS  ///////////////////////////////////////////////
void lecturaArchivo(Lista &listaFigurasCirculos);
ResultadoComparacion compararCirculos(PtrDato ptrDato1,PtrDato ptrDato2);
void recorrerListaCirculos(Lista& listaFigurasCirculos);
void recorrerListaCirculos1(Lista& listaFigurasCirculos);
//////////////////////////////////  CUBOS   /////////////////////////////////////////////////
void lecturaCubo(Lista &listaFigurasCubos);
ResultadoComparacion compararCubos(PtrDato ptrDato1,PtrDato ptrDato2);
void recorrerListaCubos(Lista& listaFigurasCubos);
void recorrerListaCubos1(Lista& listaFigurasCubos);
//////////////////////////////////  RECTANGULO   ////////////////////////////////////////////
void lecturaRectangulo(Lista &listaFigurasRectangulos);
ResultadoComparacion compararRectangulos(PtrDato ptrDato1,PtrDato ptrDato2);
void recorrerListaRectangulos(Lista& listaFigurasRectangulos);
void recorrerListaRectangulos1(Lista& listaFigurasRectangulos); //AGREGADO

//////////////////////////////////// TRIANGULOS /////////////////////////////////////////////
void lecturaTriangulo(Lista &listaFigurasTriangulos);
ResultadoComparacion compararTriangulos(PtrDato ptrDato1,PtrDato ptrDato2);
void recorrerListaTriangulos(Lista& listaFigurasTriangulos);
void recorrerListaTriangulos1(Lista& listaFigurasRectangulos); //AGREGADO

////////////////////////////  CILINDROS   /////////////////////////////////////////////////
void lecturaCilindro(Lista &listaFigurasCilindros);
ResultadoComparacion compararCilindros(PtrDato ptrDato1,PtrDato ptrDato2);
void recorrerListaCilindros(Lista& listaFigurasCilindros);
void recorrerListaCilindros1(Lista& listaFigurasCilindros); //AGREGADO

/////////////////////////////  LECTURA TOTAL  /////////////////////////////////////////////////////
void lecturaArchivo();


int main()
{
    Lista listaFigurasTriangulos;
    crearLista(listaFigurasTriangulos,&compararTriangulos); //En lista.h

    Lista listaFigurasRectangulos;
    crearLista(listaFigurasRectangulos,&compararRectangulos); //En lista.h

    Lista listaFigurasCilindros;
    crearLista(listaFigurasCilindros,&compararCilindros); //En lista.h

    Lista listaFigurasCirculos;
    crearLista(listaFigurasCirculos,&compararCirculos); //En lista.h

    Lista listaFigurasCubos;
    crearLista(listaFigurasCubos,&compararCubos); //En lista.h

    int menu_elegido,submenu_elegido;
    float radio;
    float altura;
    CIRCULO circulo;
    CILINDRO cilindro;
    do{
    cout << "Elija con que figura trabajar:" << endl;
    // AGREGAR OPCION PARA LEER TODO EL ARCHIVO
    // MOSTRARIA EN ORDEN Y CON SUS OPERACIONES CORRESPONDIENTES YA REALIZADAS
    //ESTE METODO TAMBIEN PODRIA IR EN EL SUBMENU EN REPORTES DE TOTALES

    cout << "1. Lectura Triangulos" << endl;
    cout << "2. Lectura Rectangulos" << endl;
    cout << "3. Lectura Cilindros" << endl;
    cout << "4. Lectura Circulo" << endl;
    cout << "5. Lectura Cubos" << endl;
    cout << "6. Reportes de totales" << endl;
    cout << "0. Salir" <<endl;
    cin >> menu_elegido;

    //while(menu_elegido != 3)  //PROVOCA LOOP INFINITO
    //{
        switch(menu_elegido){
            case 1:
                lecturaTriangulo(listaFigurasTriangulos);
                recorrerListaTriangulos1(listaFigurasTriangulos);
            break;
            case 2:
                lecturaRectangulo(listaFigurasRectangulos);
               // recorrerListaRectangulos(listaFigurasRectangulos);
                recorrerListaRectangulos1(listaFigurasRectangulos);
            break;
            case 3:
                lecturaCilindro(listaFigurasCilindros);
                recorrerListaCilindros1(listaFigurasCilindros);
            break;
            case 4:
                lecturaArchivo(listaFigurasCirculos);
                //recorrerListaCirculos(listaFigurasCirculos);
                recorrerListaCirculos1(listaFigurasCirculos);
            break;
            case 5:
                lecturaCubo(listaFigurasCubos);
                //recorrerListaCubos(listaFigurasCubos);
                recorrerListaCubos1(listaFigurasCubos);
            break;
            case 6:
                do{
                    system("cls");
                    cout<<"1. Totales por Figura"<<endl;
                    cout<<"2. Totales por Figura-Color"<<endl;
                    //FUNCIONES 3 Y 4 FALTA IMPLEMENTARLAS
                    cout<<"3. Orden de produccion"<<endl;
                    cout<<"4. Listado de figuras ordenadas por tamano de area"<<endl;
                    cout<<"0. Volver al menu"<<endl;
                    cin>>submenu_elegido;
                    switch(submenu_elegido){
                    case 1:

                        totalPorTriangulo(listaFigurasTriangulos);
                        totalPorCirculo(listaFigurasCirculos);
                        totalPorCilindro(listaFigurasCilindros);
                        totalPorRectangulo(listaFigurasRectangulos);
                        totalPorCubo(listaFigurasCubos);

                    break;
                    case 2:

                        totalPorCirculoColor(listaFigurasCirculos,"rOJo"); // para que sea case sensitive
                        totalPorCirculoColor(listaFigurasCirculos,"amarillo");
                        totalPorCirculoColor(listaFigurasCirculos,"azul");
                        totalPorCilindroColor(listaFigurasCilindros,"rOJo");
                        totalPorCilindroColor(listaFigurasCilindros,"amarillo");
                        totalPorCilindroColor(listaFigurasCilindros,"azul");
                        totalPorRectanguloColor(listaFigurasRectangulos,"rOJo");
                        totalPorRectanguloColor(listaFigurasRectangulos,"amarillo");
                        totalPorRectanguloColor(listaFigurasRectangulos,"azul");
                        totalPorTrianguloColor(listaFigurasTriangulos,"rOJo");
                        totalPorTrianguloColor(listaFigurasTriangulos,"amarillo");
                        totalPorTrianguloColor(listaFigurasTriangulos,"azul");
                        totalPorCuboColor(listaFigurasCubos,"rOJo");
                        totalPorCuboColor(listaFigurasCubos,"amarillo");
                        totalPorCuboColor(listaFigurasCubos,"azul");

                    break;
                    case 3:
                           //METODOS DE ORDEN DE PRODUCCION
                           //FALTA IMPLEMENTAR
                            cout<<"//////////////////////    ORDEN DE PRODUCCION      ////////////////////"<<endl;
                            cout<<" "<<endl;
                            lecturaArchivo();
                            system("pause");


                    break;
                    case 4:
                            ///////////////////////////////////////    CILINDROS  ///////////////////////////////////////////////////////////
                            //LISTADO DE FIGURAS POR TAMAÑO AREA
                            ///recorrerListaCilindros(listaFigurasCilindros); ///ESTA ESTABA PARA HACERLE PRUEBAS
                            reordenar(listaFigurasCilindros);
                            cout<<"////////////  Lista ordenada de CILINDROS por area de menor a mayor  ////////"<<endl;
                            recorrerListaCilindros(listaFigurasCilindros);
                            eliminarLista(listaFigurasCilindros);
                            cout<<" "<<endl;

                            ////////////////////////////////////////    CIRCULOS           ////////////////////////////////////////////////////////////////
                            reordenar(listaFigurasCirculos);
                            cout<<"////////////  Lista ordenada de CIRCUL0S por area de menor a mayor   //////////"<<endl;
                            recorrerListaCirculos(listaFigurasCirculos);
                            eliminarLista(listaFigurasCirculos);
                            cout<<" "<<endl;

                            ////////////////////////////////////////    CUBOS          ///////////////////////////////////////////////////////////////////////
                            reordenar(listaFigurasCubos);
                            cout<<"////////////  Lista ordenada de CUBOS por area de menor a mayor  ////////"<<endl;
                            recorrerListaCubos(listaFigurasCubos);
                            eliminarLista(listaFigurasCubos);
                            cout<<" "<<endl;
                            ////////////////////////////////////////    RECTANGULOS           ////////////////////////////////////////////////////////////////
                            reordenar(listaFigurasRectangulos);
                            cout<<"////////////  Lista ordenada de RECTANGULOS por area de menor a mayor  ////////"<<endl;
                            recorrerListaRectangulos(listaFigurasRectangulos);
                            eliminarLista(listaFigurasRectangulos);
                            cout<<" "<<endl;

                            ////////////////////////////////////////    TRIANGULOS           ////////////////////////////////////////////////////////////////
                            reordenar(listaFigurasTriangulos); //
                            cout<<"////////////  Lista ordenada de TRIANGULOS por area de menor a mayor  ////////"<<endl;
                            recorrerListaTriangulos(listaFigurasTriangulos);
                            eliminarLista(listaFigurasTriangulos);
                            cout<<" "<<endl;

                            system("pause");


                    break;
                    }
                }while(submenu_elegido > 0 && submenu_elegido < 5);
            break;
        }
        system("pause");
        system("cls");
    }while(menu_elegido > 0 && menu_elegido < 7);
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////// CIRCULOS ////////////////////////////////////////////
void lecturaArchivo(Lista &listaFiguras){ // SOLUCIONAR . A COMA Y LO DE MAYUSCULA
        // SOLUCIONAR . A COMA Y LO DE MAYUSCULA
        CIRCULO* circulo;
        ifstream FigurasArchivo;
        FigurasArchivo.open("FigurasEjemplo.txt",ios::in);
        string lector;
        SetConsoleOutputCP(65001);
        char figura[50]="";
        char datosNumericos [10]="";  //------->AGREGADO
        float valor; int pos;
        bool eof=false;
        while(!eof){// modificado (!figuras.EOF) --->ERROR ANTERIOR
            getline(FigurasArchivo,lector,' ');

            if((int)lector.find("circulo")!= -1){
                pos=lector.find("circulo");
                lector=lector.substr(pos);
            }
            if(lector==figura){
                eof=true;
            }
            strcpy(figura,lector.c_str());
            if(strcmp(figura,"circulo")==0){
                circulo=new CIRCULO;
                constructor(*circulo);
                setNombre(*circulo,figura);
                getline(FigurasArchivo,lector,' ');
                strcpy(figura,lector.c_str());
                setColor(*circulo,figura);

                getline(FigurasArchivo,lector,'\n');  //; para cilindro
                strcpy(datosNumericos,lector.c_str());

                int cantidadDatosNumericos = strlen(datosNumericos);

                for(int i=0; i < cantidadDatosNumericos; i++){
                if(datosNumericos[i] == ','){
                    datosNumericos[i] = '.';
                }
                }

                 valor=atof(datosNumericos); // para pasar el valor a int.

                setRadio(*circulo,valor);

                adicionarFinal(listaFiguras,circulo); //ESTO LOS GUARDA A LA LISTA FIGURAS(CIRCULO)
            }
        }
    }

///////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////// CUBOS //////////////////////////////////////////////////////
void lecturaCubo(Lista &listaFiguras){
        Cubo* cubo;
        ifstream FigurasArchivo;
        FigurasArchivo.open("FigurasEjemplo.txt",ios::in);
        string lector;
        char datosNumericos [10]="";  //------->AGREGADO
        char figura[50]="";
        float valor; int pos;
        bool eof=false;
        while(!eof){// modificado (!figuras.EOF) --->ERROR ANTERIOR
            getline(FigurasArchivo,lector,' ');

            if((int)lector.find("cubo")!= -1){
                pos=lector.find("cubo");
                lector=lector.substr(pos);
            }
            if(lector==figura){
                eof=true;
            }
            strcpy(figura,lector.c_str());
            if(strcmp(figura,"cubo")==0){
                Cubo *cubo = new Cubo;
                constructor(*cubo);
                setNombre(*cubo,figura);
                getline(FigurasArchivo,lector,' ');
                strcpy(figura,lector.c_str());
                setColor(*cubo,figura);

                getline(FigurasArchivo,lector,'\n');
                strcpy(datosNumericos,lector.c_str());


                int cantidadDatosNumericos = strlen(datosNumericos);

                for(int i=0; i < cantidadDatosNumericos; i++){
                if(datosNumericos[i] == ','){
                    datosNumericos[i] = '.';
                }
                }

                 valor=atof(datosNumericos); // para pasar el valor a int.

                 setLado(*cubo,valor);

                adicionarFinal(listaFiguras,cubo); //ESTO LOS GUARDA A LA LISTA FIGURAS(CIRCULO)


            }
        }
    }

///////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////  TRIANGULOS  ///////////////////////////////////////////
    void lecturaTriangulo(Lista &listaFiguras){ // SOLUCIONAR . A COMA Y LO DE MAYUSCULA
        // SOLUCIONAR . A COMA Y LO DE MAYUSCULA
        Triangulo* triangulo;
        ifstream FigurasArchivo;
        FigurasArchivo.open("FigurasEjemplo.txt",ios::in);
        string lector;
        stringstream ss;
        SetConsoleOutputCP(65001);
        char figura[50]="";
        char datosNumericos [10]="";
        char datosNumerico [10]="";  //------->AGREGADO
        float valor; int pos;
        float valor2;
        bool eof=false;
        while(!eof){// modificado (!figuras.EOF) --->ERROR ANTERIOR
            getline(FigurasArchivo,lector,' ');

            if((int)lector.find("triangulo")!= -1){
                pos=lector.find("triangulo");
                lector=lector.substr(pos);
            }
            if(lector==figura){
                eof=true;
            }
            strcpy(figura,lector.c_str());
            if(strcmp(figura,"triangulo")==0){
                triangulo=new Triangulo;
                constructor(*triangulo);
                setNombre(*triangulo,figura);
                getline(FigurasArchivo,lector,' ');
                strcpy(figura,lector.c_str());
                setColor(*triangulo,figura);

                getline(FigurasArchivo,lector,';');
                strcpy(datosNumericos,lector.c_str());
                valor=atof(datosNumericos);
                setAltura(*triangulo,valor);
                //ss.str(lector);
                //ss>>valor;  //; para cilindro

                getline(FigurasArchivo,lector,'\n');
                strcpy(datosNumerico,lector.c_str());
                //ss.str(lector);
                //ss>>valor2;  //; para cilindro

                //ss.clear();
                //setBase(*triangulo,valor);
                //setAltura(*triangulo,valor2);

                int cantidadDatosNumericos = strlen(datosNumerico);

                for(int i=0; i < cantidadDatosNumericos; i++){
                if(datosNumerico[i] == ','){
                    datosNumerico[i] = '.';
                }
                }

                 valor2=atof(datosNumerico); // para pasar el valor a int.

                setBase(*triangulo,valor2);

                adicionarFinal(listaFiguras,triangulo); //ESTO LOS GUARDA A LA LISTA FIGURAS(CIRCULO)
            }
        }
    }

/////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////  RECTANGULOS    ////////////////////////////////////////////////
void lecturaRectangulo(Lista &listaFiguras){
        Rectangulo* rectangulo;
        ifstream FigurasArchivo;
        FigurasArchivo.open("FigurasEjemplo.txt",ios::in);
        string lector;
        stringstream ss;
        SetConsoleOutputCP(65001);
        char datosNumericos [10]="";  //------->AGREGADO
        char figura[50]="";
        char datosNumerico [10]="";  //------->AGREGADO
        float valor; int pos;
        float valor2;
        bool eof=false;
        while(!eof){// modificado (!figuras.EOF) --->ERROR ANTERIOR
            getline(FigurasArchivo,lector,' ');

            if((int)lector.find("rectangulo")!= -1){
                pos=lector.find("rectangulo");
                lector=lector.substr(pos);
            }
            if(lector==figura){
                eof=true;
            }
            strcpy(figura,lector.c_str());
            if(strcmp(figura,"rectangulo")==0){
                rectangulo = new Rectangulo;
                constructor(*rectangulo);
                setNombre(*rectangulo,figura);
                getline(FigurasArchivo,lector,' ');
                strcpy(figura,lector.c_str());
                setColor(*rectangulo,figura);


                getline(FigurasArchivo,lector,'\n');
                strcpy(datosNumericos,lector.c_str());


            int cantidadDatosNumericos = strlen(datosNumericos);

            for(int i=0; i < cantidadDatosNumericos; i++){
                if(datosNumericos[i] == ','){
                    datosNumericos[i] = '.';
                }
            }

                 char *separador = strtok(datosNumericos, "; ");

                int aux = 0;

                while (separador != NULL){
                    if(aux == 0){
                        valor = atof(separador);
                        separador = strtok(NULL, "; ");
                        aux = aux + 1;
                    }
                    if(aux == 1){
                        valor2 = atof(separador);
                        separador = strtok(NULL, "; ");

                        //cout<<"valor2 es "<<valor2<<"\n";
                    }
                }
                setAltura(*rectangulo,valor);
                setBase(*rectangulo,valor2);
                adicionarFinal(listaFiguras,rectangulo); //ESTO LOS GUARDA A LA LISTA FIGURAS(CIRCULO)

                /////////////
/*

                getline(FigurasArchivo,lector,';');
                strcpy(datosNumericos,lector.c_str());
                valor=atof(datosNumericos);
                setAltura(*rectangulo,valor);

                getline(FigurasArchivo,lector,'\n');
                strcpy(datosNumericos,lector.c_str());


                int cantidadDatosNumericos = strlen(datosNumericos);

                for(int i=0; i < cantidadDatosNumericos; i++){
                if(datosNumericos[i] == ','){
                    datosNumericos[i] = '.';
                }
                }

                 valor2=atof(datosNumericos); // para pasar el valor a int.

                 setBase(*rectangulo,valor);

                adicionarFinal(listaFiguras,rectangulo); //ESTO LOS GUARDA A LA LISTA FIGURAS(CIRCULO)


            }

            */
          }
       }
    }

/////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////  CILINDROS ////////////////////////////////////////////////////
void lecturaCilindro(Lista &listaFiguras){ // SOLUCIONAR . A COMA Y LO DE MAYUSCULA
        // SOLUCIONAR . A COMA Y LO DE MAYUSCULA
        CILINDRO* cili;
        ifstream FigurasArchivo;
        FigurasArchivo.open("FigurasEjemplo.txt",ios::in);
        string lector;
        stringstream ss;
        SetConsoleOutputCP(65001);
        char figura[50]="";
        char datosNumericos [10]="";
        char datosNumerico [10]="";  //------->AGREGADO
        float valor; int pos;
        float valor2;
        bool eof=false;
        while(!eof){// modificado (!figuras.EOF) --->ERROR ANTERIOR
            getline(FigurasArchivo,lector,' ');

            if((int)lector.find("cilindro")!= -1){
                pos=lector.find("cilindro");
                lector=lector.substr(pos);
            }
            if(lector==figura){
                eof=true;
            }
            strcpy(figura,lector.c_str());
            if(strcmp(figura,"cilindro")==0){
                cili=new CILINDRO;
                constructor(*cili);
                setNombre(*cili,figura);
                getline(FigurasArchivo,lector,' ');
                strcpy(figura,lector.c_str());
                setColor(*cili,figura);

                getline(FigurasArchivo,lector,';');
                strcpy(datosNumericos,lector.c_str());
                valor=atof(datosNumericos);

                //ss.str(lector);
                //ss>>valor;  //; para cilindro
                getline(FigurasArchivo,lector,'\n');
                strcpy(datosNumerico,lector.c_str());
                valor2=atof(datosNumerico);
                setAltura(*cili,valor2);

                int cantidadDatosNumericos = strlen(datosNumericos);

                    for(int i=0; i < cantidadDatosNumericos; i++){
                        if(datosNumericos[i] == ','){
                            datosNumericos[i] = '.';
                        }
                    }

                valor=atof(datosNumericos); // para pasar el valor a int.
                setRadio(*cili,valor);

                //ss.str(lector);
                //ss>>valor2;  //; para cilindro

                //ss.clear();
                //setBase(*triangulo,valor);
                //setAltura(*triangulo,valor2);

                // para pasar el valor a int.
                adicionarFinal(listaFiguras,cili); //ESTO LOS GUARDA A LA LISTA FIGURAS(CIRCULO)
            }
        }
    }
//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////  CIRCULOS   //////////////////////////////////////////////////
void recorrerListaCirculos(Lista& listaFigurasCubos){    ////
    PtrNodoLista cursor=primero(listaFigurasCubos);  //se posiciona en 1er elemento de la lista
    while(cursor!=fin()){ //hasta que no sea EOF
        cout<<getNombre(*(CIRCULO*)cursor->ptrDato)<<" "; //* ACCEDE Al contenido de la POSICION DE MEMORIa de CIRCULO*---- (CIRCULO*) con esto entiende que es CIRCULO
        cout<<getColor(*(CIRCULO*)cursor->ptrDato)<<" ";
        cout<<getRadio(*(CIRCULO*)cursor->ptrDato)<<" ";
       // cout<<area:<<getArea // Para hacer el calculo individual de cada area
        cout<<"AREA: "<<getArea(*(CIRCULO*)cursor->ptrDato)<<"\n";
        cursor=siguiente(listaFigurasCubos,cursor);
    }
}

void recorrerListaCirculos1(Lista& listaFigurasCubos){    ////
    PtrNodoLista cursor=primero(listaFigurasCubos);  //se posiciona en 1er elemento de la lista
    while(cursor!=fin()){ //hasta que no sea EOF
        cout<<getNombre(*(CIRCULO*)cursor->ptrDato)<<" "; //* ACCEDE Al contenido de la POSICION DE MEMORIa de CIRCULO*---- (CIRCULO*) con esto entiende que es CIRCULO
        cout<<getColor(*(CIRCULO*)cursor->ptrDato)<<" ";
        cout<<getRadio(*(CIRCULO*)cursor->ptrDato)<<"\n";
       // cout<<area:<<getArea // Para hacer el calculo individual de cada area
       // cout<<"AREA: "<<getArea(*(CIRCULO*)cursor->ptrDato)<<"\n";
        cursor=siguiente(listaFigurasCubos,cursor);
    }
}


//ACA EVALUAR EL getArea ACCEDO AL ATRIBUTO DESDE LA LISTAY ESTE METODO ORDENA LA LISTA
// EL METODO ORDENAR DE TDA LISTA LLAMA A ESTE METODO
//ACA ORDENA POR RADIO
//DEBERIA CAMBIAR RADIO POR AREA PARA VER SI REALIZA EL ORDENAMIENTO
ResultadoComparacion compararCirculos(PtrDato ptrDato1,PtrDato ptrDato2){
   if(getArea(*(CIRCULO*)ptrDato1) > getArea(*(CIRCULO*)ptrDato2)){ //el cursor hace referencia a un dato a travez de un puntero
        return MAYOR;
    }else if(getArea(*(CIRCULO*)ptrDato1) < getArea(*(CIRCULO*)ptrDato2)){
        return MENOR;
    }else{
        return IGUAL;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////  CUBOS   //////////////////////////////////////////////////
void recorrerListaCubos(Lista& listaFiguras){    ////
    PtrNodoLista cursor=primero(listaFiguras);  //se posiciona en 1er elemento de la lista
    while(cursor!=fin()){ //hasta que no sea EOF
        cout<<getNombre(*(Cubo*)cursor->ptrDato)<<" "; //* ACCEDE Al contenido de la POSICION DE MEMORIa de CIRCULO*---- (CIRCULO*) con esto entiende que es CIRCULO
        cout<<getColor(*(Cubo*)cursor->ptrDato)<<" ";
        cout<<getLado(*(Cubo*)cursor->ptrDato)<<" ";
        cout<<"AREA: "<<getArea(*(Cubo*)cursor->ptrDato)<<"\n";
        cursor=siguiente(listaFiguras,cursor);
    }
}



void recorrerListaCubos1(Lista& listaFiguras){    ////
    PtrNodoLista cursor=primero(listaFiguras);  //se posiciona en 1er elemento de la lista
    while(cursor!=fin()){ //hasta que no sea EOF
        cout<<getNombre(*(Cubo*)cursor->ptrDato)<<" "; //* ACCEDE Al contenido de la POSICION DE MEMORIa de CIRCULO*---- (CIRCULO*) con esto entiende que es CIRCULO
        cout<<getColor(*(Cubo*)cursor->ptrDato)<<" ";
        cout<<getLado(*(Cubo*)cursor->ptrDato)<<"\n";
        //cout<<"AREA: "<<getArea(*(Cubo*)cursor->ptrDato)<<"\n";
        cursor=siguiente(listaFiguras,cursor);
    }
}

ResultadoComparacion compararCubos(PtrDato ptrDato1,PtrDato ptrDato2){
    if(getArea(*(Cubo*)ptrDato1) > getArea(*(Cubo*)ptrDato2)){ //el cursor hace referencia a un dato a travez de un puntero
        return MAYOR;
    }else if(getArea(*(Cubo*)ptrDato1) < getArea(*(Cubo*)ptrDato2)){
        return MENOR;
    }else{
        return IGUAL;
    }
}

  /*  if(getArea(*(CILINDRO*)ptrDato1) > getArea(*(CILINDRO*)ptrDato2)){ //el cursor hace referencia a un dato a travez de un puntero
        return MAYOR;
    }else if(getArea(*(CILINDRO*)ptrDato1) < getArea(*(CILINDRO*)ptrDato2)){
        return MENOR;
    }else{
        return IGUAL;
    }
*/



///////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////TRIANGULOS///////////////////////////////////////////////////
void recorrerListaTriangulos(Lista& listaFigurasTriangulo){    ////
    PtrNodoLista cursor=primero(listaFigurasTriangulo);  //se posiciona en 1er elemento de la lista
    while(cursor!=fin()){ //hasta que no sea EOF
        cout<<getNombre(*(Triangulo*)cursor->ptrDato)<<" "; //* ACCEDE Al contenido de la POSICION DE MEMORIa de CIRCULO*---- (CIRCULO*) con esto entiende que es CIRCULO
        cout<<getColor(*(Triangulo*)cursor->ptrDato)<<" ";
        cout<<getAltura(*(Triangulo*)cursor->ptrDato)<<" ";
        cout<<getBase(*(Triangulo*)cursor->ptrDato)<<" ";
        cout<<"AREA: "<<getArea(*(Triangulo*)cursor->ptrDato)<<"\n";
        cursor=siguiente(listaFigurasTriangulo,cursor);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////TRIANGULOS///////////////////////////////////////////////////
void recorrerListaTriangulos1(Lista& listaFigurasTriangulo){    ////
    PtrNodoLista cursor=primero(listaFigurasTriangulo);  //se posiciona en 1er elemento de la lista
    while(cursor!=fin()){ //hasta que no sea EOF
        cout<<getNombre(*(Triangulo*)cursor->ptrDato)<<" "; //* ACCEDE Al contenido de la POSICION DE MEMORIa de CIRCULO*---- (CIRCULO*) con esto entiende que es CIRCULO
        cout<<getColor(*(Triangulo*)cursor->ptrDato)<<" ";
        cout<<getAltura(*(Triangulo*)cursor->ptrDato)<<" ";
        cout<<getBase(*(Triangulo*)cursor->ptrDato)<<"\n";
       // cout<<"AREA: "<<getArea(*(Triangulo*)cursor->ptrDato)<<"\n";
        cursor=siguiente(listaFigurasTriangulo,cursor);
    }
}
//POSIBILIDAD HACER OTRO METODO CON ESTOS METODOS
//MODELO DE METODO USO PARA ORDENAMIENTO PARA ORDENAR POR AREA
ResultadoComparacion compararTriangulos(PtrDato ptrDato1,PtrDato ptrDato2){
    if(getArea(*(Triangulo*)ptrDato1) > getArea(*(Triangulo*)ptrDato2)){ //el cursor hace referencia a un dato a travez de un puntero
        return MAYOR;
    }else if(getArea(*(Triangulo*)ptrDato1) < getArea(*(Triangulo*)ptrDato2)){
        return MENOR;
    }else{
        return IGUAL;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////RECTANGULOS///////////////////////////////////////////////////
void recorrerListaRectangulos(Lista& listaFiguras){    ////
    PtrNodoLista cursor=primero(listaFiguras);  //se posiciona en 1er elemento de la lista
    while(cursor!=fin()){ //hasta que no sea EOF
        cout<<getNombre(*(Rectangulo*)cursor->ptrDato)<<" "; //* ACCEDE Al contenido de la POSICION DE MEMORIa de CIRCULO*---- (CIRCULO*) con esto entiende que es CIRCULO
        cout<<getColor(*(Rectangulo*)cursor->ptrDato)<<" ";
        cout<<getAltura(*(Rectangulo*)cursor->ptrDato)<<" ";
        cout<<getBase(*(Rectangulo*)cursor->ptrDato)<<" ";
        cout<<"AREA: "<<getArea(*(Rectangulo*)cursor->ptrDato)<<"\n";
        cursor=siguiente(listaFiguras,cursor);
    }
}

void recorrerListaRectangulos1(Lista& listaFiguras){    ////
    PtrNodoLista cursor=primero(listaFiguras);  //se posiciona en 1er elemento de la lista
    while(cursor!=fin()){ //hasta que no sea EOF
        cout<<getNombre(*(Rectangulo*)cursor->ptrDato)<<" "; //* ACCEDE Al contenido de la POSICION DE MEMORIa de CIRCULO*---- (CIRCULO*) con esto entiende que es CIRCULO
        cout<<getColor(*(Rectangulo*)cursor->ptrDato)<<" ";
        cout<<getAltura(*(Rectangulo*)cursor->ptrDato)<<" ";
        cout<<getBase(*(Rectangulo*)cursor->ptrDato)<<"\n";
        //cout<<"AREA: "<<getArea(*(Rectangulo*)cursor->ptrDato)<<"\n";
        cursor=siguiente(listaFiguras,cursor);
    }
}



ResultadoComparacion compararRectangulos(PtrDato ptrDato1,PtrDato ptrDato2){
    if(getArea(*(Rectangulo*)ptrDato1) > getArea(*(Rectangulo*)ptrDato2)){ //el cursor hace referencia a un dato a travez de un puntero
        return MAYOR;
    }else if(getArea(*(Rectangulo*)ptrDato1) < getArea(*(Rectangulo*)ptrDato2)){
        return MENOR;
    }else{
        return IGUAL;
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// CILINDROS /////////////////////////////////////////
void recorrerListaCilindros(Lista& listaFigurasCilindro){    ////
    PtrNodoLista cursor=primero(listaFigurasCilindro);  //se posiciona en 1er elemento de la lista
    while(cursor!=fin()){ //hasta que no sea EOF
        cout<<getNombre(*(CILINDRO*)cursor->ptrDato)<<" "; //* ACCEDE Al contenido de la POSICION DE MEMORIa de CIRCULO*---- (CIRCULO*) con esto entiende que es CIRCULO
        cout<<getColor(*(CILINDRO*)cursor->ptrDato)<<" ";
        cout<<getRadio(*(CILINDRO*)cursor->ptrDato)<<" ";
        cout<<getAltura(*(CILINDRO*)cursor->ptrDato)<<" ";
        cout<<"AREA: "<<getArea(*(CILINDRO*)cursor->ptrDato)<<"\n";
        cursor=siguiente(listaFigurasCilindro,cursor);
    }
}


void recorrerListaCilindros1(Lista& listaFigurasCilindro){    ////
    PtrNodoLista cursor=primero(listaFigurasCilindro);  //se posiciona en 1er elemento de la lista
    while(cursor!=fin()){ //hasta que no sea EOF
        cout<<getNombre(*(CILINDRO*)cursor->ptrDato)<<" "; //* ACCEDE Al contenido de la POSICION DE MEMORIa de CIRCULO*---- (CIRCULO*) con esto entiende que es CIRCULO
        cout<<getColor(*(CILINDRO*)cursor->ptrDato)<<" ";
        cout<<getRadio(*(CILINDRO*)cursor->ptrDato)<<" ";
        cout<<getAltura(*(CILINDRO*)cursor->ptrDato)<<"\n";
        //cout<<"AREA: "<<getArea(*(CILINDRO*)cursor->ptrDato)<<"\n";
        cursor=siguiente(listaFigurasCilindro,cursor);
    }
}

//////////////////////////////////////   ORDENAMIENTO CILINDROS   ////////////////////////////////////////////
ResultadoComparacion compararCilindros(PtrDato ptrDato1,PtrDato ptrDato2){
    if(getArea(*(CILINDRO*)ptrDato1) > getArea(*(CILINDRO*)ptrDato2)){ //el cursor hace referencia a un dato a travez de un puntero
        return MAYOR;
    }else if(getArea(*(CILINDRO*)ptrDato1) < getArea(*(CILINDRO*)ptrDato2)){
        return MENOR;
    }else{
        return IGUAL;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////  LECTURA TOTAL  ////////////////////////////////////////////////////////////////////////////////////////////////////

void lecturaArchivo(){
    SetConsoleOutputCP(65001);
    std::ifstream file("FigurasEjemplo.txt");
    std::string str;
    while (std::getline(file, str)) {
        std::cout << str << "\n";
    }
}























