#ifndef PASJEROS.H
#define PASJEROS.H
#ifndef PASAJEROS_H
#define PASAJEROS_H

#define NOMBRE_MAX 50
#define APELLIDO_MAX 50
#define EMAIL_MAX 50
#define TELEFONO_MAX 50
#define DIR_MAX 50

struct pasajeros {
    int id;
    char nombre[NOMBRE_MAX];
    char apellido[APELLIDO_MAX];
    char email[EMAIL_MAX];
    char telefono[TELEFONO_MAX];
    char direccion[DIR_MAX];

};
#endif // PASJEROS.H
#endif // PASAJEROS_H
