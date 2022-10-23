//Faça uma função, que usa a função acima (Exercicio 4.c), que recebe um ano e retorna quantos dias esse ano tem.
#include <stdio.h>
#include <stdbool.h>
bool bissexto(int ano)
{
	return (ano % 400 == 0 || ano % 4 == 0 && ano % 100 !=0);
}

int main()
{
	int x;
	printf("Digite um ano: ");
	scanf("%d", &x);
	int dias();
	printf("Tem %d dias\n", dias(x));
	return 0;
}

int dias(int x, int y)
{

        if(bissexto(x)==true)
        {
            y = 366;
        }else
        {
            y = 365;
        }
        return y;
}
