#include <stdio.h>
#include <string.h>
struct mot{
	char nome[100];
	char rg[15];
	char cnh[20];
	int *pontos;
	
};
int piores();
int lerBinario();
void txt();

int main(){
	struct mot motoristas ;
	printf("Nome:\n");
	gets(motoristas.nome);
	fflush(stdin);
	printf("RG:\n");
	gets(motoristas.rg);
	fflush(stdin);
	printf("CNH:\n");
	gets(motoristas.cnh);
	fflush(stdin);
	printf("Pontos:\n");
	scanf("%d", &motoristas.pontos);
	
	FILE*arq;
	
	arq = fopen("motoristas.bin","a");
	fprintf(arq,"%s;%s;%s;%d\n", motoristas.nome, motoristas.rg, motoristas.rg, motoristas.cnh, motoristas.pontos);   
	fclose(arq);
    getch();
    system ("cls");
	
	lerBinario();
	
	txt(*nome, *pontos);
	
	return 0;
	
	
}

int lerBinario(){
	
	char *nome[30], cnh[20], rg[20];
	int *pontos;
	FILE*arq;
	
	arq = fopen("motoristas.bin", "r");
	
	if (arq == NULL){
    printf("Problemas na abertura do arquivo\n");
    }
	
	fscanf(arq,"%s;%[^;];%[^;];%d", &nome, cnh, rg, &pontos);
	
	return *nome, *pontos;
}

void txt(){
	
	FILE*arq;
	
	arq = fopen("piores.txt", "r");
	
	if (arq == NULL){
    printf("Problemas na abertura do arquivo\n");
    return 0;
    }
    
    if (pontos>21);{
		fprintf(arq, "%s; %d",nome, pontos);
	}
}




