#include <stdio.h>
#include "modu.h"

float AplicarDescuento(float subtotal)
{
    float subtotal1;

    if (subtotal > 100 && subtotal <= 500)
    {
        printf("Se aplica un decuento del 5 porciento\n");
        subtotal1 = subtotal * 0.95;
    }
    else if (subtotal > 500 && subtotal <= 1000)
    {
        printf("Se aplica un decuento del 7 porciento\n");
        subtotal1 = subtotal * 0.93;
    }
    else if (subtotal > 1000)
    {
        printf("Se aplica un decuento del 10 porciento\n");
        subtotal1 = subtotal * 0.90;
    }
    else
    {
        printf("No se aplica descuento dado que el mónto no alcanzo el mínimo necesario\n");
    }

    return subtotal1;
}

void ImprimirFactura(float numa, float numb, float numc, float numd, float nume,
                     float prca, float prcb, float prcc, float prcd, float prce,
                     float tota, float totb, float totc, float totd, float tote,
                     char nombre[50], char cedula[20])
{
    printf("*********   FACTURA ************\n");
    printf("Nombre: %s\n", nombre);
    printf("Nro. cédula: %s\n", cedula);
    printf("Producto                Número              valor           total\n");
    if (numa != 0)
    {
        printf("Llantas                 %.2f                %.2f             %.2f\n", numa, prca, tota);
    }
    if (numb != 0)
    {
        printf("Kit Pastillas de freno  %.2f                %.2f             %.2f\n", numb, prcb, totb);
    }
    if (numc != 0)
    {
        printf("Kit de embrague         %.2f                %.2f             %.2f\n", numc, prcc, totc);
    }
    if (numd != 0)
    {
        printf("Faro                    %.2f                %.2f             %.2f\n", numd, prcd, totd);
    }
    if (nume != 0)
    {
        printf("Radiador                %.2f                %.2f             %.2f\n", nume, prce, tote);
    }
}