#include <stdio.h>
int main(){
	int a, i, j, u=0;
	
	printf("digite um numero:\n");
	scanf("%d", &a);
	
	
	
	for(i=1;i<=a;i++){
		u++;
		for(j=1;j<=u;j++){
			printf("%d", i);
		}
		printf("\n");
	}
	
}
