#include <stdio.h>
int fun(int x){
	x=2;
	printf("%d\n", x);
	return (x+1);
}
int main(){
	int x=4, y;
	y=fun(x);
	printf("%d, %d", x, y);
	return 0;
	system("pause");
}
