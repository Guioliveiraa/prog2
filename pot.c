#include <stdio.h>
int pot;
/*Escreva uma função chamada de potencia que calcula a potência entre dois números inteiros não
negativos (base e expoente) passados como parâmetros e retorna este valor.*/
int potencia(int base, int exp);
int main(){
	int base, exp;
	printf("Entre com um valor base:");
	scanf("%d", &base);
	printf("Entre com um valor exp:");
	scanf("%d", &exp);
	
	potencia(base, exp);
	printf("%d", pot);
	return 0;
	
}
int potencia(int base, int exp){
	
	
	pot=base*exp;
	return pot;
}

