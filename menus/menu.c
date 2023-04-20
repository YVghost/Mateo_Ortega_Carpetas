#include <stdio.h>
#include "menu.h"

int MenuPrincipal()
{
    int opcion1;
    printf("1) Facturar Producto\n");
    printf("2) Imprimir Factura\n");
    printf("3) Salir\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcion1);

    return opcion1;
}

char MenuProducto()
{
    char opcion2;

    printf("Escoja los productos que desea facturar:\n");
    printf("a) Llantas (Precio: $150)\n");
    printf("b) Kit Pastillas de freno (Precio: $55)\n");
    printf("c) Kit de embrague (Precio: $180)\n");
    printf("d) Faro (Precio: $70)\n");
    printf("e) Radiador (Precio: $120)\n");

    scanf("%s", &opcion2);
    return opcion2;
}
