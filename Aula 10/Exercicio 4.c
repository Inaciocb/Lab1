//Faça uma função que recebe um ano e retorna um bool dizendo se esse ano é bissexto.
#include <stdio.h>
#include <stdbool.h>
bool bissexto(int ano)
{
	return (ano % 400 == 0 || ano % 4 == 0 && ano % 100 !=0);
}


int main()
{
	int ano;
	printf("Digite um ano: ");
	scanf("%d", &ano);

	if(bissexto(ano)==true)
	{
		printf("É bissexto.\n");
	}else
	{
		printf("Não é bissexto.\n");
	}
	return 0;
}
