#include <stdio.h>

int main(){
	int num,soma=0;
	
	printf("Entre com um numero:\n");
	scanf("%d",&num);
	if(num>0){
		while(num>0){
			soma+=num%10;
			num/=10;
		}
	printf("Soma dos algarismos: %d\n",soma);
	}
	else
	printf("Numero igual ou menor que 0\n");
	
	return 0;

}



