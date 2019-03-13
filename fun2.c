#include <stdio.h>
void fun1();
void fun2();
void fun3();
int main(){
	fun1();
	fun3();
	return 0;
}
void fun1(){
	fun2();
	printf("1\n");
	
}
void fun2(){
	printf("2\n");
	
}
void fun3(){
	printf("3\n");
	fun2();
}
