#include <stdio.h>
#include <stdlib.h>
#define N 0x15
int main(){
const char *p="the world is and vampire";// inicializar la cadena se coloca antes o despues de la cadena el const
      /* // mi pequeña lexion de hoy sobre el puntero
       * Un puntero es una variable que contiene una direccion:w de memoria
      char const *p; // puntero a un a constanteesto es  la forma correcta
      char * const p;// esto es un puntero constante
      char const * const p;// esto es un puntero fijo a una constante*/
char frase[N] = "a.vampire\n"; // inicializacion
char *d = frase;
d=frase[0];
frase[0]=='v';// notacion de matrizes
*d == 'v';

printf("D ocupa %lu bytes.\n", sizeof(d));

 return EXIT_SUCCESS;


 }
