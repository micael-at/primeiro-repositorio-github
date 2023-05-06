#include <stdio.h>
#include <stdlib.h>



int main(){
	
	system ("color 9f");
	int a, b, c;
	int maior;
	int menor;
	
	printf("Digite o valor de a:");
	scanf("%d", &a);
	printf("Digite o valor de b:");
	scanf("%d", &b);
	printf("Digite o valor de c:");
	scanf("%d", &c);
	printf("a=%d b=%d c=%d\n", a, b, c);
	
	
	if(a >= b && a >= c)
	{
		maior = a;
		if(b <= c)
		{
			menor=b;
		}		
		else{
			menor=c;
		}
	}
	if(b>a && b>c)
	{
		maior=b;
		if(a>c)
		{
			menor=c;
		}
		else{
			menor=a;
		}
	}	 
	 if(c>a && c>b)
	 {
	 	maior=c;
	 	if(a>b){
	 		menor=b;
	 	}
	 	else{
	 	menor=a;
	 	}
	 }
	 
	 printf("O maior eh: %d\n", maior);
	 printf("O menor eh: %d\n", menor);
	
 	return 0;
}
