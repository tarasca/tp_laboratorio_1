#include <stdio.h>
#include <stdlib.h>
#include "bass.h"

int menu()
{
    int opcion;

        system("cls");
        printf("  *** Menu de Opciones ***\n\n");
        printf("1. Ingresar Kilometros:\n");
        printf("2. Ingresar Precio de Vuelos: \n");
        printf("3. Calcular todos los costos:\n");
        printf("4. Informar Resultados \n");
        printf("5. Carga forzada de datos\n");
        printf("6. Salir\n\n");
        printf("Ingrese opcion: ");
        scanf("%d", &opcion);

        system("cls");

        return opcion;
}

void calculoPrecios (int precioA, int precioL,int kmIngresado)
{
   float precioDebA;
   float precioDebL;
   float precioCreA;
   float precioCreL;
   float btcA;
   float btcL;
   float precioUniA;
   float precioUniL;
   float diferenciaPrecio;

   precioDebA=precioA-(precioA*0.1);
   precioDebL=precioL-(precioL*0.1);
   precioCreA=precioA+(precioA*0.25);
   precioCreL=precioL+(precioL*0.25);
   btcA=precioA/4606954.55;
   btcL=precioL/4606954.55;
   precioUniA=kmIngresado/precioA;
   precioUniL=kmIngresado/precioL;
   diferenciaPrecio=precioA-precioL;

    printf("KMs ingresados: %d\n\nPrecio Aerolineas: %d\na) Precio con tarjeta de credito: %.2f\nb) Precio con tarjeta de debito: %.2f\nc) Precio pagado con bitcoin: %.2f\nd) mostrar precio unitario: %.2f\n\nPrecio Latam: %d\na) Precio con tarjeta de credito: %.2f\nb) Precio con tarjeta de debito: %.2f\nc) Precio pagado con bitcoin: %.2f\nd) mostrar precio unitario: %.2f\n\nLa diferencia de precio es: %.2f",kmIngresado,precioA,precioCreA,precioDebA,btcA,precioUniA,precioL,precioCreL,precioDebL,btcL,precioUniL,diferenciaPrecio);

}

void cargaForzada ()
{
    float precioA=162965;
    float precioL=159339;
    float kmIngresado=7090;

   float precioDebA;
   float precioDebL;
   float precioCreA;
   float precioCreL;
   float btcA;
   float btcL;
   float precioUniA;
   float precioUniL;
   float diferenciaPrecio;

   precioDebA=precioA-(precioA*0.1);
   precioDebL=precioL-(precioL*0.1);
   precioCreA=precioA+(precioA*0.25);
   precioCreL=precioL+(precioL*0.25);
   btcA=precioA/4606954.55;
   btcL=precioL/4606954.55;
   precioUniA=kmIngresado/precioA;
   precioUniL=kmIngresado/precioL;
   diferenciaPrecio=precioA-precioL;

    printf("KMs ingresados: %.2f\n\nPrecio Aerolineas: %.2f\na) Precio con tarjeta de credito: %.2f\nb) Precio con tarjeta de debito: %.2f\nc) Precio pagado con bitcoin: %.2f\nd) mostrar precio unitario: %.2f\n\nPrecio Latam: %.2f\na) Precio con tarjeta de credito: %.2f\nb) Precio con tarjeta de debito: %.2f\nc) Precio pagado con bitcoin: %.2f\nd) mostrar precio unitario: %.2f\n\nLa diferencia de precio es: %.2f",kmIngresado,precioA,precioCreA,precioDebA,btcA,precioUniA,precioL,precioCreL,precioDebL,btcL,precioUniL,diferenciaPrecio);

}

