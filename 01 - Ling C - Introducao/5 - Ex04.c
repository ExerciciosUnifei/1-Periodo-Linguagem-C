//Exercicio 5
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char * argv[]){
    float raio, cir, area, vol, pi = 3.14159;
    
    printf("\n>> Dados de uma esfera\n");
	printf("- Digite o valor do raio = ");
    scanf("%f", &raio);
    
    cir = 2*pi*raio;
    area = pi*(raio*raio);
    vol = (3*pi*(raio*raio*raio))/4;
    
	printf("\n>> O comprimento de uma esfera de raio %f = %f\n", raio, cir);
    printf(">> A area de uma esfera de raio %f = %f\n", raio, area);
    printf(">> O volume de uma esfera de raio %f = %f\n", raio, vol);

    return 0;
}
