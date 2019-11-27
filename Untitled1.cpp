#include <stdio.h>
#include <stdlib.h>
const int TAM=20;

struct regProd{
	int cod;
	int qt;
};

int main(){
	int quantProd[TAM+1];
	FILE*arqEst;
	struct regProd prod;
	int i;
	
	arqEst=fopen("estoque.bin", "rb");
	if(arqEst==NULL){
		printf("Arquivo nao existe!!\n");
	}
	else{
		while(!feof(arqEst)){
			fread(&prod, sizeof(prod), 1, arqEst);
			quantProd[prod.cod]=prod.qt;
		}
		fclose(arqEst);
	}
	FILE*arqComp;
	arqComp=fopen("Compras.bin","rb");
	if(arqComp=NULL){
		printf("Arquivo invalido!\n");
	}
	else{
		while(!feof(arqComp)){
			fread(&prod,sizeof(prod),1,arqComp);
			quantProd[prod.cod]+=prod.qt;
		}
		fclose(arqComp);
	}
	arqEst=fopen("estoque.bin","wb");
	if(arqEst==NULL){
		printf("Arquivo Nulo!\n");
	}
	else{
		for(i=1;i<20;i++){
			if(quantProd>0){
				prod.cod=i;
				prod.qt=quantProd[i];
				fwrite(&prod, sizeof(prod),1,arqEst);
			}
		}
		fclose(arqEst);
		
	}
	return 0;
	
	
	
	
	
}
