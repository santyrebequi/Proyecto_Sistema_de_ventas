#include <stdio.h>
#include <stdlib.h>
#include "Pasajeros.h"
#include <pasajes.h>
#include <fecha.h>

void RegistrarPasaje(struct Pasaje *pasajes, int *cantidadpasajes);
int cantidadpasajes = 0;
// Verificación de disponibilidad de butacas
if (cantidadpasajes >= BUTACA_MAX) {
    printf("No hay más butacas disponibles.\n");
    return;
} else {
    struct Pasaje nuevoPasaje;

    // Ingreso de datos del pasaje
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
        // Aquí se podría agregar lógica para verificar si el ID del pasajero existe
        nuevoPasaje.idpersona[i] = atoi(nuevoPasaje.id_pasajero); // Convertir ID a entero  
    }

    // Asignación de butaca (simplemente asignando el siguiente número disponible)
    nuevoPasaje.butaca[*cantidadpasajes] = *cantidadpasajes + 1;
    nuevoPasaje.id[*cantidadpasajes][0] = *cantidadpasajes + 1; // ID del pasaje
    nuevoPasaje.id[*cantidadpasajes][1] = nuevoPasaje.butaca[*cantidadpasajes]; // Butaca asignada

    // Guardar el nuevo pasaje en el arreglo
    pasajes[*cantidadpasajes] = nuevoPasaje;
    (*cantidadpasajes)++;

    printf("Pasaje emitido con éxito. Butaca asignada: %d\n", nuevoPasaje.butaca[*cantidadpasajes - 1]);
}