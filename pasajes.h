#ifndef PASAJES_H
#define PASAJES_H

#define ID_MAX 2 
#define BUTACA_MAX 40
#define DESTINO_MAX 50
#define Fecha_MAX 11
#define HORARIO_MAX 5
#define COSTO_MAX 10
#define PASAJERO_MAX 40


struct pasajes
{
    int id[BUTACA_MAX][ID_MAX];
    int butaca[BUTACA_MAX];
    char destino[DESTINO_MAX];
    char fecha[Fecha_MAX];
    char horario[HORARIO_MAX];
    char costo[COSTO_MAX];
    int cantpasajero[PASAJERO_MAX];
    //llamar al id persona
};
#endif // PASAJES_H