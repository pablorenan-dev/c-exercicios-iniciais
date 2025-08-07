#include <stdio.h>
#include <string.h>

int main(){
	char input[5] = "";
	
	fgets(input, sizeof(input), stdin);
	
	char *teste = strtok(input, " ");
	
	printf("palavra 1: %s", teste);
	
	teste = strtok(NULL, " ");
	
	printf("palavra 2: %s", teste);
}
