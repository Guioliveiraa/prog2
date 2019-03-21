#include <stdio.h>

int fatorial(int  n);
int main(){
	
       int fat, n;
	   printf("Insira um valor\n");
	   scanf("%d", &n);
	   fat = fatorial(n);
	   
       printf("\nFatorial calculado: %d", fat);

	   
	   

return 0;
}
int fatorial(int  n){
	  int fat;
	   for(fat = 1; n > 1; n = n - 1){
	   fat = fat * n;
}
  //     printf("\nFatorial calculado: %d", fat);

return fat;
}
