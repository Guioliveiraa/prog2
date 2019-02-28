#include <stdio.h>


int quadrado(int a);

int main(){
	int n1, n2;
	printf("Entre com um numero: ");
	scanf("%d", &n1);
	
	n2 = quadrado(n1);
	
	printf("O seu quadrado vale: %d\n", n2);
	return 0;
}
int quadrado(int a)
{
	return a*a;
	}




