//Faça uma função que recebe um número e retorna seu último dígito.
#include <stdio.h>

int ultimodigito(int num)
{
        int ud = num%10;
        return ud;
}


int main()
{
	int v;
	printf("Digite um número: ");
	scanf("%d", &v);
	printf("O último dígito é %d\n", ultimodigito(v));
	return 0;
}

