#include <stdio.h>
#include <stdlib.h>
#define P 6
int main(){
    /* primer paso se crea 1 for de habre y luego se crea 2 for adicionalespara poder meter el if*/
    for (int filas=0; filas<=P; filas++){
        //Primer for con corchete
        for(int tri=0; tri<6; tri++)
            //Segundo for sin corchete
            for (int columnas=0; columnas<P; columnas++)
                //Tercer for sin corchete
                if(filas==columnas && tri%2==0)
                    //Primer if le vamos a dar una condicion si filas==columnas entonces muestrame el primer asterisco que seria par
                    printf("*");
                    //Pintamos el primer asterisco
                else if (filas+columnas==5 && tri%2!=0)
                    //La condicion else if si el valor 5 es verdadero pintame un * y sino un 0
                    printf("*");
                    //Pintamos el segundo asterisco.
                else
                    //El es el el final de la secuencia si todo esta bien que me pinte un espacio.
                    printf(" ");
                    //Pintamos espacios vacios.
        printf("\n");
        //Por ultimo  pintamos \n 

    }

    return EXIT_SUCCESS;
}
