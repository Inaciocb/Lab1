// Faça uma função que recebe 3 números e retorna o menor deles.
#include <stdio.h>

float menor(float n1, float n2, float n3)
{
	if(n1 < n2 && n1 < n3)
	{
		return n1;
	}else if(n2 < n1 && n2 < n3)
	{
		return n2;
	}else if(n3 < n1 && n3 < n2)
	{
		return n3;
	}
}

int main()
{

	float  n1, n2, n3;

	printf("Digite 3 números: \n\nPrimeiro: ");
	scanf("%f", &n1);
	printf("Segundo: ");
	scanf("%f", &n2);
	printf("Terceiro: ");
	scanf("%f", &n3);

	printf("O menor é %.2f\n", menor(n1,n2,n3));
	return 0;
}
