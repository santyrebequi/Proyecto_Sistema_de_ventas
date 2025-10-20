#include <stdio.h>
#include "../headers/Pasajeros.h"
#include "../headers/pasajes.h"
#include "../headers/Fecha.h"

int main(){
    printf("Sistema de Venta de Pasajes\n");

    int opcion = 0;
    struct Pasajero pasajeros[IDPASAJERO_MAX];
    int cantidadPasajeros = 0; // contador de pasajeros registrados
    struct Pasaje pasajes[10]; // arreglo simple para pasajes (ajustable)
    int cantidadPasajes = 0;
    do {

        printf("1. Registrar Pasajero\n");
        printf("2. Listar Pasajeros\n");
        printf("3. Registrar Pasaje\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");

        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                // Llamar a la función para pasajero
                RegistrarPasajero(pasajeros, &cantidadPasajeros);
                break;
            case 2:
                // Llamar a la función para listar pasajeros
                ListarPasajeros(pasajeros, cantidadPasajeros);
                break;
            case 3:
                // Llamar a la función para registrar pasaje
                RegistrarPasaje(pasajes, &cantidadPasajes);
                break;
            case 4:
                printf("Saliendo del sistema.\n");
                return 0;
            default:
                printf("Opción inválida. Intente nuevamente.\n");
        }
    } while (opcion != 4);
}