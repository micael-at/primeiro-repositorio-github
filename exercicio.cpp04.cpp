#include <stdio.h>
#include <stdlib.h>

int main(){
	
	system("color 9f");
	
	int a;
	int resultado=0;
	printf ("Digite o valor de a:");
	scanf("%d", &a);
	
	if (a >= 0)
	{
		resultado = a *2;
		printf("O valor de a=%d eh positivo e o dobro eh: %d\n", a, resultado);
	}
	
	else{
		resultado = a *3;
		printf("O valor de a=%d eh negativo e o triplo eh: %d\n", a, resultado);
		
	}
	return 0;
}
