#include <stdio.h>
int num;
int fun(int a, int b);
int main(){
	int first=0, sec=50;
	num=10;
	num+=fun(first, sec);
	printf("%d, %d, %d", num, first, sec);
	
}
int fun(int a, int b){

a=(a+b)/2;
num-=a;
return a;
}
