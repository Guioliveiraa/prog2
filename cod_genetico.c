#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	FILE*arq;
	FILE*arq_cod;
	char cod[30];
	int i, cont=0;
	
	arq=fopen("Codigo.txt", "r");
	arq_cod=fopen("Codigo Genetico.txt", "w");
	
	if(arq==NULL){
		printf("Arquivo nulo!");
	}
	else{
		while(!feof(arq)){
		
			fscanf(arq,"%s", &cod);
			
			for(i=0;i<30;i++){
				if(cod[i]==cod[i+1]){
					cont++;
				}
				else{
					
					fprintf(arq_cod,"%c%d",cod[i], cont+1);
					cont=0;
				}
			}
			
		}
	}
	printf("Codigo genetico copiado no arquivo!");
	fclose(arq_cod);
}
	
	
		

