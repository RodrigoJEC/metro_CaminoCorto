/* 
 * File:   main.cpp
 * Author: Daniel Espinoza
 *
 * Created on 18 de agosto de 2018, 22:06
 */
#include "Funciones.h"


/*
 * 
 */
int main(int argc, char** argv) {

    Lista Linea1 = NULL;
    Lista Linea2 = NULL;
    Lista Linea4 = NULL;
    Lista Linea4a = NULL;
    Lista Linea5 = NULL;
    Lista Linea6 = NULL;
    std::string lineas[6] = {"1","2","4","4a","5","6"};
    for(int i=0; i < 6; i++)
    {
        std::string lista = "Linea"+lineas[i];
        if(i == 0)
            generar_lista(lineas[i],Linea1);    
        if(i==1)
            generar_lista(lineas[i],Linea2);    
        if(i==2)
            generar_lista(lineas[i],Linea4);
        if(i==3)
            generar_lista(lineas[i],Linea4a);
        if(i==4)
            generar_lista(lineas[i],Linea5);
        if(i==5)
            generar_lista(lineas[i],Linea6);
    }
    ver_lista(Linea1);
    ver_lista(Linea2);
    ver_lista(Linea4);
    ver_lista(Linea4a);
    ver_lista(Linea5);
    ver_lista(Linea6);
    
    return 0;
}

