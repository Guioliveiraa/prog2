#include <stdio.h>
int pot;
/*Escreva uma fun��o chamada de potencia que calcula a pot�ncia entre dois n�meros inteiros n�o
negativos (base e expoente) passados como par�metros e retorna este valor.*/
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

