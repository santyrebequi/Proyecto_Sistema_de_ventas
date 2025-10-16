#include <stdio.h>
#include <stdlib.h>
// Usar rutas relativas al directorio headers para que el indexador de VS Code
// (cpptools) y el compilador encuentren los archivos de cabecera. */
#include "../headers/Pasajeros.h"
#include "../headers/Horas.h"
#include "../headers/Fecha.h"

void RegistrarPasajero(struct Pasajero *pasajeros )
{
    if (pasajeros == IDPASAJERO_MAX) {
        printf("No se pueden registrar más pasajeros. Límite alcanzado.\n");
        return;
    }
    struct Pasajero nuevoPasajero;

    printf("Ingrese el nombre del pasajero: ");
    scanf("%s", nuevoPasajero.nombre);
    printf("Ingrese el apellido del pasajero: ");
    scanf("%s", nuevoPasajero.apellido);
    printf("Ingrese el DNI del pasajero: ");
    scanf("%s", nuevoPasajero.dni);
    printf("Ingrese el email del pasajero: ");
    scanf("%s", nuevoPasajero.email);
    printf("Ingrese el teléfono del pasajero: ");
    scanf("%s", nuevoPasajero.telefono);
    printf("Ingrese la dirección del pasajero: ");
    scanf("%s", nuevoPasajero.direccion);
    pasajeros[IDPASAJERO_MAX] = nuevoPasajero;
    printf("Pasajero registrado con éxito.\n");
}
