#include <stdio.h>
#include <stdlib.h>

int main(){
	
	system ("color 9f");
	
	float saldo= 10000.0;
	float saqueUsuario;
	
	printf("Saldo atual 10.000, digite o valor desejado:");
	scanf ("%f", &saqueUsuario);
	
	if(saqueUsuario <= saldo)
    {
	printf("O valor solicitado de $%.2f sera liberado\n", saqueUsuario);
	}	
	else
	{
	printf("O valor solicitado de %.2f excede o saldo de %.2f por isso nao sera liberado", saqueUsuario, saldo);
	}
	return 0;
}

