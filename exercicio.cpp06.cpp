#include <stdio.h>
#include <stdlib.h>

int main(){
	
	system ("color 9f");
	
	int a, resultado, resto;
	a=0;
	resultado=0;
	resto=-1;
	printf("Digite o valor de a:");
	scanf("%d", &a);
	
	resto = a % 2;
	
	if(resto==0)
	{
		resultado = a + 5;
	}
	else
	{
		resultado = a + 8;
	}
	printf("O valor do resultado eh: %d\n", resultado);
	
	return 0;
	
}
