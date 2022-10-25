// Faça uma função que recebe dois números e imprime os
// primos que existem entre esses valores. Por exemplo, se receber
// 5 e 11, deve imprimir 5, 7 e 11; se receber 4 e 12 também.
// A função não retorna nada.
#include <stdio.h>
#include <stdbool.h>

bool verifprimo(int num)
{
    int i = 1, cont = 0;
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cont++;
        }
    }
    if (cont == 2)
    {
        return true;
    }else
    {
        return false;
    }
}


void cpin(int min, int max)
{
    int i = min;
    printf("Os primos nesse intervalo são:\n");
   
    for (i = min; i <= max; i++ )
    {
        if (verifprimo(i) == true)
        {
            printf("\t %d", i);
        }
    }  
        printf("\n");   
}

int main()
{

    int x, y;
    do
    {   
        printf("Digite um número: ");
        scanf("%d", &x);
   
        printf("Digite outro: ");
        scanf("%d", &y);
        if(x>=y)
        {
            printf("\nInsira um intervalo válido.\n\n");
        }
    }while(x>=y );
    
        cpin(x, y);
    
    return 0;
}
