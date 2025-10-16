#include <stdio.h>
#include <stdlib.h>
#include "PASAJEROS.h"
#include "pasajes.h"
#include "fecha.h"

void RegistrarPasaje(struct Pasaje *pasajes, int *cantidadpasajes) {
    if (*cantidadpasajes >= BUTACA_MAX) {
        printf("No hay más butacas disponibles.\n");
        return;
    }

    struct Pasaje nuevoPasaje;

    printf("Ingrese el destino: ");
    scanf("%s", nuevoPasaje.destino);

    printf("Ingrese la fecha (DD/MM/AAAA): ");
    scanf("%s", nuevoPasaje.fecha);

    printf("Ingrese el horario (HH:MM): ");
    scanf("%s", nuevoPasaje.horario);

    printf("Ingrese el costo: ");
    scanf("%s", nuevoPasaje.costo);

    printf("Ingrese la cantidad de pasajeros: ");
    scanf("%d", &nuevoPasaje.cantpasajero[*cantidadpasajes]);

    for (int i = 0; i < nuevoPasaje.cantpasajero[*cantidadpasajes]; i++) {
        printf("Ingrese el ID del pasajero %d: ", i + 1);
        scanf("%s", nuevoPasaje.id_pasajero);
        nuevoPasaje.idpersona[i] = atoi(nuevoPasaje.id_pasajero);
    }

    nuevoPasaje.butaca[*cantidadpasajes] = *cantidadpasajes + 1;
    nuevoPasaje.id[*cantidadpasajes][0] = *cantidadpasajes + 1;
    nuevoPasaje.id[*cantidadpasajes][1] = nuevoPasaje.butaca[*cantidadpasajes];

    pasajes[*cantidadpasajes] = nuevoPasaje;
    (*cantidadpasajes)++;

    printf("Pasaje emitido con éxito. Butaca asignada: %d\n", nuevoPasaje.butaca[*cantidadpasajes - 1]);
}
