#include <stdio.h>
void Moldura(int l, int a, char c);
int main()
{
	int l, a;
	char c;
	printf("De um valor de largura, altura e um caracter\n");
	scanf("%d %d %c",&l, &a, &c);
	
	Moldura(l,a,c);
	return 0;
}
 
void Moldura(int l, int a, char c){
int i, j, cont=0;
  
  printf("\n");
  
	for(i=0;i<a;i++){
		for(j=0;j<l;j++){
			
			// imprimir o char apenas nas bordas 
			if(i==0||j==0||i==l-1||j==a-1){
					printf("%c",c);
					cont++;
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
		
	}
	printf("%d caracteres", cont);

}
