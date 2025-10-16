#include <stdio.h>
#include <stdlib.h>
// Usar rutas relativas al directorio headers para que el indexador de VS Code
// (cpptools) y el compilador encuentren los archivos de cabecera. */
#include "../headers/Pasajeros.h"
#include "../headers/pasajes.h"
#include "../headers/Fecha.h"

void RegistrarPasaje(struct Pasaje *pasajes, int *cantidadpasajes) {
    if (*cantidadpasajes >= BUTACA_MAX) {
        printf("No hay más butacas disponibles.\n");
        return;
    }
    struct Pasaje nuevoPasaje;

    /* índice del nuevo pasaje en el array */
    int idx = *cantidadpasajes;

    /* Construir formatos seguros usando las macros de tamaño definidas en headers */
    char fmt_destino[16];
    char fmt_fecha[16];
    char fmt_horario[16];
    char fmt_costo[16];
    char fmt_idpas[16];
    snprintf(fmt_destino, sizeof(fmt_destino), "%%%ds", DESTINO_MAX - 1);
    snprintf(fmt_fecha, sizeof(fmt_fecha), "%%%ds", Fecha_MAX - 1);
    snprintf(fmt_horario, sizeof(fmt_horario), "%%%ds", HORARIO_MAX - 1);
    snprintf(fmt_costo, sizeof(fmt_costo), "%%%ds", COSTO_MAX - 1);
    snprintf(fmt_idpas, sizeof(fmt_idpas), "%%%ds", IDPASAJERO_MAX - 1);

    printf("Ingrese el destino: ");
    if (scanf(fmt_destino, nuevoPasaje.destino) != 1) return;

    printf("Ingrese la fecha (DD/MM/AAAA): ");
    if (scanf(fmt_fecha, nuevoPasaje.fecha) != 1) return;

    printf("Ingrese el horario (HH:MM): ");
    if (scanf(fmt_horario, nuevoPasaje.horario) != 1) return;

    printf("Ingrese el costo: ");
    if (scanf(fmt_costo, nuevoPasaje.costo) != 1) return;

    printf("Ingrese la cantidad de pasajeros: ");
    if (scanf("%d", &nuevoPasaje.cantpasajero[idx]) != 1) return;

    /* Validar cantidad de pasajeros por pasaje */
    if (nuevoPasaje.cantpasajero[idx] < 0 || nuevoPasaje.cantpasajero[idx] > PASAJERO_MAX) {
        printf("Cantidad de pasajeros inválida. Máximo permitido: %d\n", PASAJERO_MAX);
        return;
    }

    for (int i = 0; i < nuevoPasaje.cantpasajero[idx]; i++) {
        printf("Ingrese el ID del pasajero %d: ", i + 1);
        if (scanf(fmt_idpas, nuevoPasaje.id_pasajero) != 1) return;
        /* almacenar el id de la persona en la posición i del pasaje */
        nuevoPasaje.idpersona[i] = atoi(nuevoPasaje.id_pasajero);
    }

    nuevoPasaje.butaca[idx] = idx + 1;
    nuevoPasaje.id[idx][0] = idx + 1;
    nuevoPasaje.id[idx][1] = nuevoPasaje.butaca[idx];

    pasajes[idx] = nuevoPasaje;
    (*cantidadpasajes)++;

    printf("Pasaje emitido con éxito. Butaca asignada: %d\n", nuevoPasaje.butaca[idx]);
}
