#include <stdio.h>
#include <stdbool.h>

bool verifprimo(int numero)
{
	int cont=0;
	int i=0;
	for (i=1; i<=numero; i++)
	{
		if(numero%i == 0)
		{
			cont++;
		}
	}
	if(cont==2)
	{
		return true;
	}else
	{
		return false;
	}

}

int maiorprimo(int num)
{
	num++;
	while(verifprimo(num)== false)
	{
		num++;
	}
	int mprimo = num;
	return mprimo;
}

int main()
{
	int num;
	printf("Digite um número: ");
	scanf ("%d", &num);

	printf("O menor primo maior que"
	       " %d é %d.\n", num, maiorprimo(num));
	return 0;
}

