#include <stdio.h>
#include <stdlib.h>
#define TRI 1
#define CUA  2
#define ROM  3
#define CIR  4
#define REC  5
const char *opcion[] = {
    "Triangulo",
    "Cuadrado",
    "Rombo",
    "Circulo",
    "Rectangulo",
    NULL
};


int main(){
    unsigned eleccion;
  printf( "Elige la figura:\n" "\n" );

      for (int i=0; i<6; i++)
     printf("\t%i. %s.\n", i+1, opcion[i]);

       printf("\n" "\tOpción: ");

           scanf(" %u", &eleccion);

               switch(eleccion) {
                           case TRI:
                          printf("triangulo");
                           break;
                           case CUA:
                           printf("cuadrado");
                           break;
                           case ROM:
                          printf("rombo");
                          break;
                           case CIR:
                          printf("Circulo");
                          break;
                           case REC:
                          printf("rectangulo");
                          break;
                          default:
                          printf("Del 1 al 5, borrico.\n");
                          break;
                                }

               printf("\n");
               
    return EXIT_SUCCESS;
}
