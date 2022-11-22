/*
Refaça os programas anteriores, usando funções para realizar as operações básicas sobre os vetores. 
Por exemplo, no programa 1 crie uma função para ler o vetor, outra para inverter os valores no vetor e 
outra para imprimir o vetor. O programa principal ficaria assim:
*/
#include <stdio.h>


void le_vet(int n, int v[n])
{
    printf("Digite %d valores inteiros\n", n);
    for (int i=0; i<n; i++) 
    {
      scanf("%d", &v[i]);
    }
}

void inverte_vet(int tam, int v[tam])
{
    int v2[tam], i = 0, j = tam-1;
    for(i = 0; i < tam; i++)
    {
        v2[i] = v[j];
        j--;
    }
    i=0;
    for(i = 0; i < tam; i++)
    {
        v[i] = v2[i];
    }
}

void imprime_vet(int tam, int v[tam])
{
    printf("\n");
    for(int i = 0; i < tam; i++)
    {
        printf("%d\n", v[i]);
    }
}    

int main()
{
  int d[10];
  le_vet(10, d);
  inverte_vet(10, d);
  imprime_vet(10, d);
  return 0;
}
