#include <stdio.h>

int divisao(int dividendo, int divisor, int *resto);

int main(){
	int dividendo, divisor;	
	printf("Entre com um numero n1:");
	scanf("%d", &dividendo);
	printf("Entre com um numero n2:");
	scanf("%d", &divisor);
	
	int resto;
	int result=divisao(dividendo, divisor, &resto);
	
	printf("Resultado: %d\n", result);
	printf("Resto da divisao: %d", resto);
	
	return 0;
	
}

int divisao(int dividendo, int divisor, int *resto){
	int result = dividendo/divisor;
	
	*resto=dividendo%divisor;
	
	return result;
}

