#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Nós temos alguns textos e queremos remover todos 
os parágrafos do texto. Crie um programa que, após ler um texto de um 
arquivo, salve este texto em um novo arquivo sem linhas vazias*/

int main(){
	FILE *arq;
	char ch, texto, aux;
	int linha;
	
	arq = fopen("Clientes.txt", "w");
	if(arq == NULL)printf("Nao foi possivel abrir o arquivo!");
		
	else{
		while((ch=fgetc(arq))!= EOF ){
			if(ch == '\n'){
				linha++;
			}
		}
	}
	x=malloc(sizeof(linha));
	
	while(!feof(arq)){
		
		fscanf(arq,"%s", texto);
		//loop
		for(i=0;i<linha;i++){
		
			if(texto[i] == '\n'){
			}
		}
	}
	
}
