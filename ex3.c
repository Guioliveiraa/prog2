#include <stdio.h>


/*3. Escreva um algoritmo que recebe um vetor de 10 elementos e depois disso analisa o vetor, emitindo a mensagem adequada: 
(a) O vetor está em ordem crescente (b) O vetor está em ordem decrescente (c) O vetor não está em ordem*/
int main(){
	int vet[3], i, cres=0, decres=0, desor=0;
	
	for(i=0;i<3;i++){
		printf("digite o valor %d de vet", i+1);
		scanf("%d", &vet[i]);
	}
	for(i=0;i<3;i++){
	
		
		if(vet[i]<vet[i+1]&&vet[i+1]<vet[i+2]){
		
			cres=1;
		}
		
		if(vet[i]>vet[i+1]&&vet[i+1]>vet[i+2]){
		
			decres=1;
		}
			
	}
	if(cres==1)printf("Crescente\n");
	if(decres==1)printf("decrescente\n");
	
	return 0;
}
