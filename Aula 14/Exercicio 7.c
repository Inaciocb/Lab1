/*
Faça um programa que preenche um vetor com 100 números aleatórios, cada um entre 0 e 99. Depois, o programa deve dizer 
qual foi o maior e o menor número gerado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int qualMaior(int tamanhoVetor, int vetor[tamanhoVetor])
{
    int maior = 0;
    for(int i = 0; i < tamanhoVetor; i++)
    {
        if(vetor[i] > vetor[maior])
        {
            maior = i;
        }
    }
    return vetor[maior];
}

int qualMenor(int tamanhoVetor, int vetor[tamanhoVetor])
{
    int menor = 0;
    for(int i = 1; i < tamanhoVetor; i++)
    {
        if(vetor[i] < vetor[menor])
        {
            menor = i;
        }
    }
    return vetor[menor];
}

int main()
{
    srand(time(333));
    int v[100], maior = v[0], menor = v[0];
    for(int i=0; i<100; i++)
    {
        v[i] = rand() % 100;
    }
    printf("O maior valor gerado foi %d e o menor foi %d\n", qualMaior(100, v), qualMenor(100, v));
    return 0;
}