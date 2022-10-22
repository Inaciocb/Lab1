#include <stdio.h>

float maiorN(float n1, float n2)
{
	if(n1>n2)
	{
		return n1;
	}else if(n2>n1)
	{
		return n2;
	}

}

int main()
{
	float n1, n2;
	printf("Digite um número: ");
	scanf("%f", &n1);
	printf("Digite outro: ");
	scanf("%f", &n2);

	printf("O maior é %.2f\n", maiorN(n1, n2)); 
	return 0;
}
