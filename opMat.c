#include <stdio.h>


#define t 3

void op1(float mat1[3][3], float mat2[3][3]); //declarar as funcoes

void op2(float mat1[3][3], float mat2[3][3]);//declarar as funcoes

int main(){
	int i, j;
	float mat1[t][t], mat2[t][t]; //criar matrizes
	
	//ler mat1
	for(i=0;i<t;i++){
		for(j=0;j<t;j++){
			printf("Digite o valor %d,%d da mat1:", i+1, j+1); //
			scanf("%f", &mat1[i][j]);
		}
	}
	//ler mat2
		for(i=0;i<t;i++){
			for(j=0;j<t;j++){
				printf("Digite o valor %d,%d da mat2:", i+1, j+1);
				scanf("%f", &mat2[i][j]);
			}
		}
		
	//mostrar mat1
	printf("\nMat1:\n\n");
	for(i=0;i<t;i++){
		for(j=0;j<t;j++){
			printf("| ");
			printf("%.2f ", mat1[i][j]);
		}
		printf("|");
		printf("\n\n");

	}
	
	//mostrar mat2
	printf("Mat2:\n\n");
	for(i=0;i<t;i++){
		for(j=0;j<t;j++){
			printf("| ");
			printf("%.2f ", mat2[i][j]);
		}
		printf("|");
		printf("\n\n");

	}

	//chamar funcoes
	op1(mat1,mat2);
	op2(mat1,mat2);
return 0;

}

void op1(float mat1[3][3], float mat2[3][3]){ //priemira funcao (op2)
	int i, j;
	float mat3[t][t];
	
	//calcular mat3 da op1
	for(i=0;i<t;i++){
		for(j=0;j<t;j++){
			mat3[i][j]=mat1[i][j]-mat2[i][j];
		}
	}
	
	//mostrar mat3 da op1
	printf("Mat3 da op1:\n\n");
	for(i=0;i<t;i++){
		for(j=0;j<t;j++){
			printf("| ");
			printf("%.2f ", mat3[i][j]);
		}
		printf("|");
		printf("\n\n");
		
	}
}

void op2(float mat1[3][3], float mat2[3][3]){ //segunda funcao (op2)
	int i, j;
	float mat3[t][t];

	//calcular mat3 da op2
	for(i=0;i<t;i++){
		for(j=0;j<t;j++){
			mat3[i][j]=mat1[i][j]/mat2[i][j];
		}
	}
	
	//mostrar mat3 da op2
	printf("Mat3 da op2:\n\n");
	for(i=0;i<t;i++){
		for(j=0;j<t;j++){
			printf("| ");
			printf("%.2f ", mat3[i][j]);
		}
		printf("|");
		printf("\n\n");

	}
}

	
	
	
	
	
	
	
	
	


