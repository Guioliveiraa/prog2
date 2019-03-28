#include <stdio.h>
#define TAM 4
/*11. Faça um procedimento que carregue um vetor com 80 posições e
encontre o maior e menor valor. Após isto, o procedimento deverá trocar
o maior valor com a primeira posição e o menor valor com a última
posição.*/
int vet[TAM];
void vetor();
int main(){
	int i;
    
    for(i=0;i<TAM;i++){
	    printf("Digite o valor %d do vetor:", i+1);
	    scanf("%d", &vet[i]);
	}
	    
	    vetor();
	    printf("Vetor com o maior elemento na primeira posicao, e a menor na ultima\n");
	    printf("{");
	    for(i=0;i<TAM;i++){
		printf("%d  ", vet[i]);
    }    
    printf("}");
	    
	    return 0;
}
void vetor(){
	
	
int maior=0, i, pmaior, menor=9999, pmenor, aux, aux2;
	//maior do vetor
	maior=vet[0];
	for (i=0;i<TAM;i++){
	    if(vet[i]>maior){
	        maior=vet[i];
	        pmaior=i;
        }
    }
    //trocar valores 
    aux = vet[pmaior];
    vet[pmaior]=vet[0];
    vet[0]=aux;
    
    //menor do vetor
	menor=vet[0];
	for (i=0;i<TAM;i++){
	    if(vet[i]<menor){
	        menor=vet[i];
	        pmenor=i;
        }
    }
    //trocar valores 
    
    aux2 = vet[pmenor];
    vet[pmenor]=vet[3];
    vet[3]=aux2;
    
}
    
    
    

    


	


