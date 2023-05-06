#include <stdio.h>
#include <stdlib.h>

int main(){

system ("color 9f");
	
int A;
int B;
int C;
int soma;

printf("Digite o valor de A:");
scanf("%d", &A);

printf("Digite o valor de B:");
scanf("%d", &B);

printf("Digite o valor de C:");
scanf("%d", &C);

soma= A+ B;

printf("O resultado da soma de %d + %d eh %d\n", A, B, soma);
if(C <= soma){
	printf("O valor de C que eh %d eh menor do que o da soma de A + B que resulta em %d", C,soma );
}



return 0;
}
