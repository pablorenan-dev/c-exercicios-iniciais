#include <stdio.h>
#include <math.h> // biblioteca de funcoes matematicas

int main(){
	float x, y;
	int tentativas, i;
	scanf("%d", &tentativas);
	
	for(i = 0;i < tentativas;i++){
		
		scanf("%f %f", &x, &y);
		
		float totalRafael = pow(3 * x, 2) + pow(y, 2);
		float totalBeto = 2 * pow(x, 2) + pow(5 * y, 2);
		float totalCarlos = -100 * x + pow(y, 3);
	
		if(totalRafael > totalBeto && totalCarlos < totalRafael){
			printf("Rafael ganhou");
		}else if(totalRafael < totalBeto && totalCarlos < totalBeto){
			printf("Beto ganhou");
		}else if(totalCarlos > totalRafael && totalCarlos > totalBeto){
			printf("Carlos ganhou");
		}else{
			printf("me mata");
		}
	}
}
// arrumado
