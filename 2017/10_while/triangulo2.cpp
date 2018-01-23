#include <stdio.h>
#include <stdlib.h>

int main(int poseido, char *poseedor[]){
    char triangulo= '*';
    int alto;
    if(poseido >=2)
        triangulo=poseedor[0][1];
    printf("\n\tIntroduce el alto: ");
    scanf(" %i", &alto);
    for(int cadena=0; cadena<alto; cadena++){
        for(int soporte=0; soporte<cadena+1; soporte++)
            printf("%c", triangulo);
        printf("\n");

    }

    return EXIT_SUCCESS;
}
