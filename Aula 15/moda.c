#include <stdio.h>
#include <stdbool.h>

int quantidade(int valor, int tam, int v[tam])
{
    int contador = 0;
    for(int i=0; i<=tam; i++)
    {
        if(v[i] == valor)
        {
            contador++;
        }
    }
    return contador;
}

int moda(int num, int v[num])
{
    int i=0, moda = v[0];
    for (i=1; i<num; i++)
    {
        if(quantidade(v[i], num, v)> quantidade(moda, num, v))
        {
            moda = v[i];
        }
    }

    return moda;
}

int main()
{
    int num, i=0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", & num);
    int v[num];

    for(i = 0; i<num; i++)
    {
        printf("Valor v[%d]:", i);
        scanf("%d", &v[i]);
    }
    printf("\nA moda é %d\n", moda(num, v));
}
