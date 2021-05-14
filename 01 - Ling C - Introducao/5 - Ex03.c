//Exercicio 5
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char * argv[]){   
    float vol, pi = 3.14159, raio, h;
	
    printf("\n>> Volume do cilindro\n");
	printf("- Digite o valor da altura: ");
    scanf("%f", &h);
    printf("- Digite o valor do raio: ");
    scanf("%f", &raio);
    
	vol = pi*(raio*raio)*h;
    printf("\n>> O volume do cilindro = %f\n", vol);

    return 0;
}
