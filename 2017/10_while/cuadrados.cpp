#include <stdio.h>
#include <stdlib.h>
// Mostrar  con "*"  el perimetro de un cuadrado en funcion a su lado//
int main(){
    int  lado=1;
    int  horizontal=1;
    int vertical=1;

    printf("Por favor introduzca un lado(entre 1 y 20): ");
    scanf("%d", &lado);
    printf("\n");
    // Cuando vamos a introducir un numero pero es error//
while (lado < 1 || lado > 20 ){
    printf("el numero introducido no es correcto\n\n");
    printf("Por favor introduszca la medida del lado(entre 1 y 20): ");
    scanf("%d", &lado);
}//fin del while//

// Si se Introduce Correctamente//
while (vertical <=lado){
    while(horizontal <=lado){
        if(vertical != 1 && vertical !=lado){
            if(horizontal != 1 && horizontal !=lado){
                printf("o");
                horizontal++;}//Fin del if 2 //
            }
        else{
                printf("*");
                horizontal++;}//Fin del if 1//
        }
    else{
            printf("*");
            horizontal++;}//Fin del if 2//

      horizontal =1;
      printf("\n");
      vertical++;}//Fin del While 1//
      printf("\n");

    return EXIT_SUCCESS;
}
