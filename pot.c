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
	if(exp==0){
			pot=1;
		}
		
	printf("%d", pot);
	return 0;
}
int potencia(int base, int exp){
	pot=1;
	
	if(exp==0){
		pot=1;
	}
	if(exp!=0){
	do{
	    pot *=base;
		exp--;
	}
	while(exp>0);
}
	return pot;
}

