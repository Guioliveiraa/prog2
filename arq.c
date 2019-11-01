#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	FILE *arq;
	char nome[20];
	int id;
	float nota;
	
	arq = fopen("notas.txt", "r");
	
	while((fgetc(arq))!= EOF ){
		fscanf(arq, "%d;%[^;];%f", &id, &nome, &nota);
		printf("%d; %s; %f\n", id, nome, nota);
	}
	
	return 0;
}
