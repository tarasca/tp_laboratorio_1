#include <stdio.h>
#include <stdlib.h>
#include "bass.h"

int menu();
void calculoPrecios (int precioA, int precioL,int kmIngresado);
void cargaForzada();
int main()
{
    char salir='n';
    int flagUno=1;
    int flagDos=1;
    int flagTres=1;
    int kmIngresado;
    int precioA;
    int precioL;

    do{
        switch(menu())
        {
        case 1:
            printf("ingrese cuantos kilometros\n");
            scanf("%d", &kmIngresado);
            flagUno=0;
            system("cls");
            break;
        case 2:
            if(flagUno==0)
            {
                printf("ingrese el precio de aerolineas\n");
                scanf("%d", &precioA);
                printf("ingrese el precio de latam\n");
                scanf("%d", &precioL);
                flagDos=0;
            }
            system("cls");
            break;
        case 3:
            if(flagDos==0)
            {
                printf("calculando...\n\n");

                  flagTres=0;
            }
            system("cls");
            break;
        case 4:
            if(flagTres==0)
            {
               void calculoPrecios(int,int,int);
            }
            break;
        case 5:

            break;
        case 6:
            printf("**FIN DEL PROGRAMA**\n\n");
            scanf("%c", &salir);
            break;
        default:
            printf("error, ingrese de vuelta\n");
            scanf("%d", menu());
            break;
        }
        system("pause");
    }
    while(salir!='s');
    return 0;
}


