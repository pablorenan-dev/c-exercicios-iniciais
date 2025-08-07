#include <stdio.h>

#include <stdio.h>

int soma(int *x, int *y, int *result){
	*result = *x * *y;
}

int main( void ){
	int x = 10;
	int y = 20;
	int result = 0;
	
	soma(&x, &y, &result);
	
	printf("PROD = %d", result);
}

