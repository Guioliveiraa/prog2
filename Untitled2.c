#include <stdio.h>
#include <string.h>

struct produto
	{ 
		int codigo;
		char descricao[30];
		float preco;
	};

int main(){
	produto produtos[50];
	int i;
	float percent;
	
	for(i=0;i<50;i++){
		
		scanf("%d", &produtos[i].codigo);
		gets(produtos[i].descricao);
		scanf("%f", &produtos[i].preco);
		
	}
	
	printf
	
}
	
	
