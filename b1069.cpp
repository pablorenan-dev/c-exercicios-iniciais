#include <stdio.h>
#include <string.h>

int main () {
	int repeats, i, j, k, openCounter, closeCounter, diamondCounter;
	
	char diamondInput[50];
	
	scanf("%s", &diamondInput);
	
	int len = strlen(diamondInput);
	
	for(i = 0;i < repeats;i++){
		
		for(j = 0;j < len;j++){
			// ver <
			if(diamondInput[j] == '<'){
				openCounter = openCounter + 1;
			// ver >
			}else if(diamondInput[j] == '>'){
				closeCounter = closeCounter + 1;
			}
		}
		
		if(openCounter > closeCounter){
			for(j = 0;j <= closeCounter; j++){
				if(openCounter == 0|| closeCounter == 0){
					printf("terminado contagem!");
				}
				diamondCounter = diamondCounter + 1;
				openCounter = openCounter - 1;
				closeCounter = closeCounter - 1;
			}
		}
			
		printf("Diamonds: %d", diamondCounter);
	}
}
