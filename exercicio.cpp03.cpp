#include <stdio.h>
#include <stdlib.h>

int main(){
	
	system ("color 9f");
	
	int A= 10;
	int B= 10;
	int soma, multiplicacao;
	
	printf("Digite um valor para A: ");
	scanf("%d", &A);
	printf("digite um valor para B:");
	scanf("%d", &B);
	
	soma = A + B;
	multiplicacao = A * B;
	
	if(A==B){
		printf("O valor de A + B eh igua a %d ", soma);
	}
	else{
		printf(" A mutiplicacao de A e B eh igual a: %d", multiplicacao);
	}
	return 0;

}
