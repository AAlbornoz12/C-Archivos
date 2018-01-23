#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#define MAX 3
int main(){
int salto;
int oportunidades = MAX;
do{
    __fpurge(stdin);
    printf("si el numero es 1 al 3: ");
    scanf("%i", &salto);
    oportunidades--;
}
while (salto < 1  || salto > 1 && oportunidades);
return 0;


}
