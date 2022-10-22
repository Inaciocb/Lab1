//Faça uma função que recebe 3 números e retorna o que tem valor intermediário.
#include <stdio.h>
//usei vetor pra evitar escrever tudo 3x

float intermediario(float v[3])
{
	if(v[0] > v[1] ^ v[0] > v[2])
	{
		return v[0];
	}else if(v[1] > v[0] ^ v[1] > v[2])
	{
		return v[1];
	}else if(v[2] > v[0] ^ v[2]> v[1])
	{
		return v[2];
	}
}
int main()
{
	float v[3];
	for(int i=0; i<3; i++)
	{
		printf("Digite um número: ");
		scanf("%f", &v[i]);
	}

	printf("O intermediário é: %.2f\n",intermediario(v)); 
	return 0;
}
