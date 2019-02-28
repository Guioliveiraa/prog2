#include <stdio.h>

float converte(float valor, float cotacao);

int main(){
	float real, dolar, cotacao;
	printf("Entre com o valor em Real: ");
	scanf("%f", &real);
	printf("Entre com o valor do Dolar: ");
	scanf("%f", &cotacao);
	
	dolar = converte(real, cotacao);
	
	printf("O valor em dolar vale %.2f", dolar);
	return 0;
	}
	float converte(float valor, float cotacao)
	{
	return valor*cotacao;
}
	
