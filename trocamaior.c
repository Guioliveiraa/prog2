#include <stdio.h>
#define TAM 5
/* funcao q troca o maior elemento de um vetor para um posicao passada*/
void trocamaior(int pos);
int vet[TAM];

int main(){
	int i;
	//ler vetor
	    for(i=0;i<TAM;i++){
		printf("\nDigite o elemento %d do vetor:", i);
		scanf("%d", &vet[i]);
	    }
	    //trocar valor
	    trocamaior(0);
	    
	    //printar vetor
	    for(i=0;i<TAM;i++){
		printf("%d  ", vet[i]);
    }    
return 0;
}

void trocamaior(int pos){
	int maior=0, i, pmaior;
	//maior do vetor
	maior=vet[0];
	for (i=0;i<TAM;i++){
	    if(vet[i]>maior){
	        maior=vet[i];
	        pmaior=i;
        }
    }
    //trocar valores 
    int aux = vet[pmaior];
    vet[pmaior]=vet[pos];
    vet[pos]=aux;
      
}

    
    

