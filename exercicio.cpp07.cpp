#include <stdio.h>
#include <stdlib.h>

int main() {
	
	system ("color 9f");
	
	float altura=0.0;
	float peso=0.0;
	float inc=0.0;
	
	printf("Digite sua altura:");
	scanf("%f", &altura);
	
	printf("Digite o seu peso:");
	scanf("%f", &peso);
	inc= peso/ (altura*altura);
	
	if(inc <=18.5){
	printf("Voce esta abaixo do peso!\n");
	}
	
	if(inc>=18.6 && inc<=25.0){
	printf("Voce esta com peso padrao!\n");
	}
	
	if(inc>=25.1 && inc<=30.0){
	printf("Voce esta acima do peso!\n");
	}
	
	if(inc>=30.1){
	printf("Voce esta com obesidade!\n");
	}
	return 0;
}

	
	
	
