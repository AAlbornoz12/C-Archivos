#include <stdio.h>

#include <stdlib.h>

int main (){
    int lado,
        area,
        perimetro;

  system("toilet CUADRADO --filter flop --width 64");
/*Entrada de datos*/
      printf("Lado: ");
      scanf(" %i", &lado);
      /*Calculos*/
  area = lado * lado;
  perimetro = 4 * lado;
/*Salida  de datos*/
  printf("Area: %i\n"
          "Perimetro: %i\n",
          area,perimetro);
  return EXIT_SUCCESS;
}
