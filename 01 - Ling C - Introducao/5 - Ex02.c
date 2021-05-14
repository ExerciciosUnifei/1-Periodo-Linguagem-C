//Exercicio 5
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[]){
	int b;
    
	printf("\n>> Antecessor e sucessor de um numero\n");
	printf("- Digite um numero: ");
	scanf("%d", &b);
    
	printf("\n>> O seu antecessor = %d\n", b - 1);
	printf(">> O seu sucessor = %d\n", b + 1);
    
	return 0;
}
