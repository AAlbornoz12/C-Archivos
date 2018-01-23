#include <stdio.h>
#include <stdlib.h>
int suma (int op1, int op2){return op1+op2;}
double suma(double op1, double op2){return op1+op2;}
int main(){
  int resultados;
   double resultado;
  resultados = suma (2,3);
  resultado = suma (9,6);
  printf("%i\n", resultados);
  printf("%f\n", resultado);
    return EXIT_SUCCESS;
}
