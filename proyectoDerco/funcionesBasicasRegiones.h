//
// Created by gerar on 5/31/2023.
//
#include "structs.h"
#include "stdio.h"
#define cantRegiones 16

#ifndef PROYECTODERCO_FUNCIONESBASICASREGIONES_H
#define PROYECTODERCO_FUNCIONESBASICASREGIONES_H

/*
 mostrarRegiones recibe el arreglo de regiones, esta función recorre e imprime todas las regiones ubicadas en el arreglo
 de forma enumerada.
 */

void mostrarRegiones(struct Regiones **regiones){
    int i;
    for (i = 0;  i<cantRegiones ; i++) {
        printf("%d. Nombre: %s\n",i+1,regiones[i]->Nombre);
    }
}

/*
 crearRegiones sirve para crear y agregar las regiones en el arreglo del sistema Derco. Se crea el arreglo, se asigna
 memoria al arreglo, y se pregunta por los datos de la region (nombre de la region y asignación de la lista de sucursales)
 y se retorna el arreglo.
 */

struct Regiones **crearRegiones(){
    struct Regiones**regiones=NULL;
    int i;
    char buffer[500];
    regiones=(struct Regiones **) malloc(cantRegiones * sizeof(struct Regiones *));
    for ( i = 0; i <cantRegiones ; ++i) {
        regiones[i]=(struct Regiones *) malloc(sizeof(struct Regiones));
        regiones[i]->sigla=i+1;
        printf("\nIngrese el nombre de la %d region: ",i+1);
        scanf("%s[^\n] ",buffer);
        regiones[i]->Nombre=(char *) malloc((strlen(buffer)+1) * sizeof(char));
        strcpy(regiones[i]->Nombre,buffer);
        regiones[i]->sucursales=NULL;
    }
    return regiones;
}

#endif //PROYECTODERCO_FUNCIONESBASICASREGIONES_H
