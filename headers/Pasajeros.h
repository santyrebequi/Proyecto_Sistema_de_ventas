#ifndef PASAJEROS_H
#define PASAJEROS_H

// Definiciones de constantes para las variables de los pasajeros
#define NOMBRE_MAX 50
#define APELLIDO_MAX 50
#define EMAIL_MAX 50
#define TELEFONO_MAX 15
#define DIR_MAX 100
#define IDPASAJERO_MAX 5
struct Pasajero {
    char idpasajero[IDPASAJERO_MAX];
    char nombre[NOMBRE_MAX];
    char apellido[APELLIDO_MAX];
    char email[EMAIL_MAX];
    char telefono[TELEFONO_MAX];
    char direccion[DIR_MAX];
};
#endif // PASAJEROS_H
