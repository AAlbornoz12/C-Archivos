#include <stdio.h>
#include <stdlib.h>
#define ES_IMPAR(f,c)(((f)+(c))% 2)
void pinta_cuadro(int lado){

}
int main(){
for (int fila=0; fila<lado; fila++){
    for(int columnas=0; columnas<lado; columnas++)
        printf("*");
        printf("\n");
}
    return EXIT_SUCCESS;
}
