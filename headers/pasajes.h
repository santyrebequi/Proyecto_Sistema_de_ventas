#ifndef PASAJES_H
#define PASAJES_H

#define BUTACA_MAX 40
#define DESTINO_MAX 50
#define Fecha_MAX 11
#define HORARIO_MAX 5
#define COSTO_MAX 10
#define PASAJERO_MAX 40

#include "Pasajeros.h"
struct Pasaje
{
    int id[BUTACA_MAX][IDPASAJERO_MAX]; // ID del pasaje y número de butaca
    int butaca[BUTACA_MAX];     // número de butaca asignada
    char destino[DESTINO_MAX];
    char fecha[Fecha_MAX];
    char horario[HORARIO_MAX];
    char costo[COSTO_MAX];
    int cantpasajero; // cantidad de pasajeros en este pasaje
    int idpersona[BUTACA_MAX]; // si querés guardar el DNI como entero
    char id_pasajeros[BUTACA_MAX][IDPASAJERO_MAX]; // IDs de los pasajeros
};
void RegistrarPasaje(struct Pasaje *pasajes, int *cantidadpasajes);
#endif // PASAJES_H