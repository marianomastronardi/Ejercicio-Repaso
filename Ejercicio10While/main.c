#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Al presionar el botón pedir números hasta que el usuario quiera, mostrar:
1-Suma de los negativos.
2-Suma de los positivos.
3-Cantidad de positivos.
4-Cantidad de negativos.
5-Cantidad de ceros.
6-Cantidad de números pares.
7-Promedio de positivos.
8-Promedios de negativos.
9-Diferencia entre positivos y negativos, (positvos-negativos).
    */

    char respuesta = 's';
    int numero = 0;
    int sumanegativo = 0;
    int sumapositivo = 0;
    int cantidadpositivos = 0;
    int cantidadnegativos = 0;
    int cantidadceros = 0;
    int cantidadnumerospares = 0;
    float promediopositivos = 0;
    float promedionegativos = 0;
    int diferenciapositivonegativo = 0;

    do{
       printf("Ingrese un numero: ");
       scanf("%d", &numero);

       // 1-Suma de los negativos.
       // 4-Cantidad de negativos.
       if(numero<0){
        sumanegativo = sumanegativo + numero;
        cantidadnegativos = cantidadnegativos+1;
       }

       // 2-Suma de los positivos.
       // 3-Cantidad de positivos.
       if(numero>0){
        sumapositivo = sumapositivo + numero;
        cantidadpositivos = cantidadpositivos+1;
       }

       // 5-Cantidad de ceros.
       if(numero==0){
        cantidadceros = cantidadceros+1;
       }

       // 6-Cantidad de números pares.
       if(numero%2==0 && numero!=0){
        cantidadnumerospares = cantidadnumerospares+1;
       }

       //respuesta
       fflush(stdin);
       //setbuf(stdin,NULL);
       printf("Desea continuar?[si/no] ");
       scanf("%c", &respuesta);
    }while(respuesta == 's');

        fflush(stdin);
       // 7-Promedio de positivos.
       if(cantidadpositivos > 0){
        promediopositivos = (float) sumapositivo/cantidadpositivos;
       }

       // 8-Promedios de negativos.
       if (cantidadnegativos > 0){
        promedionegativos = sumanegativo/cantidadnegativos;
       }

       // 9-Diferencia entre positivos y negativos, (positvos-negativos).
       diferenciapositivonegativo = sumapositivo - sumanegativo;

       printf("Suma de los negativos: %d\n", sumanegativo);
       printf("Suma de los positivos: %d\n", sumapositivo);
       printf("Cantidad de positivos: %d\n", cantidadpositivos);
       printf("Cantidad de negativos: %d\n", cantidadnegativos);
       printf("Cantidad de ceros: %d\n", cantidadceros);
       printf("Cantidad de números pares: %d\n", cantidadnumerospares);
       printf("Promedio de positivos: %.2f\n", promediopositivos);
       printf("Promedios de negativos: %.2f\n", promedionegativos);
       printf("Diferencia entre positivos y negativos, (positvos-negativos): %d\n", diferenciapositivonegativo);

    return 0;
}
