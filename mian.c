#include <stdio.h>
#include "menus/menu.h"
#include "modulos/modu.h"

int main(int argc, char *argv[])
{
    // Definición variables
    int opcion1 = 0, continuar1 = 0;
    char opcion2;
    float numa = 0, numb = 0, numc = 0, numd = 0, nume = 0, numf = 0;
    float prca = 150, prcb = 55, prcc = 180, prcd = 70, prce = 120;
    float tota = 0, totb = 0, totc = 0, totd = 0, tote = 0;
    float subtotal = 0, total = 0;
    char nombre[50];
    char cedula[50];

    // Inicio
    printf("*********BIENVENIDO AL SISTEMA DE FACTURACIÓN***********\n");
    // Menu Principal
    do
    {
        opcion1 = MenuPrincipal();

        switch (opcion1)
        {
        case 1:

            do
            {
                opcion2 = MenuProducto();

                switch (opcion2)
                {
                case 'a' /* constant-expression */:
                    printf("Ingrese la cantidad de Llantas que desea facturar: ");
                    scanf("%f", &numa);
                    break;
                case 'b' /* constant-expression */:
                    printf("Ingrese la cantidad de Kit Pastillas de freno que desea facturar: ");
                    scanf("%f", &numb);
                    break;
                case 'c' /* constant-expression */:
                    printf("Ingrese la cantidad de Kit de embrague que desea facturar: ");
                    scanf("%f", &numc);
                    break;
                case 'd' /* constant-expression */:
                    printf("Ingrese la cantidad de Faro que desea facturar: ");
                    scanf("%f", &numd);
                    break;
                case 'e' /* constant-expression */:
                    printf("Ingrese la cantidad de Radiador que desea facturar: ");
                    scanf("%f", &nume);
                    break;

                default:
                    printf("la opción elegida no existe \n");
                    break;
                }
                printf("Desea facturar otro producto  1) Si   2) No: ");
                fflush(stdin);
                scanf("%d", &continuar1);
            } while (continuar1 == 1);
            break;
        case 2:
            printf("Ingrese su nombre: ");
            scanf("%s", &nombre);
            printf("Ingrese su número de cédula: ");
            scanf("%s", &cedula);
            tota = numa * prca;
            totb = numb * prcb;
            totc = numc * prcc;
            totd = numd * prcd;
            tote = nume * prce;

            ImprimirFactura(numa, numb, numc, numd, nume,
                            prca, prcb, prcc, prcd, prce,
                            tota, totb, totc, totd, tote,
                            nombre, cedula);

            subtotal = tota + totb + totc + totc + tote;
            printf("El subtotal sin descuento es: %.2f\n", subtotal);

            subtotal = AplicarDescuento(subtotal);

            total = subtotal * 1.12;

            printf("El subtotal es: %.2f\n", subtotal);
            printf("El total es: %.2f\n", total);
            opcion1 = 3;
            break;
        case 3:
            printf("Adios");
            opcion1 = 3;
            break;

        default:
            printf("Elija una opción correcta");
            break;
        }
    } while (opcion1 != 3);
    //

    return 0;
}