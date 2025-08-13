#include <stdio.h>

int soma(int *x, int *y, int *result){
	*result = *x + *y;
}

int main( void ){
	
	int x = 0;
	int y = 0;
	
	fflush( stdin );
	scanf("%d", &x);
	fflush( stdin );
	scanf("%d", &y);
	
	int result = 0;
	
	soma(&x, &y, &result);
	
	printf("SOMA = %d\n", result);
}

