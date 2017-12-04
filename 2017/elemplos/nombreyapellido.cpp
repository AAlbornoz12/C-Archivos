
#include <stdio.h>
#include <stdlib.h>

int main(){
   char minombre [23];
   char miapellido[35];
   printf("Dime cual es tu Nombre: ");
   scanf(" %s", minombre);
   printf("Dime cual es tu Apellido: ");
   scanf(" %s",miapellido);
   printf("Tu te llamas. %s.\n %s.\n", minombre, miapellido);
 return EXIT_SUCCESS;

 }
