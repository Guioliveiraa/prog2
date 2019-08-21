#include <stdio.h>
/*4. Escreva um algoritmo que recebe dois vetores 
A e B com 10 e 15 elementos respectivamente e encontra o maior elemento que
está contido ao mesmo tempo nos dois vetores, ou imprime uma mensagem se não houver nenhum elemento em comum.*/
int main(){
	int vet1[2], vet2[4], i, j, igual=0;
		for(i=0;i<2;i++){
 		scanf("%d", &vet1[i]);
	}
		for(i=0;i<4;i++){
 		scanf("%d", &vet2[i]);
	}
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
		
		if(vet1[i]==vet2[j]);
		igual++;
		}
	}
	printf("%d", igual);
		
}
