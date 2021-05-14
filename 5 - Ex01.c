//Exercicio 5 - 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[]){
    int x, y, z;
    float mgeo, mpond, mhar, marit;
    
    printf("\n>> Calculo - Medias\n");
    printf("- Digite o valor de x = ");
    scanf("%d", &x);
    printf("- Digite o valor de y = ");
    scanf("%d", &y);
    printf("- Digite o valor de z = ");
    scanf("%d", &z);
    
    mgeo =  x * y * z;
    mpond = (x + (2.0 * y) + (3.0 * z))/6.0;
    mhar = (1.0/(1.0/x + 1.0/y + 1.0/z));
    marit = (x + y + z)/3.0;
    
    printf("\n>> Media Geometrica = %lf\n", mgeo);
    printf(">> Media Ponderada = %lf\n", mpond);
    printf(">> Media Harmonica = %lf\n", mhar);
    printf(">> Media Aritmetica = %lf\n", marit);

    return 0;
}

