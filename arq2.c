#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	FILE *arq;
	char nome[20];
	int id;
	float nota;
	
	while(1){
	
		printf("digite o id:");
		scanf("%d", &id);
		if(id==0)break;
		fflush(stdin);
		printf("nome:");
		gets(nome);
		fflush(stdin);
		printf("nota:");
		scanf("%f", &nota);
	
	arq=fopen("notas2.txt", "w");
	
	fprintf(arq, "%d; %s; %.2f\n", id, nome, nota);
	
	}
	
	fclose(arq);
}
