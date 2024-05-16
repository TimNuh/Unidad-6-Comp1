#include <stdio.h>

int main() {
    int opcion;
    float precio;

    printf("Bienvenido a Comida Para Llevar a tus Clases.\n");
    printf("Por favor, seleccione un paquete disponible:\n");
    printf("1. Paquete Hamburguesa con Papas.\n");
    printf("2. Paquete Ensalada Fittnes.\n");
    printf("3. Paquete Pollo frito con pure.\n");
    printf("4. Paquete Sandwich Incomible.\n");

    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Has seleccionado el Paquete Hamburguesa con Papas.\n");
            precio = 135;
            printf("El precio del Paquete es: $%.2f\n", precio);
            break;
        case 2:
            printf("Has seleccionado el Paquete Ensalada Fittnes.\n");
            precio = 180;
            printf("El precio del Paquete es: $%.2f\n", precio);
            break;
        case 3:
            printf("Has seleccionado el Paquete Pollo Frito con Pure.\n");
            precio = 140;
            printf("El precio del Paquete es: $%.2f\n", precio);
            break;
        case 4:
            printf("Has seleccionado el Sandwich Incomible.\n");
            precio = 99;
            printf("El precio del Paquete es: $%.2f\n", precio);
            break;
        default:
            printf("Lo siento, la opcion seleccionada es invalida.\n");
            break;
    }
    printf ("Por Favor, deje el efectivo en la caja. Gracias! \n");

    return 0;
}