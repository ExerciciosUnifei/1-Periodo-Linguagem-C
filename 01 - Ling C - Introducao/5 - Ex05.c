//Exercicio 5
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char * argv[]){
	int x; 
    
	printf("\n>> Operacoes numericas\n");
	printf("- Digite um numero: ");
    scanf("%d", &x);

    printf("\n>> O quadrado de %d = %.0lf\n", x, pow(x,2));
    printf(">> O cubo de %d = %.0lf\n", x, pow(x,3));
    printf(">> a raiz quadrada de %d = %.3lf\n", x, sqrt(x));
    printf(">> a raiz cubica de %d = %.3lf\n", x, cbrt(x));

    return 0;
}
