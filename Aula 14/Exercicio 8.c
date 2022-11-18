/*
Altere o programa anterior para informar, além do maior e menor números, a posição da primeira ocorrência de cada um
deles.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int quandoAp(int tam, int vetor[tam], int valor)
{
    int i=0;
    for(i = 0; i < tam; i++)
    {
        if(vetor[i] == valor)
        {
            break;
        }
    }
    return i;
}

int qualMaior(int tam, int vetor[tam])
{
    int maior = vetor[0], i=0;
    for(i = 0; i < tam; i++)
    {
        if(vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    return maior;
}

int qualMenor(int tam, int vetor[tam])
{
    int menor = vetor[0], i=0;
    for(i = 0; i < tam; i++)
    {
        if(vetor[i] < menor)
        {
            menor = vetor[0];
        }
    }
    return menor;
}

int main()
{
    srand(time(0));
    int vetor[100];
    
    for(int i = 0; i < 100; i++)
    {
        vetor[i] = rand() % 100;
    }

    printf("Menor: %d, aparece primeiro em vetor[%d]\n"
           "Maior: %d, aparece primeiro em vetor[%d]\n", qualMenor(100, vetor), 
           quandoAp(100, vetor, qualMenor(100, vetor)),
           qualMaior(100, vetor), quandoAp(100, vetor, qualMaior(100, vetor)));
    return 0;
}
