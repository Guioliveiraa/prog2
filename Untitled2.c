#include <stdio.h>
int main(){
	int a, i, j;
	
	printf("digite um numero:\n");
	scanf("%d", &a);
	
	int u=a;
	
	for(i=1;i<=a;i++){
		u--;
		for(j=1;j<=u+1;j++){
			printf("%d", j);
		}
		printf("\n");
	}
	
}
