#ifndef PASAJEROS_H
#define PASAJEROS_H

#define NOMBRE_MAX 50
#define APELLIDO_MAX 50
#define EMAIL_MAX 50
#define TELEFONO_MAX 15 // Un tamaño más realista para teléfonos
#define DIR_MAX 100     // Las direcciones pueden ser largas

struct Pasajero { // Nombre en singular y PascalCase por convención
    int id;
    char nombre[NOMBRE_MAX];
    char apellido[APELLIDO_MAX];
    char email[EMAIL_MAX];
    char telefono[TELEFONO_MAX];
    char direccion[DIR_MAX];
};
#endif // PASAJEROS_H
